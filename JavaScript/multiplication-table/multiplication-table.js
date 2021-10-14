const prompt = require('prompt-sync')();

//prints the multiplication table of all numbers up to the number entered

function MultiplicationTable(numero) {

    console.log('===========================')

    for (let i = 1; i <= numero; i++) {
        console.log(`the multiplication table of number ${i} is:`)

        for (let j = 1; j <= 10; j++) {
            console.log(i + '*' + j + ' = ' + (i * j));
        }
        console.log('===========================')
    }
}

let number = prompt('Type a number: ');
MultiplicationTable(number)