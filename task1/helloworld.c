#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int hello_init(void)
{
    printk(KERN_DEBUG "Hello World!\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_DEBUG "Exiting hello world.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mason Moreland");
MODULE_DESCRIPTION("Eudyptula Task 1");
