#include <doctest/doctest.h>
#include <drogoninit/drogoninit.h>
#include <drogoninit/version.h>

#include <string>

TEST_CASE("DrogonInit") {
  using namespace drogoninit;

  DrogonInit drogoninit("Tests");

  CHECK(drogoninit.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(drogoninit.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(drogoninit.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(drogoninit.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("DrogonInit version") {
  static_assert(std::string_view(DROGONINIT_VERSION) == std::string_view("1.0"));
  CHECK(std::string(DROGONINIT_VERSION) == std::string("1.0"));
}
