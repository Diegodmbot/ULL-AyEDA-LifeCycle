/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Algoritmos y Estructuras de Datos Avanzados
 * @file: P02DiegoDiazMoron/State
 * @author: Diego Diaz Moron
 * @mail: alu0101337975@ull.edu.es
 * @date: 13/03/22
 * @version: 0.1
 * @brief: El Ciclo de la Vida
 */

#ifndef STATE
#define STATE

class Grid;

class State {
 public:
  State();
  ~State();
  virtual char GetState() const = 0;
  virtual void Neighbors(const Grid&, int i, int j) = 0;
  virtual State* NextState() = 0;

 protected:
  // true si transita al siguiente estado, false si muere
  bool nextstate_;
};

#endif