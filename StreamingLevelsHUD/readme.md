# Streaming Levels HUD
This ASI draws the list of streaming levels on the top left of the screen, as well as their current loaded state. It additionally shows the amount of memory the process is currently using, as well as as the maximum. When the amount nears the crashing point (3.5GiB when LAA patched), it turns, yellow, red, then begins to flash red.

Note that this ASI assumes the exe is LAA patched. If it is not, the colors will not change as it approaches the 2GiB memory limit for ME1.
