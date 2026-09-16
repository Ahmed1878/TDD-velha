 
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );


}TEST_CASE( "Testa vitoria do O", "[single-file]" ) {
    int teste2[3][3] = { { 2, 1, 0 },
                         { 2, 1, 0 },
                         { 2, 0, 1 } };

    REQUIRE( VerificaVelha(teste2) == 2 );
}TEST_CASE( "Testa vitoria diagonal do X", "[single-file]" ) {
    int teste3[3][3] = { { 1, 2, 0 },
                         { 2, 1, 0 },
                         { 0, 2, 1 } };

    REQUIRE( VerificaVelha(teste3) == 1 );
} 
 TEST_CASE( "Testa empate", "[single-file]" ) {
                  int teste4[3][3] = { { 1, 1, 2 },
                     { 2, 1, 1 },
                     { 1, 2, 2 } };
    REQUIRE( VerificaVelha(teste4) == 0 );
}
TEST_CASE( "Testa jogo indefinido", "[single-file]" ) {
    int teste5[3][3] = { { 1, 0, 0 },
                         { 0, 0, 0 },
                         { 0, 0, 0 } };

    REQUIRE( VerificaVelha(teste5) == -1 );
}
TEST_CASE( "Testa jogo impossivel", "[single-file]" ) {
    int teste6[3][3] = { { 1, 1, 1 },
                         { 1, 1, 1 },
                         { 1, 1, 1 } };

    REQUIRE( VerificaVelha(teste6) == -2 );
}
TEST_CASE( "Testa vitoria diagonal do O", "[single-file]" ) {
    int teste7[3][3] = { { 1, 0, 2 },
                         { 0, 2, 1 },
                         { 2, 1, 0 } };

    REQUIRE( VerificaVelha(teste7) == 2 );
}
TEST_CASE( "Testa vitoria diagonal inversa do X", "[single-file]" ) {
    int teste8[3][3] = { { 2, 0, 1 },
                         { 2, 1, 0 },
                         { 1, 0, 2 } };

    REQUIRE( VerificaVelha(teste8) == 1 );
}

TEST_CASE( "Testa vitoria por linha do X", "[single-file]" ) {
    int teste9[3][3] = { { 1, 1, 1 },
                         { 2, 0, 2 },
                         { 0, 2, 0 } };

    REQUIRE( VerificaVelha(teste9) == 1 );
}
TEST_CASE( "Testa vitoria por linha do O", "[single-file]" ) {
    int teste10[3][3] = { { 2, 2, 2 },
                          { 1, 0, 1 },
                          { 0, 1, 0 } };

    REQUIRE( VerificaVelha(teste10) == 2 );
}
TEST_CASE( "Testa vitoria por coluna do X", "[single-file]" ) {
    int teste11[3][3] = { { 1, 2, 0 },
                          { 1, 0, 2 },
                          { 1, 2, 0 } };

    REQUIRE( VerificaVelha(teste11) == 1 );
}

TEST_CASE( "Testa vitoria por coluna do O", "[single-file]" ) {
    int teste12[3][3] = { { 1, 2, 0 },
                          { 0, 2, 1 },
                          { 1, 2, 0 } };

    REQUIRE( VerificaVelha(teste12) == 2 );
}

