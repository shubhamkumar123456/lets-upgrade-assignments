
// function show1(){
//   return  ("hello my name is shubham");
// }
function show(){
document.getElementById('show1').innerHTML="hello my name is shubham";

}




//  let x=show1('arav');

const counter=(function(){
    let counter=0;
    return function(){
        counter=counter+1;
        return counter;
    }
})();

function display(){
    document.getElementById('demo').innerHTML=counter()
}



function display1(a){
    
   let name1= document.getElementById('name').innerHTML=counter1();
    function counter1(){
        a=0+1;
        return a;
    
     }
}