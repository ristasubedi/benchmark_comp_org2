# benchmark_comp_org2

Developed five benchmarks. The details of the benchmarks are as follows:

1) 32-bit Integer operation benchmark (reference time: 100 seconds)
10 ^ 10 additions (of integer constants)
5 × 109 multiplication (of integer constants)
2 × 109 division (of integer constants)

2) 64-bit Floating point operation benchmark (reference time: 100 seconds)
Same as integer, use double precision floating point numbers instead of integer.

3) Memory benchmark (reference time: 100 seconds)
Read from 5 × 109 different array elements, 4 bytes each time
Write to 5 × 109 different array elements, 4 bytes each time

4) Hard drive benchmark 1 (reference time: 250 seconds)
Read a whole file of 109 bytes, 100 bytes each time
Write 109 bytes to a file, 100 bytes each time

5) Hard drive benchmark 2 (reference time: 10 seconds)
Read a whole file of 109 bytes, 10000 bytes each time
Write 109 bytes to a file, 10000 bytes each time
Each benchmark will output the total execution time of the benchmark. Note that the benchmark must NOT do any operations other than what is specified above. The output should be done only once at the end of the program.

After the development of the benchmarks, run the benchmarks on your computer and document the results with a rich text editor (e.g. MS Words) in a report. In the report, provide:

The specification of your computer (usually found in the user manual), including:
The brand of CPU (Intel or AMD)
The model of CPU (e.g. Intel i7-9700K Coffee Lake)
The number of cores on CPU
The clock rate of CPU in GHz
The amount of memory in GB
The speed of memory (for example: DDR4 3200)
The capacity of hard drive
The type of hard drive: magnetic or SSD
For magnetic hard drive, provide
The RPM number
Cache size
Average latency
For SSD, provide
Max sequential read speed
Max sequential write speed
Max random read speed
Max random write speed
One screenshot for each of the benchmark showing the output of the benchmark. The screenshot must be accompanied by a caption identifying the benchmark.
A table recording the results of all the benchmarks.
The calculation of a single number using geometric mean to summarize the results of all four benchmarks.
Requirements:
All programming must be done with Github. The commit history must show the FULL development process. You are strongly suggested to make a commit every 5-10 lines of code. With each commit, the commit message must explain the purpose of the added/changed code. The commits must be done during the development. Commits after the development completion is NOT ACCEPTABLE.
Commit your screenshots and report to the Github repo as well.
The benchmark programs must be in a private Github repo not used by any other projects.
Submissions not meeting the above requirements will lose significant portion (up to 100%) of the credits at the discretion of the instruction. In particular, submissions not meeting the commit requirements will lose at least 50% of the credits.
Syntax error and program terminating abnormally will result in zero credits.
