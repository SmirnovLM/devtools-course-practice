// Copyright 2024 Smirnov Leonid

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

class CaesarCipher {
 private:
    int offset;

 public:
    explicit CaesarCipher(int _offset);

    char shiftChar(char c, int offset) const;
    std::string CaesarCipherEncoder(const std::string& plaintext) const;
    std::string CaesarCipherDecoder(const std::string& ciphertext) const;
};
