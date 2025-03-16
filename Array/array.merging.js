let arr1 = [1, 2, 34, 5, 5, 63, 33, 44, 55, 66, 77, 88, 9, 39];
let arr2 = [13, 22, 34, 45, 56, 63, 33, 44, 55, 28, 9, 39];
let arr3 = [];

for (let i = 0; i < arr1.length; i++) {
  arr3[i] = arr1[i];
}

for (let j = 0; j < arr2.length; j++) {
  arr3[arr1.length + j] = arr2[j];
}

console.log(arr3);
