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

#include "Grid.hpp"
#include "State.hpp"

StateEgg::StateEgg() : State() {}

StateEgg::~StateEgg() {}

char StateEgg::GetState() const { return 'H'; }

State* State::NextState() {
  State* output;
  if (nextstate_ == true)
    output = new StateLarva();
  else
    output = new StateDead();
  return output;
}

void StateEgg::Neighbors(const Grid& world, int i, int j) {
  Neighbords neighbords_ = world.GetCell(i, j).GetCellNeighbords();
  nextstate_ = neighbords_.larva > neighbords_.egg ? 0 : 1;
}