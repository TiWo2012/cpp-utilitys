#include <iostream>
#include <cassert>
#include <sstream>
#include <cstring>

#include "files/console.hpp"
#include "files/random.hpp"

namespace random {
    long long pseudo_random(long long seed, long long num, long long range) {
        long long bet = seed * num + num / num - num;
        return bet * range;
    }

    int rand_int() { return 4; }

    float rand_float() { return 0.3221F; }
} // namespace random

void test_console_clear() {
    std::cout << "Test clear() - Dieser Test kann visuell überprüft werden.\n";
    scl::console::clear();
}

void test_console_write() {
    std::cout << "Test write(std::string)\n";
    std::string test_str = "Hallo Welt!";
    std::string expected_output = test_str;
    
    std::streambuf* orig_buf = std::cout.rdbuf();
    std::stringstream ss;
    std::cout.rdbuf(ss.rdbuf());
    
    scl::console::write(test_str);
    
    std::cout.rdbuf(orig_buf);
    
    std::string result = ss.str();
    assert(result == expected_output && "write() fehlgeschlagen");
    std::cout << "write() funktioniert korrekt.\n";
}

void test_console_write_new_frame() {
    std::cout << "Test write_new_frame(std::string)\n";
    std::string test_str = "Neuer Frame";
    
    std::streambuf* orig_buf = std::cout.rdbuf();
    std::stringstream ss;
    std::cout.rdbuf(ss.rdbuf());
    
    scl::console::write_new_frame(test_str);
    
    std::cout.rdbuf(orig_buf);
    
    std::string result = ss.str();
    assert(result.find(test_str) != std::string::npos && "write_new_frame() fehlgeschlagen");
    std::cout << "write_new_frame() funktioniert korrekt.\n";
}

void test_console_print_multiline() {
    std::cout << "Test print_multiline(char[200][200])\n";
    char text[200][200];
    
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            text[i][j] = 'A' + (i % 26);
        }
    }
    
    std::streambuf* orig_buf = std::cout.rdbuf();
    std::stringstream ss;
    std::cout.rdbuf(ss.rdbuf());
    
    scl::console::print_multiline(text);
    
    std::cout.rdbuf(orig_buf);
    
    std::string result = ss.str();
    assert(result.find("A") != std::string::npos && "print_multiline() fehlgeschlagen");
    std::cout << "print_multiline() funktioniert korrekt.\n";
}

void test_console_clear_print_multiline() {
    std::cout << "Test clear_print_multiline(char[200][200])\n";
    char text[200][200];
    
    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            text[i][j] = 'A' + (i % 26);
        }
    }
    
    std::streambuf* orig_buf = std::cout.rdbuf();
    std::stringstream ss;
    std::cout.rdbuf(ss.rdbuf());
    
    scl::console::clear_print_multiline(text);
    
    std::cout.rdbuf(orig_buf);
    
    std::string result = ss.str();
    assert(result.find("A") != std::string::npos && "clear_print_multiline() fehlgeschlagen");
    std::cout << "clear_print_multiline() funktioniert korrekt.\n";
}

void test_random_pseudo_random() {
    std::cout << "Test pseudo_random(long long, long long, long long)\n";
    
    long long seed = 2;
    long long num = 3;
    long long range = 5;
    
    long long expected_result = (seed * num + num / num - num) * range;
    
    long long result = scl::random::pseudo_random(seed, num, range);
    
    assert(result == expected_result && "pseudo_random() fehlgeschlagen");
    std::cout << "pseudo_random() funktioniert korrekt.\n";
}

void test_random_rand_int() {
    std::cout << "Test rand_int()\n";
    
    int expected_result = 4;
    int result = scl::random::rand_int();
    
    assert(result == expected_result && "rand_int() fehlgeschlagen");
    std::cout << "rand_int() funktioniert korrekt.\n";
}

void test_random_rand_float() {
    std::cout << "Test rand_float()\n";
    
    float expected_result = 0.3221F;
    float result = scl::random::rand_float();
    
    assert(abs(result - expected_result) < 1e-4 && "rand_float() fehlgeschlagen");
    std::cout << "rand_float() funktioniert korrekt.\n";
}

int main() {
    test_console_clear();
    test_console_write();
    test_console_write_new_frame();
    test_console_print_multiline();
    test_console_clear_print_multiline();
    test_random_pseudo_random();
    test_random_rand_int();
    test_random_rand_float();
    
    return 0;
}
