const GroupedItem = require('./groupedItem')

class Serie extends GroupedItem {
    #seasons

    constructor(title, genre, director, seasons) {
        super(title, genre, director)
        this.#seasons = seasons
    }

    getSeasons() {
        return this.#seasons
    }

    print() {
        super.print()
        console.log('Seasons: ' + this.getSeasons())
    }
}

module.exports = Serie
