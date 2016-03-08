from time import sleep
from threading import Thread
from random import randint

g_balance = 100.0

def ratio(percent):
    sleep(randint(1,4))
    global g_balance
    g_balance *= percent * 0.01

def thread_function(i):
    print "Thread start:", i
    ratio((i+1)*10)
    print "Thread stop :", i

def main():
    print g_balance

    all_threads = []
    for i in range(10):
        t = Thread(target=thread_function, args=(i,))
        all_threads.append(t)

    for a_thread in all_threads:
        a_thread.start()

    for a_thread in all_threads:
        a_thread.join()

    print g_balance

# This is main
if __name__ == "__main__":
    main()
