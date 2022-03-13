/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/StateDead
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @brief: Ciclo de la Vida
 */

#include "StateDead.hpp"

#include "Grid.hpp"

StateDead::StateDead() : State() {}

StateDead::~StateDead() {}

char StateDead::GetState() const { return ' '; }

void StateDead::Neighbors(const Grid& world, int i, int j) {
  Neighbords neighbords_ = world.GetCell(i, j).GetCellNeighbords();
  nextstate_ = neighbords_.adult > 2 ? 1 : 0;
}

State* State::NextState() {}
