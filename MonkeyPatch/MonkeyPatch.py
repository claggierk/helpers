class MonkeyPatchClass:
    def monkey_patch_method(self):
        print "This is the original monkey_patch method"

def main():
    monkey_instance = MonkeyPatchClass()
    monkey_instance.monkey_patch_method()

if __name__ == "__main__":
    main()
