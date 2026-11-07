var reader = require("readline-sync");

var array = [];
var limit = reader.question("Enter the limit: ");
for(var i=0; i<limit; i++){
    array[i] = reader.question();
}

console.log("Array items are:");
for(var i=0; i<limit; i++){
    console.log(array[i]);
}