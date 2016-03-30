def try_func_return(try_function, variable, except_return_value=None):
    try:
        try_function(variable)
    except:
        return except_return_value

def func1():
    word = "word"
    translated = try_func_return(try_function=lambda x: int(x), variable=word, except_return_value=1)

    print translated

if __name__ == "__main__":
    func1()
