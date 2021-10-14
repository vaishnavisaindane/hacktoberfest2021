const Item = require('./item')

class Movie extends Item {
    #duration

    constructor(title, genre, director, duration) {
        super(title, genre, director)
        this.#duration = duration
    }

    getDuration() {
        return this.#duration
    }

    print() {
        let retorno = this.getTitle()
        retorno +=
            ' (' + this.getGenre() + ') - ' + this.getDuration() + ' min.'
        console.log(retorno)
    }
}

module.exports = Movie
