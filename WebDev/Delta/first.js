// let a = prompt("Enter Number One");
// let b = prompt("Enter Number Two");

// // Convert strings to numbers
// a = parseInt(a);
// b = parseInt(b);

// console.log("First Num is", a, "& second Num is", b);

// console.log("Sum =", a + b);
// console.log("Difference =", a - b);




//STRING: String is an array of characters 

    // let str = "Manjit"
    // console.log(str);

    // let str2 = 'MANJIT'
    // console.log(str2);

    // console.log(str.length);
    // console.log(str[2]);


//Template Literalas: It's a special way of writing a string
//Generally used when we pring a big sentence which has some vaiables too. E.G
// Syntax: stringText ${placeHolder} stringText

    // let cName = prompt("Enter your name");
    // let age = prompt("Enter your age");
    // let newString = `Name of candidate is ${cName} and Age is ${age}.`
    // if(age > 18){
    //     console.log(`${newString} \nHe can vote.`);
    // }
    // else{
    //     console.log(`${newString} \nHe can't vote.`);
    // }

// ESCAPE CHARACTERS: These are combinely count as one character
    // \n => Next Line
    // \t => Tab Space


//STRING METHODS: Note all the methods are "PASS-BY-VALUE" -> Does not affect the original value
    // let str = "Manjit";
    // let str2 = str;
    // str2 += "Singh"

//for-of
    // let str = "Manjit";
    // for(let i of str){ //i is iterator
    //     console.log(i);
    // }

// for-in :GENERALLY USED FOR OBJECT ITERATOR ACCESSING 
    // let student = {
    //     name : "Manjit",
    //     rollNo : "121ME0557",
    //     phNo: "9078902941"
    // };

    // for(let i in student){
    //     console.log(i , " : ", student[i]);
    // }
// Generate a random integer between 1 and 100 (adjust the range as needed)
    // const min = 1;
    // const max = 100;
    // const targetNumber = Math.floor(Math.random() * (max - min + 1)) + min;
    // // Random method generates number between 0 and 1 => Decimal number
    // let userGuess;
    // let attempts = 0;

    // while (userGuess !== targetNumber) {
    //     userGuess = parseInt(prompt("Enter your guess (between 1 and 100):"), 10);
    //     attempts++;

    //     if(userGuess === targetNumber){
    //         console.log(`Congratulations! You guessed the number ${targetNumber} in ${attempts} attempts.`);
    //     } 
    //     else if(userGuess < targetNumber) {
    //         console.log("Try a higher number.");
    //     }
    //     else{
    //         console.log("Try a lower number.");
    //     }
    // }
// Template Literals
    // It is a special type of string which is mainly used in accessing the key and values of an object and write them in a single line
    // syntax of placeholder: `Comment ${Expression}`
    // let car = {
    //     color : "red",
    //     gear : 5,
    //     brand : "Audi",
    // };
    // console.log(`The brand is ${car.brand}. Car is ${car.color} & have ${car.gear} gears.`)
//STRING
    let str = " My name is MANJIT MAJHI. ";
    str.trim(); // Removes edge whitespaces
    str.slice(0, 5); //Gives characters from index 0 to 5
    let str1 = "I am an Engineering Student.";

    str.concat(str1); // concat string str with str1
    str.replace("is", "are");
    