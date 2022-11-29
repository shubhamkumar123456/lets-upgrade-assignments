
function indianTime() {
    document.getElementById('one').innerHTML=new Date().toLocaleTimeString("en-us",{timezone:'asia/kolkata',timeStyle:'medium',hourCycle:'h12'});;
   
}
indianTime();
setInterval(indianTime,1000);


var ChinaTime=function() {
    document.getElementById('two').innerHTML=new Date().toLocaleString("en-US",{timeZone:'asia/Shanghai',timeStyle:'medium',hourCycle:'h12'});;
}
ChinaTime();
setInterval(ChinaTime,1000);

var USAtime=function() {
    document.getElementById('three').innerHTML=new Date().toLocaleString("en-US",{timeZone:'America/New_york',timeStyle:'medium',hourCycle:'h12'});;
}
USAtime();
setInterval(USAtime,1000);

var Japantime=function() {
    document.getElementById('four').innerHTML=new Date().toLocaleString("en-us",{timeZone:'Asia/Tokyo',timeStyle:'medium',hourCycle:'h12'});;
}
Japantime();
setInterval(Japantime,1000);

