class MonkeyPatchClass:
    """MonkeyPatchClass doc string"""

    def monkey_patch_method(self):
        print "This is the original monkey_patch method"

def main():
    monkey_instance = MonkeyPatchClass()
    monkey_instance.monkey_patch_method()

    def another_method(self):
        print "This is a another_method"
    MonkeyPatchClass.monkey_patch_method = another_method

    monkey_instance.monkey_patch_method()

if __name__ == "__main__":
    main()
