var express = require("express");

var app = express();

app.set("view options", {layout: false});

var port = Number(process.env.PORT || 5000);
app.listen(port, function() {
	console.log("Listening on " + port);
});


app.get("/", function(req, res){
	res.sendFile(__dirname + "/file_loader.php");
});