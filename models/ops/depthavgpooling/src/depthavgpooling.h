int depthavgpooling_forward(THFloatTensor *input, THFloatTensor *offset,
                        THFloatTensor *output);
int depthavgpooling_backward(THFloatTensor *grad_output, THFloatTensor *grad_input,
                         THFloatTensor *grad_offset);
