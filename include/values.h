const int PORTNO = 4000; // example: group 1 has portno = (PORTNO+1)
const char* HOSTNAME = "localhost";

int coordinatePair[2]; // (x, y)

/**
* TCP CODES
*/
const int MASTER_OK = 1;
const int MASTER_COL = 0;

const int DRONE_TIMEOUT = 3;
const int TIMESTEP = 200; // milliseconds
const int STEPS = 300;
// map size = 40x80

/**
* STARTING POSITIONS (TEMPORARY)
*/
const int START0[2] = {0, 0};
const int START1[2]  = {40, 0};
const int START2[2]  = {0, 80};
const int START3[2]  = {40, 80};
const int START4[2]  = {20, 40};

/*
Group 0: Michele Pestarino + Federico Sacco
Group 1: Elea Papin + Paul Raingeard
Group 2: Ebru Baglan + Tachadol Suthisomboon + Yusuke Kido
Group 3: Antonio Bucciero + Marco Limone
Group 4: Simone Contorno + Gabriele Russo
Group 5: Alex Thanaphon Leonardi
*/

// REMEMBER TO SET SOCKOPT TO REUSE ADDRESS