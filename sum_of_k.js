const array = [1, 9, 2, 8, 4, 5, 6, 10, 1];

const max_number = (a) => {
  let max = null;
  for (i = 0; i < a.length; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
};

//!TODO :- Sum of k

//!!Wrong
// function SumOfK(arr, sum) {
//   let hash = new Array(max_number(arr)).fill(0);
//   for (let i = 0; i < arr.length; i++) {
//     const req = sum - arr[i];
//     hash[arr[i]]++;
//     if (hash[req] === 0) {
//       hash[req]++;
//     }
//     if (hash[req] !== 0) {
//       console.log(req, arr[1]);
//     }
//   }
// }

// SumOfK(array, 10);
