import express from 'express';

const app = express();
const PORT = 3000;

app.get('/', (req, res) => {
    res.send("Hello there!!!");
});

app.get('/user', (req, res) => {
    res.send("This is the user page.");
});

app.listen(PORT, ()=>{
    console.log(`Server is running on PORT ${PORT}`);
});