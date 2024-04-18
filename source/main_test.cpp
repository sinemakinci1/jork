#include "main.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("GameTest") {
    SECTION("testDoPet") {
        // Test petting "marshmallow"
        game g = game::create();
        REQUIRE(g.do_pet("marshmallow") == loc(strings::pet_marshmallow));

        // Test petting "cat"
        REQUIRE(g.do_pet("cat") == loc(strings::pet_marshmallow));

        // Test petting "dog"
        REQUIRE(g.do_pet("dog") == loc(strings::pet_dog));

        // Test petting "elephant"
        REQUIRE(g.do_pet("elephant") == loc(strings::pet_elephant));

    }
}
