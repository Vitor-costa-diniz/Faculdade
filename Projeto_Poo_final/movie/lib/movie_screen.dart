import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:movie/home_page.dart';

class MovieScreen extends StatefulWidget {
  final Map<String, dynamic> filme;
  const MovieScreen(this.filme, {super.key});

  @override
  State<MovieScreen> createState() => _MovieScreenState();
}

class _MovieScreenState extends State<MovieScreen> {
  @override
  Widget build(BuildContext context) {
    var team = widget.filme['professionalAssignments'];

    return Scaffold(
      backgroundColor: Colors.black,
      body: CustomScrollView(
        slivers: [
          SliverAppBar(
            flexibleSpace: FlexibleSpaceBar(
              background: Container(
                decoration: BoxDecoration(
                  image: DecorationImage(
                      image: NetworkImage(widget.filme['image']),
                      fit: BoxFit.cover,
                      colorFilter: const ColorFilter.mode(
                          Colors.black87, BlendMode.darken)),
                ),
                child: Column(
                  children: [
                    Container(
                      padding: const EdgeInsets.only(top: 35),
                      child: Text(
                        widget.filme['name'],
                        style: GoogleFonts.poppins(
                          color: Colors.white,
                          fontWeight: FontWeight.bold,
                          fontSize: 20,
                        ),
                      ),
                    ),
                    Container(
                      height: 230,
                      width: 300,
                      padding: const EdgeInsets.only(top: 10),
                      child: Image.network(widget.filme['image']),
                    ),
                    Padding(
                      padding: const EdgeInsets.only(top: 10),
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                        children: [
                          Text(
                            widget.filme['genre'],
                            style: GoogleFonts.poppins(
                              color: Colors.grey.shade500,
                              fontWeight: FontWeight.bold,
                              fontSize: 15,
                            ),
                          ),
                          Text(
                            widget.filme['releaseDateOf'],
                            style: TextStyle(color: Colors.grey.shade500),
                          ),
                          Text(
                            widget.filme['genreLanguages'][0]['language']
                                .toString(),
                            style: TextStyle(color: Colors.grey.shade500),
                          )
                        ],
                      ),
                    ),
                    Container(
                      padding: const EdgeInsets.all(8),
                      child: Text(
                        widget.filme['synopsis'],
                        style: GoogleFonts.poppins(
                          color: Colors.white,
                          fontWeight: FontWeight.bold,
                          fontSize: 16,
                        ),
                      ),
                    ),
                    Container(
                      padding: const EdgeInsets.only(top: 20, left: 8),
                      child: Row(
                        children: [
                          Text('Equipe:',
                              style: GoogleFonts.poppins(
                                color: Colors.white,
                                fontWeight: FontWeight.bold,
                                fontSize: 20,
                              )),
                          SizedBox(
                            height: 100,
                            width: 320,
                            //padding: const EdgeInsets.only(left: 8),
                            child: ListView.builder(
                              scrollDirection: Axis.horizontal,
                              itemCount: team.length,
                              itemBuilder: ((context, index) {
                                return Container(
                                  padding:
                                      const EdgeInsets.only(top: 35, left: 20),
                                  height: 100,
                                  width: 120,
                                  child: Column(
                                    children: [
                                      Text(
                                        team[index]['professional'],
                                        style: GoogleFonts.poppins(
                                          decoration: TextDecoration.underline,
                                          fontWeight: FontWeight.bold,
                                          color: Colors.white,
                                          fontSize: 20,
                                        ),
                                      ),
                                      Text(
                                        team[index]['function'],
                                        style: GoogleFonts.poppins(
                                          color: Colors.grey.shade500,
                                        ),
                                      ),
                                    ],
                                  ),
                                );
                              }),
                            ),
                          ),
                        ],
                      ),
                    )
                  ],
                ),
              ),
            ),
            expandedHeight: 700,
            leading: IconButton(
              icon: const Icon(Icons.arrow_back),
              onPressed: () {
                debugPrint(team);
                //print(widget.filme['atores'][0]['name']);
                Navigator.pushReplacement(context,
                    MaterialPageRoute(builder: (context) => const HomePage()));
              },
            ),
          ),
        ],
      ),
    );
  }
}
