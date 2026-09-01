# ECE319kSpeedwaySurfers
Implementation of Lab 9 original game for Intro to Embedded Systems 

Speedway Surfers
Christine Chandy, Alexis Thomas

Introduction: Speedway Surfers is a game similar to the no internet dino game, where the premise is Professor Yerraballi (or another character) has to bike down speedway and make it to the EER in time for lecture while avoiding obstacles. The player moves through the screen under a timer and if the player manages to avoid collisions that entire time, the player wins the game. The player can jump and duck using the up and down switches and can use the slide pot to select the character for game play. If the player hits an obstacle, the game will stop and a score will be outputted based on how far you progressed.

Features:
Four buttons with multi functions depending on if in gameplay or not
Left/right buttons for language selection on start screen; up/down buttons for jumping and ducking in game play and up button to start game and return to home on start/end screens
Slide pot: select character to be used in game play
Obstacles will be sprites such as students/ professor walking, birds, squirrels
Sounds: collisions, jumping and ducking
Score will be kept based on how long you last in the game.
Languages: English and Spanish
Requirements met:
Four buttons: jump, duck, switching through game play settings
Slide pot: select character in start screen
Multiple different Sprites: the student (you!), obstacles (student/prof walking, birds, squirrels)
Thud sound after collisions, jumping and ducking sounds (swoosh) when up/down buttons are pressed, 
Three ISRs: the TimerG12 ISR is triggered every 30 Hz and is used as the rate at which the game samples inputs and updates the screen. The SysTick ISR is used to handle sounds. The TimerG0 used for the clock (keeping score).
Score is displayed at the end of the game
Simplicity: The game is essentially the dinosaur game, a fan favorite, with a UT twist!
Language options (English and Spanish) are displayed at beginning of game

