const rows = 5;
let i = rows;

while (i >= 1) {
    let str = "";


    let j = 1;
    while (j <= rows - i) {
        str += " ";
        j++;
    }


    let k = 1;
    while (k <= 2 * i - 1) {
        str += "*";
        k++;
    }

    console.log(str);
    i--;
}