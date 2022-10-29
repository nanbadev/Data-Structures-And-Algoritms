

const arr = [1, 7, 3, 19, 8, 3, 2];

for(let i=0;i<arr.length-1;i++){
    let control = true;
    for(let j=0;j<arr.length-i-1;j++){
        if(arr[j]>arr[j+1]){
            let temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            control = false;
        }
    }
    if(control){
        break;
    }
}
arr.forEach((val)=>console.log(val));
