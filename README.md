# CS6600-Computer-Architecture
<p align="justify"> The repository holds the assignments done as a part of the graduate level course Computer Architecture during the Jul-Npv 2022 semester. The experimented 
codes along with the brief description of the assignments has been presented. Several assignments relavant cache simulation using the cachegrind simulator, cache replacement, branch prediction
and cache prefetching have been performed using the Champsim simulator. </p>

#### Assignment-1, Cachegrind 

<p align="justify"> In this assigment, an array of long int elements is to be sorted using various sorting algorithms from quick, radix, bubble,
merge sort algorithms. The source code for each of the applications is made available at 'Cachegrind/sorting'. These applications are tested for various size of the inputs from 250k to 1000k and cache statistics like misses/hits etc. have been profiled. </p>

#### Assignment-2, Champsim - Cache Replacement

<p align="justify"> In this assignment, existing replacement policies like LRU, Ship, Hawkeye, Mockingjay have been profiled using the Champsim framework, and a custom replacement policy has been implemented and profiled taking into consideration of various aspects like Re-Reference Interval Prediction. </p>

#### Assignment-3, Champsim - Branch Prediction

<p align="justify"> The Champim simulation environment has been used to profile the existing branch predictors like bimodal, gshare, perceptron, hashed perceptron. Based on the review of using convolutional/reccurrent neural networks for hard-to-predict branches, multiple 
approaches have been experimented to improve the accuracy of Branch Prediction. The filter based approach and perceptron plus have provided improvement over the regular 
perceptron based branch predictor. Further possible optimisations could be carried out by offline training of weights, tuning the non-linear activation functions etc. 
