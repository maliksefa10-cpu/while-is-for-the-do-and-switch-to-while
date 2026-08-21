const row = 5;
let i = 0;

do {
    let str = "";
    let k = 0;
    
    do {
        str += "*";
        k++;
    } while (k < i + 1);
    
    console.log(str);
    i++;
} while (i < row);