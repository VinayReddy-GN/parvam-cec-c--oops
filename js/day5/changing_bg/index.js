const color = document.getElementById("color").value;
console.log(color);
document.body.style.background= color;

document.getElementById('color').addEventListener("input",(e) =>{
    document.body.style.background=e.target.value;
});