/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/StateEgg
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @brief: Ciclo de la Vida
 */

#ifndef STATEEGG
#define STATEEGG

#include "State.hpp"

class StateEgg : public State {
 public:
  StateEgg();
  ~StateEgg();
  char GetState() const;
  State* NextState();
  int Neighbors(const Grid&, int i, int j);
};

#endif
