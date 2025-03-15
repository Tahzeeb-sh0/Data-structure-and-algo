let arr = [28,,55,43,23,45,78,76,54,66,90,60,50,60,65,31,21,32,43,45];
const target = 66;
const arrLength = arr.length -1;

for (let i = 0; i <arrLength; i++) {
    
    if (arr[i] == target) {
        console.log('target value',arr[i])
        console.log("index:",i)
        break;
    }
    
}