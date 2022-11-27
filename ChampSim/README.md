Note: This is forked repository of [Champsim](https://github.com/ChampSim/ChampSim.)

<p align="center">
  <h1 align="center"> ChampSim </h1>
  <p align = "justify"> ChampSim is a trace-based simulator for a microarchitecture study. You can sign up to the public mailing list by sending an empty mail to champsim+subscribe@googlegroups.com. If you have questions about how to use ChampSim, you can often receive a quicker response on the mailing list. Please reserve GitHub Issues for bugs. <p>
</p>


<p align="justify"> For each of the assignments the custom policies implemented are made available in the repositories branch, replacement, prefetch. A detailed description of each of these has been provided inside the report. For the case of cache replacement, the code provide for Mockingjay hasn't been ported to the newer version, hence a older version is to be used as mentioned in the problem statement. </p> 

## Compile

ChampSim takes a JSON configuration script. Examine `champsim_config.json` for a fully-specified example. All options described in this file are optional and will be replaced with defaults if not specified. The configuration scrip can also be run without input, in which case an empty file is assumed.
```
$ ./config.sh <configuration file>
$ make
```

## Traces used for assignment purpose

The traces used to perform the evaluation are made available at: 
- [Cache Replacement](https://drive.google.com/drive/folders/1uqTOpvP2oUefekrAYU7cQP3zOoRiNvxx?usp=sharing)
- [Branch Prediction](https://drive.google.com/drive/folders/1HBolcp95CV9V7gCPY3ZEtAsK-Bl2HSZ_)
- [Cache Prefetching](https://drive.google.com/drive/folders/1d8bCduCT2PYUiQQaDyRYe5q1AvO9bqts)

## Run simulation

Execute the binary directly.
```
$ bin/champsim --warmup_instructions 200000000 --simulation_instructions 500000000 ~/path/to/traces/600.perlbench_s-210B.champsimtrace.xz
```

The number of warmup and simulation instructions given will be the number of instructions retired. Note that the statistics printed at the end of the simulation include only the simulation phase.

## Add your own branch predictor, data prefetchers, and replacement policy
**Copy an empty template**
```
$ mkdir prefetcher/mypref
$ cp prefetcher/no_l2c/no.cc prefetcher/mypref/mypref.cc
```

**Work on your algorithms with your favorite text editor**
```
$ vim prefetcher/mypref/mypref.cc
```

**Compile and test**
Add your prefetcher to the configuration file.
```
{
    "L2C": {
        "prefetcher": "mypref"
    }
}
```
Note that the example prefetcher is an L2 prefetcher. You might design a prefetcher for a different level.

```
$ ./config.sh <configuration file>
$ make
$ bin/champsim --warmup_instructions 200000000 --simulation_instructions 500000000 600.perlbench_s-210B.champsimtrace.xz
```

## How to create traces

Program traces are available in a variety of locations, however, many ChampSim users wish to trace their own programs for research purposes.
Example tracing utilities are provided in the `tracer/` directory.

## Evaluate Simulation

ChampSim measures the IPC (Instruction Per Cycle) value as a performance metric. <br>
There are some other useful metrics printed out at the end of simulation. <br>

Good luck and be a champion! <br>
