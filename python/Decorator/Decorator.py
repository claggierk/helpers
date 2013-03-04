def boldify(text):
    def wrapped():
        return "<b>" + text() + "</b>"
    return wrapped

@boldify
def name():
    return "Clark"

def main():
    print "bold name:", name()

# This is main
if __name__ == "__main__":
    main()
