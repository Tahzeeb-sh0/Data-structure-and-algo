let arr = [10, 37, 29, 29, 45, 49, 98, 45];
const position = 2;
const newValue = 99;
let arrLength = arr.length - 1;

for (let i = arrLength; i >= 0; i--) {
  if (i >= position) {
    arr[i + 1] = arr[i];

    if (i == position) {
      arr[i] = newValue;
    }
  }
}
