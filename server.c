#include "minitalk.h"

static void signal_handler(int sig, siginfo_t *info, void *context)


int main(void)
{
    pid_t pid;
    struct sigaction signal;

    signal.sa_sigaction = &signal_handler;
    
    return (0);

}