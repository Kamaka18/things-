let formElement = document.querySelector('#ticketForm'); //Give the Form the id "ticketForm", or change the orange text to match the id//
let ticketholder = document.querySelector('#name'); //Comment: Give the ticket buyer in the form the id "name"//
let age = document.querySelector('#age'); //Set an age input area with the id "age"//
let sauroncheck = document.querySelector('#sauron'); //make checkbox with the id 'sauron'//
formElement.addEventListener('submit', check_form); //Initiates "check_form" when submit button is pushed
function check_form(){
    if (!sauroncheck.checked){
        formElement.preventDefault();
    }
    else if (ticketholder.length = 0 | isNaN(ticketholder) | ticketholder == ''){
        formElement.preventDefault();
    }
    else if (age == '' | age < 5 | age > 110 | isNaN(age)){ //prevent submission if age is blank, less than 5, or more than 110, or is NaN//
        formElement.preventDefault();
    }
    else{
        window.alert("Your form looks good! You will receive your tickets via carrier pidgeon!")
    } 
}