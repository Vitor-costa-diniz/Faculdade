# Tecnologias 
 * https://www.jetbrains.com/pt-br/idea/download/#section=windows - Java IDE
 * https://www.postgresql.org/download/ - Banco de dados
 * https://dbeaver.io/download/ - Framework para banco de dados
 * https://dart.dev/get-dart - Dart
 * https://docs.flutter.dev/get-started/install - Flutter
 

# MovieDB

Um projeto flutter, como trabalho final da Cadeira de POO, é basicamente um serviço de catálogo de filmes, que ordena todos os filmes cadastrados em um carrocel na home page, e mais dois carrocéis, um de filme de terror e outro de filme de suspense. Esse trabalho foi feito utilizando as tecnologias, java, PostgreSQL e flutter. O backend da aplicação foi feita em java utilizando a tecnologia de Spring Boot, nela foi feita a API REST utilizada no projeto para cadastrar, deletar e coletar os filmes presentes no banco de dados, bem como as categorias, e o flutter foi utlizado na aplicação mobile do aplicativo.

## Getting Started

* Clone o projeto dentro de uma pasta no seu Desktop, em seguida cria o banco de dados "movie-db" no PostgreSql, vá até a pasta do projeto java, e no arquivo "API-REST_Java/scr/main/java/resources/application.yml",  altere o nome do username e password lá presentes para que eles sejam as mesmas do seu PostgresSQL, rode a aplicação java e abra no seu navegador o site "http://localhost:8080/swagger-ui.html" para ver os ENDPOINTS da sua aplicação. 

* Abra o terminal na sua maquina e rode o comando "ipconfig" e pegue o endereço do IPV4.

* Em seguida, abra o Vscode, ou Android Studio na pasta em que a apicação "movies" está, e vá ate o arquivo "lib/home.dart, e nas variáveis apiUrl coloque o caminho para os metodos de GET presentes no swagger, o caminho para acessar os filmes deve ficar parecido com esse: "http://(Endereço IPV4 da sua máquina):8080/api/movies?offset=0&limit=15&sort=ASC".

* Rode a aplicação no emulador de sua preferência, vá ate o arquivo "libs/login_page.dart" e na linha 151 coloque o email e senha que deseja usar para acessar a aplicação.

* Se todo os passos foram seguidos corretamente a aplicação deve estar funcionando.

### Observações
 * Essa foi minha primeira experencia de fato com o flutter, depois de 2 meses de estudo, o que é quase nada.
 * A parte da aplicação Mobile foi feita inteiramente em uma semana, então o projeto não está "polido" do jeito que deveria estar, por exemplo: O arquivo possui muitos prints, pois estava usando eles para saber as respostas que estava recebendo da api, e também o fato que na página do filme a fonte veio com bugs, e o fato que não está responsivo, se o nome da pessoa for muito grande acontece um bug que quebra o layout da página.
 * O arquivo do projeto está uma bagunça, com arquivos de mais de 300 linhas, isso acaba ficando muito confuso.
 * A barra de pesquisa não funciona, e apresenta um erro que não permite que ela mostre todo o texto.
 * Não existe o login, é apenas uma condicional que so permite que um usuário e senha sejam validados por vez kkkkk, então não é muito bem um login.
 * Não existe um método para cadastrar um filme usando o aplicativo mesmo, esse processo é todo feito pelo swagger.

 #### Sinta-se livre pra clonar o projeto, e caso vc tenha mais tempo que uma semana tente corrigir os erros presente no projeto, Boa sorte <3.
