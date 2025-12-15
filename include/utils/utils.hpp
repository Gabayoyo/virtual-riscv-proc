#pragma once

#include <cstdint>

namespace utils {
    template<typename T>
    T selectBits(T value, unsigned int start, unsigned int length) {
        // Create a mask with 'length' number of 1s
        T mask = (static_cast<T>(1) << length) - 1;
        
        // Shift the value right to align the desired bits, then apply mask
        return (value >> start) & mask;
    }

    template<typename T, typename U>
    T setBitsInRange(T value, U bitsToSet, unsigned int start, unsigned int length) {
        // Create a mask with 'length' number of 1s
        T mask = ((static_cast<T>(1) << length) - 1) << start;
        
        // Clear the bits in the specified range
        value &= ~mask;
        
        // Set the new bits in the specified range
        value |= (bitsToSet << start) & mask;
        
        return value;
    }   
}