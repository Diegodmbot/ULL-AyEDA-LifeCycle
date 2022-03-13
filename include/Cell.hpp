/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmo y Estructuras de Datos Avanzados
 * @file: P01DiegoDiazMoron/main
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 22/02/22
 * @version: 0.1
 * @brief: El Juego de la Vida.
 */

#ifndef CELL
#define CELL

#include <iostream>

#include "State.hpp"

const int kNunmberOfNeighbors = 8;

class Grid;

class Cell {
 public:
  Cell();
  ~Cell(void);
  // Getters - Setters
  char GetActualState(void) const;
  char GetNextState(void) const;
  int GetNeighboursAlive(void) const;
  void SetActualState(State*);
  void SetNextState(State*);
  void SetNeighbordsAlive(int);
  void SetPositionRow(int);
  void SetPositionCol(int);
  // Metodos
  /**
   * @brief Calcula el numero de vecinos vivos de una celula
   *
   * @return int
   */
  int Neighbors(const Grid&);
  /**
   * @brief Cambia el atributo next_state de una celula
   *
   */
  void UpdateState(void);

 private:
  friend std::ostream& operator<<(std::ostream& os, const Cell& cell);
  State* actual_state;
  State* next_state;
  int neighbords_alive;
  int pos_row;
  int pos_col;
};

#endif  // CELL