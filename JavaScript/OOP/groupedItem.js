const Item = require('./item')

class GroupedItem extends Item {
    #movies = []

    constructor(title, genre, director) {
        super(title, genre, director)
    }

    add(item) {
        this.#movies.push(item)
    }

    getMovies() {
        return this.#movies
    }

    getDuration() {
        let duration = 0

        for (let x of this.getMovies()) {
            duration += x.getDuration()
        }

        return duration
    }

    print() {
        super.print()
        this.printMovies()
        console.log('Total duration: ' + this.getDuration() + ' min.')
    }

    printMovies() {
        let i = 1
        for (let x of this.getMovies()) {
            process.stdout.write('\t' + i++ + '. ')
            x.print()
        }
    }
}

module.exports = GroupedItem
