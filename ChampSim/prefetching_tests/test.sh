./config.sh champsim_config.json
make
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 600.perlbench_s-1273B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 602.gcc_s-2375B.champsimtrace.xz
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 605.mcf_s-1644B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 619.lbm_s-4268B.champsimtrace.xz
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 620.omnetpp_s-874B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 621.wrf_s-8100B.champsimtrace.xz
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 623.xalancbmk_s-700B.champsimtrace.xz
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 627.cam4_s-573B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 631.deepsjeng_s-928B.champsimtrace.xz
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 641.leela_s-1083B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 644.nab_s-12459B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 649.fotonik3d_s-10881B.champsimtrace.xz
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 654.roms_s-1613B.champsimtrace.xz 
bin/champsim --warmup_instructions 50000000 --simulation_instructions 200000000 657.xz_s-4994B.champsimtrace.xz 

