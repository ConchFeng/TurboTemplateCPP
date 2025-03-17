// boost_check.cpp
#include <iostream>
#include <boost/version.hpp>  // For BOOST_VERSION macro
#include <boost/config.hpp>   // For compiler detection macros
#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

int main() {
    // Print Boost version in major.minor.patch format
    std::cout << "Boost Version: "
        << BOOST_VERSION / 100000 << "."       // Major version
        << (BOOST_VERSION / 100 % 1000) << "." // Minor version
        << BOOST_VERSION % 100 << std::endl;    // Patch level

    // Print compiler identification
    std::cout << "Compiler: " << BOOST_COMPILER << std::endl;

    // Print standard library information
    std::cout << "Standard Library: " << BOOST_STDLIB << std::endl;

    std::cout << "Standard double precision:\n";
    std::cout << std::setprecision(16)
        << "¦Ð = " << boost::math::constants::pi<double>() << "\n\n";

    return 0;
}