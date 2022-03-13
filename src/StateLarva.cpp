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

StateLarva::StateLarva() : State() {}

StateLarva::~StateLarva() {}

char StateLarva::GetState() const { return 'L'; }

State* State::NextState() {}