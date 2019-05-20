#include <linux/device.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/uaccess.h>

// Called when the module is loaded into the kernel.
static int __init mousemod_init(void) {
    return 0;
}

// Called when the module is removed from the kernel.
static void __exit mousemod_exit(void) {
}

module_init(mousemod_init);
module_exit(mousemod_exit);
