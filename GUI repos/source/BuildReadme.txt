To make your executable smaller and safer:
When the release is already build do this.
Open Developer Command Prompt for Visual Studio.

Strip debugging symbols
copy this inside your release folder
editbin /SUBSYSTEM:WINDOWS "YourGame.exe"

This prevents a terminal window from opening when you run the game.