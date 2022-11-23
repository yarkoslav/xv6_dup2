# Lab work ?: xv6 - add dup2() syscall
Authors (team): [Yaroslav Romanus](https://github.com/yarkoslav), [Sasha Tsepilova](https://github.com/sasha-tsepilova) <br>
OS: LINUX(Ubuntu)

## Prerequisites

<mark>MAKE, QEMU, GCC(11 or smaller version)</mark>

### Compilation

```bash
$ cd xv6-public
$ make
$ make qemu or make qemu-nox
```

after this, xv6 will be running

### Installation

```bash
$ git clone https://github.com/yarkoslav/xv6_dup2
```

If You don't have QEMU installed, please refer to QEMU installation guide [here](https://pdos.csail.mit.edu/6.828/2018/xv6.html)

### Usage

When xv6 is running, you can test implemented pipes with dup2:
```bash
$ ls | wc | wc
```

### Important!

You can see changes in the code for dup2 implementation in the diff of commits :=)

### Results

Implemented dup2() syscall and used it in the shell pipes!
