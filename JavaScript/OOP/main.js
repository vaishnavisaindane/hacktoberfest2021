const Catalog = require('./catalog')
const Movie = require('./movie')
const Serie = require('./serie')
const Show = require('./show')

var movie = new Movie('Bastardos Inglórios', 'Aventura/Drama', 'Tarantino', 153)

var got = new Serie('Guerra dos Tronos', 'Fantasia', 'HBO', 3)
got.add(new Movie('O inverno está chegando', 'Drama', 'Tim Van Patten', 62))
got.add(new Movie('A estrada do rei', 'Aventura', 'Tim Van Patten', 56))
got.add(new Movie('Lorde Snow', 'Aventura', 'Brian Kirk', 58))

var show = new Show('Irmãos (Live)', 'Samba', 'Telo Borges')
show.add(new Movie('A voz do morro', 'Pagode', 'Zé Ketti', 2))
show.add(new Movie('Eu sou o samba', 'Samba', 'Alexandre Pires', 3))

var catalog = new Catalog()

catalog.add(movie)
catalog.add(got)
catalog.add(show)

catalog.print()
