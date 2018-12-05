/**
 * @file    maze_generator.h
 * @author  Ferenc Nemeth
 * @date    3 Dec 2018
 * @brief   Base class: methods and variables used by every maze generator.
 *
 *          Copyright (c) 2018 Ferenc Nemeth - https://github.com/ferenc-nemeth/
 */ 

#ifndef MAZE_GENERATOR_H_
#define MAZE_GENERATOR_H_

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <stdexcept>

namespace maze
{
  class maze_generator
  {
    public:
      explicit maze_generator(uint32_t height, uint32_t width);

      static constexpr uint32_t wall = 0u;
      static constexpr uint32_t hole = 1u;

      void set_wall(uint32_t y, uint32_t x);
      void set_hole(uint32_t y, uint32_t x);
      std::vector<std::vector<uint32_t>> get_maze(void);

    protected:
      std::random_device random_device;

      static constexpr uint32_t vertical    = 0u;
      static constexpr uint32_t horizontal  = 1u;

      static constexpr uint8_t north  = 0u;
      static constexpr uint8_t south  = 1u;
      static constexpr uint8_t west   = 2u;
      static constexpr uint8_t east   = 3u;

      std::vector<std::vector<uint32_t>> area;

      
  };
}

#endif /* MAZE_GENERATOR_H_ */

