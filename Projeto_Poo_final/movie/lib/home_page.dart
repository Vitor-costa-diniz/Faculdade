import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:movie/movie_screen.dart';
import 'package:http/http.dart' as http;

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  List items = [];
  Future readJson() async {
    final String response = await rootBundle.loadString('assets/sample.json');
    final data = await json.decode(response);
    setState(() {
      items = data["movies"];
    });
  }

  List movies = [];
  Future getMovie() async {
    const apiUrl =
        'http://192.168.0.6:8080/api/movies?offset=0&limit=15&sort=ASC';

    final http.Response response = await http.get(Uri.parse(apiUrl));

    final map = json.decode(response.body);
    setState(() {
      movies = map['content'];
    });
    print(movies);
  }

  List movieSuspense = [];
  Future getMovieSuspense() async {
    const apiUrl =
        'http://192.168.0.6:8080/api/movies/findByGenre/2?offset=0&limit=25&sort=ASC';

    final http.Response response = await http.get(Uri.parse(apiUrl));

    final map = json.decode(response.body);
    setState(() {
      movieSuspense = map['content'];
    });
    print(movieSuspense);
  }

  List movieTerror = [];
  Future getMovieTerror() async {
    const apiUrl =
        // ip config
        //IPV4: 192.168.0.6
        //192.168.0.6:8080
        'http://192.168.0.6:8080/api/movies/findByGenre/1?offset=0&limit=25&sort=ASC';

    final http.Response response = await http.get(Uri.parse(apiUrl));

    final map = json.decode(response.body);
    setState(() {
      movieTerror = map['content'];
    });
    print(movieTerror);
  }

  routeToMovieScreen(Map<String, dynamic> filme) {
    Navigator.pushReplacement(
        context, MaterialPageRoute(builder: (context) => MovieScreen(filme)));
  }

  @override
  void initState() {
    super.initState();
    getMovieSuspense();
    getMovieTerror();
    getMovie();
  }

  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      body: CustomScrollView(
        slivers: [
          SliverAppBar(
            backgroundColor: const Color(0xffA87FF3),
            leading: Image.asset('images/Logo.png', scale: 1),
            actions: [
              Padding(
                padding: const EdgeInsets.only(top: 13, right: 20),
                child: Text(
                  'MovieDB',
                  style: GoogleFonts.poppins(
                    color: const Color(0xffFFFFFF),
                    fontWeight: FontWeight.bold,
                    fontSize: 20,
                  ),
                ),
              ),
              Container(
                padding: const EdgeInsets.only(right: 10, top: 10, bottom: 10),
                height: MediaQuery.of(context).size.height * 0.042,
                width: MediaQuery.of(context).size.width * 0.5,
                child: TextField(
                  onChanged: (txt) {
                    print(txt);
                  },
                  keyboardType: TextInputType.emailAddress,
                  decoration: const InputDecoration(
                    filled: true,
                    fillColor: Color(0xffE9DFFC),
                    prefixIcon: Icon(
                      Icons.search,
                      color: Colors.grey,
                      size: 25,
                    ),
                    border: OutlineInputBorder(
                      borderRadius: BorderRadius.all(
                        Radius.circular(15),
                      ),
                    ),
                  ),
                ),
              ),
              IconButton(
                color: Colors.white,
                iconSize: 30,
                icon: const Icon(Icons.menu_outlined),
                onPressed: () {},
              ),
            ],
          ),
          SliverToBoxAdapter(
            child: SizedBox(
              height: 200,
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Padding(
                    padding: const EdgeInsets.only(left: 8, top: 10),
                    child: Text(
                      'Filmes em Destaque',
                      style: GoogleFonts.poppins(
                        color: Colors.white,
                        fontSize: 20,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                  SizedBox(
                    height: 160,
                    child: movies.isNotEmpty
                        ? ListView.builder(
                            scrollDirection: Axis.horizontal,
                            itemCount: movies.length,
                            itemBuilder: (context, index) {
                              return GestureDetector(
                                onTap: () {
                                  routeToMovieScreen(movies[index]);

                                  print(Map<String, dynamic>.from(movies[index])
                                      .runtimeType);
                                },
                                child: Padding(
                                  padding: const EdgeInsets.all(8),
                                  child: SizedBox(
                                    height: 100,
                                    width: 200,
                                    child: Image.network(
                                      movies[index]["image"],
                                      fit: BoxFit.cover,
                                    ),
                                  ),
                                ),
                              );
                            },
                          )
                        : const Center(
                            child: CircularProgressIndicator(),
                          ),
                  ),
                ],
              ),
            ),
          ),
          SliverToBoxAdapter(
            child: SizedBox(
              height: 200,
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Padding(
                    padding: const EdgeInsets.only(left: 8, top: 10),
                    child: Text(
                      'Suspense',
                      style: GoogleFonts.poppins(
                        color: Colors.white,
                        fontSize: 20,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                  SizedBox(
                    height: 160,
                    child: movieSuspense.isNotEmpty
                        ? ListView.builder(
                            scrollDirection: Axis.horizontal,
                            itemCount: movieSuspense.length,
                            itemBuilder: (context, index) {
                              return GestureDetector(
                                onTap: () {
                                  routeToMovieScreen(movieSuspense[index]);

                                  print(Map<String, dynamic>.from(
                                          movieSuspense[index])
                                      .runtimeType);
                                },
                                child: Padding(
                                  padding: const EdgeInsets.all(8),
                                  child: SizedBox(
                                    height: 100,
                                    width: 200,
                                    child: Image.network(
                                      movieSuspense[index]["image"],
                                      fit: BoxFit.cover,
                                    ),
                                  ),
                                ),
                              );
                            },
                          )
                        : const Center(
                            child: CircularProgressIndicator(),
                          ),
                  ),
                ],
              ),
            ),
          ),
          SliverToBoxAdapter(
            child: SizedBox(
              height: 200,
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Padding(
                    padding: const EdgeInsets.only(left: 8, top: 10),
                    child: Text(
                      'Terror',
                      style: GoogleFonts.poppins(
                        color: Colors.white,
                        fontSize: 20,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                  SizedBox(
                    height: 160,
                    child: movieTerror.isNotEmpty
                        ? ListView.builder(
                            scrollDirection: Axis.horizontal,
                            itemCount: movieTerror.length,
                            itemBuilder: (context, index) {
                              return GestureDetector(
                                onTap: () {
                                  routeToMovieScreen(movieTerror[index]);

                                  print(Map<String, dynamic>.from(
                                          movieTerror[index])
                                      .runtimeType);
                                },
                                child: Padding(
                                  padding: const EdgeInsets.all(8),
                                  child: SizedBox(
                                    height: 100,
                                    width: 200,
                                    child: Image.network(
                                      movieTerror[index]["image"],
                                      fit: BoxFit.cover,
                                    ),
                                  ),
                                ),
                              );
                            },
                          )
                        : const Center(
                            child: CircularProgressIndicator(),
                          ),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}
