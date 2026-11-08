let reader = require("readline-sync");

let arrowFunctionExample = ()=>{
    let number = reader.question("Enter a digit: ");
    return number;
}

console.log(arrowFunctionExample())