let cookies = 0;
let boton = document.querySelector('#smaugbutton');

function feeder() {
    
    switch (cookies){
        case 0:
            window.alert("You have fed Smaug a cookie!");
            cookies++;
            return cookies;
        case 1:
            window.alert("You have fed Smaug 2 cookies!");
            cookies++;
            return cookies;
        case 2:
            window.alert("You have fed Smaug 3 cookies!");
            cookies ++;
            return cookies;
        default:
            window.alert("You've fed Smaug too many cookies and he's no longer hungry.");
            break;


    }
}
boton.addEventListener("click",feeder);
