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

#include "Grid.hpp"
#include "State.hpp"

StateLarva::StateLarva() : State() {}

StateLarva::~StateLarva() {}

char StateLarva::GetState() const { return 'L'; }

void StateLarva::Neighbors(const Grid& world, int i, int j) {
  Neighbords neighbords_ = world.GetCell(i, j).GetCellNeighbords();
  nextstate_ = neighbords_.larva >
                       (neighbords_.egg + neighbords_.pupa + neighbords_.adult)
                   ? 0
                   : 1;
}

State* StateLarva::NextState() {
  State* output;
  if (nextstate_ == true)
    output = new StatePupa();
  else
    output = new StateDead();
  return output;
}