# DX-Ball Game

A classic brick-breaking arcade game implemented in C++ using the iGraphics library. Break all the bricks with a bouncing ball while controlling a paddle to keep the ball in play!

## 🎮 Game Features

- **Classic Gameplay**: Control a paddle to bounce a ball and break colored bricks
- **Scoring System**: Earn points for breaking bricks (50 or 100 points depending on brick type)
- **Lives System**: Start with 3 chances - lose a life when the ball falls below the paddle
- **Menu System**: Interactive main menu with start game and about options
- **Background Music**: Plays background music during gameplay
- **Visual Effects**: Animated menus and game over screens

## 🎯 How to Play

1. **Start Game**: Click "Play" from the main menu
2. **Control Paddle**: Use left and right arrow keys to move the paddle
3. **Break Bricks**: Keep the ball bouncing to break all the bricks
4. **Stay Alive**: Don't let the ball fall below the paddle
5. **Win Condition**: Break all bricks to complete the level
6. **Game Over**: Lose all 3 lives and the game ends

### Controls
- **Left Arrow**: Move paddle left
- **Right Arrow**: Move paddle right
- **Q**: Pause game
- **R**: Resume game
- **End**: Exit game

## 🛠️ Technical Requirements

### Dependencies
- **iGraphics Library**: Required for graphics rendering and game loop
- **C++ Compiler**: Supporting C++98 or later
- **Windows OS**: Uses Windows-specific functions (`shellapi.h`)

### Required Assets
The game expects the following image files in the project directory:
- `background1.bmp` - Game background
- `bar.bmp` - Paddle sprite
- `1.bmp` - Brick type 1 (50 points)
- `2.bmp` - Brick type 2 (100 points)
- `menu.bmp` - Main menu
- `about.bmp` - About screen
- `gameover.bmp` - Game over screen
- `chance1.bmp`, `chance2.bmp`, `chance3.bmp` - Life indicators
- `chance.bmp` - Chance/life icon
- `song.mp3` - Background music

## 🏗️ Project Structure

```
DX-BALL/
├── DX-BALL.cpp          # Main game source code
├── *.bmp               # Game sprites and backgrounds
├── song.mp3            # Background music
└── README.md           # This file
```

## 🔧 Building and Running

1. **Setup iGraphics**: Ensure the iGraphics library is properly installed and configured
2. **Compile**: Compile the source code with your C++ compiler
   ```bash
   # Example compilation (adjust for your setup)
   g++ -o DX-BALL DX-BALL.cpp -lgraph -lwinmm
   ```
3. **Assets**: Make sure all required .bmp and .mp3 files are in the same directory
4. **Run**: Execute the compiled binary

## 🎨 Game Mechanics

### Brick Layout
- **6 Rows** of bricks in a 9×6 grid
- **Brick Types**:
  - Rows 1, 2, 5, 6: Type 1 bricks (50 points each)
  - Rows 3, 4: Type 2 bricks (100 points each)
- **Total Bricks**: 54 bricks to break

### Scoring
- **Type 1 Bricks**: 50 points
- **Type 2 Bricks**: 100 points
- **Maximum Score**: 4,500 points (18×50 + 36×100)

### Physics
- Ball bounces off walls, bricks, and paddle
- Ball speed and direction change based on collision
- Paddle movement is discrete (100-pixel steps)

## 🐛 Known Issues

- Code contains some syntax errors (e.g., line 665: `if(brick58)if`)
- Limited error handling for missing assets
- Windows-specific implementation limits cross-platform compatibility

## 🚀 Future Enhancements

- [ ] Fix syntax errors and improve code structure
- [ ] Add power-ups (multi-ball, bigger paddle, etc.)
- [ ] Implement multiple levels with different layouts
- [ ] Add high score persistence
- [ ] Cross-platform compatibility
- [ ] Improved collision detection
- [ ] Sound effects for different actions

## 📝 License

This project is provided as-is for educational purposes. Please ensure you have proper licensing for any assets used.

## 🤝 Contributing

Feel free to fork this repository and submit pull requests for improvements. Some areas that could use work:
- Code cleanup and refactoring
- Bug fixes
- Enhanced graphics and animations
- Additional game features

---

**Note**: This is a classic arcade-style game perfect for learning game development concepts in C++. The code demonstrates basic game loops, collision detection, and state management.
