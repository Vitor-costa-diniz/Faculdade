import 'package:flutter/material.dart';
import 'dart:convert';
import 'package:http/http.dart' as http;

class Teste extends StatefulWidget {
  const Teste({super.key});

  @override
  State<Teste> createState() => _TesteState();
}

class _TesteState extends State<Teste> {
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

  @override
  void initState() {
    super.initState();
    getMovie();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: const Text('Kindacode.com'),
        ),
        // implement FutureBuilder
        body: ListView.builder(
          scrollDirection: Axis.horizontal,
          itemCount: movies.length,
          itemBuilder: ((context, index) {
            return Padding(
              padding: const EdgeInsets.all(8),
              child: Text(movies[index]['name']),
            );
          }),
        ));
  }
}

//Column(
//          children: [
//            ElevatedButton(
//              onPressed: getMovie,
//              child: Text('Aperte aqui'),
//            ),
//            Text('Quem quer milão ? ${movies[0]['genre']}')
//          ],
//        ));
