### This repository is organized as follows

Folders:
 - blank.lvl contains a dummy level that has object data injected into it by libImpossibleLevel
 - extras contains the original level function declarations from IDA
 - output contains the first four levels of *The Impossible Game*, converted to the custom level format
	 - Note: Phazd is already in this format, it can be found in res/phazed in TIG's install folder

Files:

 - analyze.cpp loads and prints information about a level file (currently hardcoded to load and analyze heaven.lvl)
 - chaosFantasy.cpp, fireAura.cpp, fireAuraXbox.cpp, and heaven.cpp contain
	 - a global class declaration that loads the blank level and parses it
	 - global definitions for the variables found via IDA (scale, xOffset, yOffset, and inversion)
	 - modified versions of the level functions
	 - helper methods to be able to use as much of the original code as possible
	 - a main method which calls the modified level function, and then calls levelData's writeDataToFile method to export the converted level
 - libImpossibleLevel.cpp and libImpossibleLevel.hpp are copied from their [source repository](https://github.com/MysticAx0lotl/libImpossibleLvl/)

### Building
You shouldn't need to build any of the code in this repo, since the data you likely came for is already in the output folder. In fact, I advise against this, since it's all *very* messy. That being said, if you want to do so for whatever reason, run the following command:

    g++ libImpossibleLevel.cpp libImpossibleLevel.hpp [levelSourceCode]
Where levelSourceCode is the .cpp corresponding to the level you want to convert.
