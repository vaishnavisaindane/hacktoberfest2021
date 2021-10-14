class Item {
    #title
    #genre
    #director

    constructor(title, genre, director) {
        this.#title = title
        this.#genre = genre
        this.#director = director
    }

    getTitle() {
        return this.#title
    }

    getGenre() {
        return this.#genre
    }

    getDirector() {
        return this.#director
    }

    print() {
        console.log(this.getTitle() + ' - (' + this.getGenre() + ')')
    }
}

module.exports = Item
