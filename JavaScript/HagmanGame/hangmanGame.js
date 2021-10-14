const prompt = require('prompt-sync')()

function printWordHide() {
    console.log(wordHide.toString().replace(/,/g, ''))
}

function hangman() {
    switch (chances) {
        case 6:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|')
                console.log('|')
                console.log('|')
                console.log('|')
                console.log('|========|')
                break
            }
        case 5:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|    O')
                console.log('|')
                console.log('|')
                console.log('|')
                console.log('|========|')
                break
            }
        case 4:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|    O')
                console.log('|  /')
                console.log('|')
                console.log('|')
                console.log('|========|')
                break
            }
        case 3:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|    O')
                console.log('|  / |')
                console.log('|')
                console.log('|')
                console.log('|========|')
                break
            }
        case 2:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|    O')
                console.log('|  / | \\ ')
                console.log('|')
                console.log('|')
                console.log('|========|')
                break
            }
        case 1:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|    O')
                console.log('|  / | \\ ')
                console.log('|   /')
                console.log('|')
                break
            }
        case 0:
            {
                console.log('\n\n-----|')
                console.log('|    |')
                console.log('|    O')
                console.log('|  / | \\ ')
                console.log('|   / \\')
                console.log('|')
                break
            }
    }
}

console.log('------ HANGMAN GAME -------')
prompt('enter anything to start... => ')
console.clear()

const wordToGuess = prompt('PLAYER 1, type a word for PLAYER 2 to guess: ').toUpperCase()
console.clear()

let wordHide = []

for (x of wordToGuess) {
    wordHide.push(x.replace(/./g, ' ___ '))
}

console.log('Inserted word! Total letters: ' + wordToGuess.length + '\n')
printWordHide()

console.log('\n Your turn PLAYER 2! Time to try to guess the word! You have 7 chances! \n')

let chances = 7
let typedLetters = ''

do {
    let letter = prompt('Type a letter: ').toUpperCase()

    while (typedLetters.includes(letter)) {
        console.log('Letter already typed...')
        letter = prompt('Type other letter: ').toUpperCase()
    }

    typedLetters += letter
    let positionLettersFound = []

    if (wordToGuess.includes(letter)) {
        for (x in wordToGuess) {
            if (wordToGuess[x] == letter) {
                positionLettersFound.push(x)
            }
        }
        console.clear()

        for (x in wordHide) {
            if (positionLettersFound.includes(x)) {
                wordHide[x] = ' ' + letter + ' '
            }
        }

        printWordHide()

        positionLettersFound.length == 1
            ? console.log('You found ' + positionLettersFound.length + ' letter! \n')
            : console.log('You found ' + positionLettersFound.length + ' letters! \n')
    } else {
        chances--
        console.clear()
        hangman()
        console.log('You missed... Still has ' + chances + ' chances')
        printWordHide()
    }

    if(!wordHide.includes(' ___ ')) {
        console.clear()
        printWordHide()
        console.log('YOU WIN! :)')
        return
    }

    if(chances == 0) {
        console.clear()
        hangman()
        console.log('YOU LOSE... :(')
    }

} while (chances > 0)


