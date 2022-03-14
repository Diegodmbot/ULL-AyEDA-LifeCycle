/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmo y Estructuras de Datos Avanzados
 * @file: P01DiegoDiazMoron/Cell
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 22/02/22
 * @version: 0.1
 * @brief: El Juego de la Vida.
 */

#include "Cell.hpp"

#include "Grid.hpp"

Cell::Cell() {
  SetNeighbordsZero();
  actual_state = new StateDead();
  next_state = new StateDead();
}

Cell::~Cell() {}

char Cell::GetActualState(void) const { return actual_state->GetState(); }

State* Cell::GetNextState(void) const { return next_state; }

Neighbords Cell::GetCellNeighbords(void) const { return cell_neighbords; }

void Cell::SetActualState(State* state) { actual_state = state; }

void Cell::SetNextState(State* state) { next_state = state; }

void Cell::SetPositionRow(int row) { pos_row = row; }

void Cell::SetPositionCol(int col) { pos_col = col; }

void Cell::Neighbors(const Grid& map) {
  SetNeighbordsZero();
  int i_ = pos_col + 1;
  int j_ = pos_row + 1;
  for (int i = pos_col - 1; i <= i_; i++) {
    for (int j = pos_row - 1; j <= j_; j++) {
      if (!(i == 0 && j == 0)) {
        switch (map.GetCell(i, j).GetActualState()) {
          case '.':
            cell_neighbords.dead++;
            break;
          case 'H':
            cell_neighbords.egg++;
            break;
          case 'L':
            cell_neighbords.larva++;
            break;
          case 'P':
            cell_neighbords.pupa++;
            break;
          case 'A':
            cell_neighbords.adult++;
            break;
          default:
            break;
        }
      }
    }
  }
  actual_state->Neighbors(map, pos_row, pos_col);
}

void Cell::UpdateState(void) { next_state = actual_state->NextState(); }

std::ostream& operator<<(std::ostream& os, const Cell& cell) {
  os << cell.actual_state->GetState();
  return os;
}

void Cell::SetNeighbordsZero(void) {
  cell_neighbords.dead = 0;
  cell_neighbords.egg = 0;
  cell_neighbords.larva = 0;
  cell_neighbords.pupa = 0;
  cell_neighbords.adult = 0;
}