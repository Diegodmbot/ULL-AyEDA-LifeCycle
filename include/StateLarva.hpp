/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/StateLarva
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @brief: Ciclo de la Vida
 */

#ifndef STATELARVA
#define STATELARVA

#include "State.hpp"

class StateLarva : public State {
 public:
  StateLarva();
  ~StateLarva();
  char GetState() const;
  State* NextState();
  int Neighbors(const Grid&, int i, int j);
};

#endif