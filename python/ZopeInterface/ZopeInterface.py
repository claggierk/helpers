from zope.interface import Interface
from zope.interface import implements
from zope.component import getUtility
from zope.component import getGlobalSiteManager

class IObject(Interface):
    def talk(word):
        "a docstring describing what this method does"

class Object(object):
    implements(IObject)

    def talk(self, word):
        return "Howdy " + word

def main():
    talker = Object()
    gsm = getGlobalSiteManager()
    gsm.registerUtility(talker, IObject)

    interface_object_instance = getUtility(IObject)
    print interface_object_instance.talk('Clark')

# This is main
if __name__ == "__main__":
    main()
