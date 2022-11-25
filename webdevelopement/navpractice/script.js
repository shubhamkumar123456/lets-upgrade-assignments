// const togglebutton=document.getElementsByClassName('bar')[0];
const togglebutton=document.getElementById('icon');
const navlink=document.getElementById('navlist');

togglebutton.addEventListener('click',()=>{
    navlink.classList.toggle('active')
    console.log( navlink.classList.toggle('active'))
    // navlink.style.display='flex';
    // navlink.style.display='none';
    // navlink.style.display='flex';
   
})