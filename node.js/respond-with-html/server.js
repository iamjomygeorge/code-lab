const http = require("http");
const fs = require("fs");

const PORT = 3000;

const server = http.createServer(function (req, res){
    fs.readFile("index.html", function(err, data){
        res.writeHead(200, {'Content-Type':'text/html'})
        res.write(data);
    })
}).listen(PORT);