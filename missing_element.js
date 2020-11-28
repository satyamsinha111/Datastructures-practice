const array = [1, 13, 5, 12, 9, 10, 4, 11, 20, 90, 12, 45];

const max_number = (a) => {
  let max = null;
  for (i = 0; i < a.length; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
};

const finding_missing_element = (a) => {
  const hash_table = new Array(max_number(a)).fill(0);
  console.log(hash_table);
  for (let i = 0; i < a.length; i++) {
    hash_table[a[i]] = 1;
  }
  console.log(hash_table);
  for (i = 0; i <= hash_table.length; i++) {
    if (hash_table[i] == 0 && i !== 0) {
      console.log(`${i} is missing`);
    }
  }
};

console.log(max_number(array));
console.log(finding_missing_element(array));
