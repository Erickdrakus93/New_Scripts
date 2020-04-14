"""
Here we can write an example of callables in a high level
"""

def foo():
    pass

def func_test(c):
    return c()

"""
This is an example as we can see in the next lines of the code
Callable Object 

"""

class Callable:
    def __init__(self,name):
        self.name = name

    def __call__(self, greetings):
        return '{},{}!'.format(greetings,self.name)


