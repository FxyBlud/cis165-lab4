# AI Reflection

**Tools used:** I used Claude to explain C++ concepts (double vs int, const, cout, namespaces), review my README plans, find errors in my code, check my GitHub repository, and give step-by-step hints when I was stuck.
**One decision:** My first ocean_levels.cpp printed all three results in one long sentence with no units. Claude suggested splitting it into three cout lines, each with a label and "mm". I accepted this because the assignment requires labels and units, and three lines are easier to read. I also added const to ANNUAL_RATE after learning that an ALL_CAPS name alone does not make a value constant.

**Verification:** Before running average.cpp, I calculated the sum (154) and average (30.8) by hand, and the program output matched. When reviewing my repository, I found that average.cpp printed the average labeled as "Sum" and was missing the average line, so the output did not match my test table. I fixed it and re-ran it. I also got an OnlineGDB "multiple definition of main" error from having both programs in one project, so I to undo back and forth.

**Learning:** I now have a complete understanding of int division drops decimals and why double is needed for an average. I still need to practice writing cout statements and explaining my code without help.
