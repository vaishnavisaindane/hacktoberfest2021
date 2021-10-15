const rockPaperScissors = (p1, p2) => {

    if(p1 == 'rock') {
        return p2 == 'rock' 
        ? 'draw' 
        : p2 == 'paper' 
            ? 'Player 2 won!'
            : 'Player 1 won!'
    }

    if(p1 == 'paper') {
        return p2 == 'paper'
        ? 'draw'
        : p2 == 'rock'
            ? 'Player 1 won!'
            : 'Player 2 won!'
    }
    if(p1 == 'scissor') {
        return p2 == 'scissor'
        ? 'draw'
        : p2 == 'paper'
            ? 'Player 1 won!'
            : 'Player 2 won!'

    }
}

// tests
console.log(rockPaperScissors('scissor', 'paper'));
console.log(rockPaperScissors('paper', 'paper'));
console.log(rockPaperScissors('rock', 'paper'));
console.log(rockPaperScissors('scissor', 'rock'));
