/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/StateAdult
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @brief: Ciclo de la Vida
 */

#include "Grid.hpp"
#include "State.hpp"

StateAdult::StateAdult() : State() {}

StateAdult::~StateAdult() {}

char StateAdult::GetState() const { return 'A'; }

State* State::NextState() {
  State* output;
  if (nextstate_ == true)
    output = new StateEgg();
  else
    output = new StateDead();
  return output;
}

void StateAdult::Neighbors(const Grid& world, int i, int j) {
  Neighbords neighbords_ = world.GetCell(i, j).GetCellNeighbords();
  nextstate_ = neighbords_.adult > 0 ? 1 : 0;
}