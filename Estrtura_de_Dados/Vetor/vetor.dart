import 'dart:core';

class Vetor {
  List<dynamic> _elementos = [];
  late int _tamanaho;

  Vetor(int capacidade) {
    this._elementos = List<dynamic>.filled(capacidade, null);
    this._tamanaho = 0;
  }
/*
  adicionar(String elemento) {
    for (int i = 0; i < this._elementos.length; i++) {
      if (this._elementos[i] == null) {
        this._elementos[i] = elemento;
        break;
      }
    }
  }
  */

  /*adicionar(String elemento) {
    if (this._tamanaho < this._elementos.length) {
      this._elementos[this._tamanaho] = elemento;
      this._tamanaho++;
    } else {
      throw Exception(
          'Vetor já está cheio não é possível adicionar mais elemtnos');
    }
  }*/

  bool adicionar(String elemento) {
    if (this._tamanaho < this._elementos.length) {
      this._elementos[this._tamanaho] = elemento;
      this._tamanaho++;
      return true;
    }
    return false;
  }
}
