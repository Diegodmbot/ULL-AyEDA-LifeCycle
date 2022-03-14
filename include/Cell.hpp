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

struct Neighbords {
  int dead;
  int egg;
  int larva;
  int pupa;
  int adult;
};

class Cell {
 public:
  Cell();
  ~Cell();
  // Getters - Setters
  char GetActualState() const;
  State* GetNextState() const;
  Neighbords GetCellNeighbords() const;
  void SetActualState(State*);
  void SetNextState(State*);
  void SetPositionRow(int);
  void SetPositionCol(int);
  // Metodos;
  void Neighbors(const Grid& map);
  /**
   * @brief Cambia el atributo next_state de una celula
   *
   */
  void UpdateState(void);

 private:
  friend std::ostream& operator<<(std::ostream& os, const Cell& cell);
  /**
   * @brief Pone a cero todos los enteros del struct Neighbords
   *
   */
  void SetNeighbordsZero(void);
  State* actual_state;
  State* next_state;
  Neighbords cell_neighbords;
  int pos_row;
  int pos_col;
};

#endif  // CELL