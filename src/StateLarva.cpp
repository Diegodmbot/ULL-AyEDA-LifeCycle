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

#include "StateLarva.hpp"

#include "Grid.hpp"

StateLarva::StateLarva() : State() {}

StateLarva::~StateLarva() {}

char StateLarva::GetState() const { return 'L'; }

State* State::NextState() {}

void StateLarva::Neighbors(const Grid& world, int i, int j) {
  Neighbords neighbords_ = world.GetCell(i, j).GetCellNeighbords();
  nextstate_ =
      neighbords_.larva > neighbords_.egg + neighbords_.pupa + neighbords_.adult
          ? 0
          : 1;
}