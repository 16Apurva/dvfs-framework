# dvfs-framework
A Linux-based Dynamic Voltage and Frequency Scaling (DVFS) characterization framework for analyzing processor runtime, thermal behavior, and CPU frequency scaling under different workload conditions.

The current implementation targets Ubuntu Linux systems running on x86 processors, with future extensions planned for ARM-FPGA SoCs such as Zynq platforms.

Project Architecture
Benchmark Workload 
↓ 
CPU Governor Selection 
↓ 
Benchmark Execution 
↓ 
Runtime + Thermal Collection 
↓ 
Log Generation 
↓ 
Python Analysis 
↓ 
Performance Graphs

#Benchmark

The framework currently uses a matrix multiplication workload written in C to generate CPU-intensive computation.

The benchmark stresses:
arithmetic execution
processor pipelines

allowing measurable DVFS behavior under different CPU governors.

#Linux Governors Tested:
Governor	                    Behavior
performance	        Prioritizes maximum performance
powersave	          Prioritizes lower power consumption

<img width="640" height="480" alt="freq_plot" src="https://github.com/user-attachments/assets/7c18d09b-b6f3-46e3-b0ac-4a340ea2d2e9" />
<img width="640" height="480" alt="runtime_plot" src="https://github.com/user-attachments/assets/b1886492-d3a6-423b-864e-e278c1d21fa5" />
<img width="640" height="480" alt="temp_plot" src="https://github.com/user-attachments/assets/c8a15303-39b9-4f99-ba86-0dc3f5a9be98" />

#Metrics Collected
Execution runtime
CPU temperature
CPU operating frequency
Governor policy behavior

#Sample Analysis
Observed DVFS tradeoffs:

Governor	      Runtime	            Temperature
performance	    Lower runtime	      Higher temperature
powersave	      Higher runtime    	Lower temperature

##Future Embedded Workflow
Cross Compilation
        ↓
Transfer ARM Binary to Zynq
        ↓
Run Benchmark on ARM Cortex
        ↓
Collect Runtime/Power/Thermal Data
        ↓
Analyze DVFS Tradeoffs
        ↓
Compare ARM vs FPGA Acceleration
