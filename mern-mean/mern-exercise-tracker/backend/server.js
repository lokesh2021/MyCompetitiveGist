const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
const app = express();
const port = process.env.PORT || 5000;

require('dotenv').config();

app.use(cors());
app.use(express.json());

const uri = process.env.ATLAS_URI; //database URI to connect to the mongo database
mongoose.connect(uri, { useNewUrlParser: true, useCreateIndex: true });

const connection = mongoose.connection;
connection.once('open', () => { //once the open connection is successfull it prints the below statement
    console.log("MongoDB database connection established successfully");
})

const exerciseRouter = require('./routes/exercises');
const usersRouter = require('./routes/users');
app.use('/exercises', exerciseRouter);
app.use('/users', usersRouter);


app.listen(port, () => {
    console.log('server is running on port: ' + port);
});