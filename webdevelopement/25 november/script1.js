const upperset="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const lowerset="abcdefghijklmnopqrstuvwxyz";
const Numberset="1234567890";
const symbolset="~!@#$%^&*()_+/";

const upperInput=document.getElementById('uppercase');
const lowerInput=document.getElementById('lowercase');
const numberInput=document.getElementById('numbers');
const symbolInput=document.getElementById('symbols');
const totalchar=document.getElementById('total-char');
const passwordbox=document.getElementById('pass-box');


const getRandomData=(dataset)=>{
    return dataset[Math.floor(Math.random() *dataset.length)]
}

const generatePassword=(password= "")=>{
   
    if(upperInput.checked){
        password+=getRandomData(upperset);
    }
    if(lowerInput.checked){
        password+=getRandomData(lowerset);
    }
    if(numberInput.checked){
        password+=getRandomData(Numberset);
    }
    if(symbolInput.checked){
        password+=getRandomData(symbolset);
    }
    if(password.length < totalchar.value){
        return generatePassword(password)
    }
   passwordbox.innerHTML=trimstring(password,totalchar.value)
}
    document.getElementsByClassName("btn")[0].addEventListener("click",function(){
        generatePassword();
    })



    function trimstring(str,num){
        if(str.length > num){
            let substr = str.substring(0,num);
            return substr;
        }else{
            return str;
        }
    }
    

