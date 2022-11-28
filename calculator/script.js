const userInput=document.getElementById("userInput");
var string="";

function press(num){
    string+=num;
    userInput.value=string;
}
function equal(){
    userInput.value=eval(string);
    string=""; 
}

function erase(){
    string="";
    userInput.value=string;
}