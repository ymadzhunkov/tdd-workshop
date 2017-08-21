#pragma once
/*
 * Score computes score of bowling game
 * strike - all 10 pins are knocked down with first ball
 * spare - no pins left after second ball
 *
 * Bonus
 * strike - next 2 balls score are multiplied by 2
 * spare - next 1 ball score is multiplied by 2
 *
 * bonus strack
 */ 
int score(const unsigned char pins[20]);
