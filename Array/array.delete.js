let arr = [38, 34, 56, 34, 65, 75, 54, 35, 62, 45, 67];
                       65, 75, 54, 35, 62, 45, 67, 67
let position = 3;
let arrLength = arr.length - 1;
console.log(arr);
for (let i = position; i < arrLength; i++) {
  arr[i] = arr[i + 1];
}
arr.length = arr.length - 1;
console.log(arr);
