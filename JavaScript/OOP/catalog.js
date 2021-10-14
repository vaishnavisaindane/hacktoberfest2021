class Catalog {
    catalog = []

    add(item) {
        this.catalog.push(item)
    }

    print() {
        for (let x of this.catalog) {
            x.print()
            console.log();
        }
    }
}

module.exports = Catalog
