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

StateDead::StateDead() : State() {}

StateDead::~StateDead() {}

char StateDead::GetState() const { return ' '; }

State* State::NextState() {}
