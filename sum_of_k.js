const array = [1, 9, 2, 8, 4, 5, 6, 10];

const max_number = (a) => {
  let max = null;
  for (i = 0; i < a.length; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
};

const SumOfK = (arr, sum) => {
  let hash = new Array(max_number(arr)).fill(0);
  for (let i = 0; i < arr.length - 1; i++) {
    if (hash[sum - arr[i]] != 0) {
      console.log(sum - arr[i], arr[i]);
    }
    hash[arr[i]]++;
  }
};

SumOfK(array, 10);
