//Sorted array
// const inputArray = [
//   1,
//   3,
//   5,
//   5,
//   8,
//   9,
//   10,
//   10,
//   10,
//   15,
//   16,
//   16,
//   16,
//   16,
//   100,
//   110,
//   110,
// ];

//Unsorted
const inputArray = [2, 1, 4, 2, 1, 5, 7, 4, 10, 8, 8, 9];

const max_number = (a) => {
  let max = null;
  for (i = 0; i < a.length; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
};

// Time complexity O(n)

const findDuplicates = (array) => {
  let lastDuplicate = null;
  for (let i = 0; i < array.length; i++) {
    if (array[i] === array[i + 1]) {
      if (array[i] !== lastDuplicate) {
        console.log(`Duplicate found ${array[i]}`);
        lastDuplicate = array[i];
      }
    }
  }
};

// findDuplicates(inputArray);

//Using hash table
const findDuplicatesUsingHashTechnique = (array) => {
  let hashTable = new Array(max_number(array)).fill(0);
  for (let i = 0; i < array.length; i++) {
    hashTable[array[i]]++;
  }
  for (let i = 0; i < hashTable.length - 1; i++) {
    if (hashTable[i] !== 0) {
      console.log(`${i} is repeated for ${hashTable[i]} times`);
    }
  }
};

findDuplicatesUsingHashTechnique(inputArray);
