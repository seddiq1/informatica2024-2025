let num = document.getElementById("num1");
let num2 = document.getElementById("num2");
function controlla() {
    if ((num + num2)%2 == 0) {
        return 0;
    }else
        return 1;
}
let temp = controlla();
function cambiaColore() {
    if(temp == 0)
        document.getElementById("div").style.color = colore;
}