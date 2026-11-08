const http = require("http");

const PORT = 3000;

http.createServer(test).listen(PORT);

function test(req, res){
    res.status(200).write("Hello there!");
    res.end();
}