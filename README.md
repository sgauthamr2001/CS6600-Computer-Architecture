# CS6600-Computer-Architecture
<p align="justify"> The repository holds the assignments done as a part of the graduate level course Computer Architecture during the Jul-Nov 2022 semester. The experimented 
codes along with the brief description of the assignments has been presented. Several assignments relavant cache simulation using the cachegrind simulator, cache replacement, branch prediction
and cache prefetching have been performed using the Champsim simulator. </p>

#### Assignment-1, Cachegrind 

<p align="justify"> In this assigment, an array of long int elements is to be sorted using various sorting algorithms from quick, radix, bubble,
merge sort algorithms. The source code for each of the applications is made available at Cachegrind/sorting. These applications are tested for various size of the inputs from 250k to 1000k and cache statistics like misses/hits etc. have been profiled. </p>

#### Assignment-2, Champsim - Cache Replacement

<p align="justify"> In this assignment, existing replacement policies like LRU, Ship, Hawkeye, Mockingjay have been profiled using the Champsim framework, and a custom replacement policy has been implemented and profiled taking into consideration of various aspects like Re-Reference Interval Prediction. </p>

#### Assignment-3, Champsim - Branch Prediction

<p align="justify"> The Champim simulation environment has been used to profile the existing branch predictors like bimodal, gshare, perceptron, hashed perceptron. Based on the review of using convolutional/reccurrent neural networks for hard-to-predict branches, multiple 
approaches have been experimented to improve the accuracy of Branch Prediction. The filter based approach and perceptron plus have provided improvement over the regular 
perceptron based branch predictor. Further possible optimisations could be carried out by offline training of weights, tuning the non-linear activation functions etc. </p>

#### Assignment-4, Champsim - Cache Prefetching 

<p align="justify"> Through this assignment, current prefetching mechanisms like ip_stride, next line etc. have been profiled. To cut down the hardware overhead involded with the ip based prefetching mechanism, a distance based prefetching mechanism has been experimented and the performance is nearly the same as that of ip_stride method, but with reduced hardware overhead. Moving forward, owing to the lower hardware overhead, enables the integration with hybrid prefetching schemes to gain improved accuracy through a tournament based selection methodology. </p>

The instructions for checkout have been provided inside each of the repositories. 

Note: The assignments on Champsim are done in colloboration with [Shashank Nag](https://github.com/shashanknag).
