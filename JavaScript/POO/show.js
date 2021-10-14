const GroupedItem = require('./groupedItem')

class Show extends GroupedItem {
    constructor(title, genre, director) {
        super(title, genre, director)
    }
}

module.exports = Show
