Write a procedure called oddTuples, which takes a tuple as input, and returns a new tuple as output, 
where every other element of the input tuple is copied, starting with the first one. 
So if test is the tuple ('I', 'am', 'a', 'test', 'tuple'), then evaluating oddTuples on this input would return the tuple ('I', 'a', 'tuple').
'''

def oddTuples(aTup):
    i = 0
    newTup = ()
    for t in aTup:
        if i%2 == 0:
            newTup += (t,)
        i += 1
    return newTup
    
    #PYTHON WORK W/ TUPLES
    
    #(C) of problem - edx.org
