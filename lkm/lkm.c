#include <linux/module.h>
#include <linux/kernel.h>


static int __init lkm_start(void){

    int i, j, space, rows = 8, star = 0;
 
    for (i = 0; i < rows; i++) {
        if (i < 5) {
          
            for (space = 1; space < 5 - i; space++) {
                printk(KERN_CONT" ");
            }
           
            while (star != (2 * i + 1)) {
                printk(KERN_CONT"*");
                star++;;
            }
            star = 0;
          
            printk(KERN_CONT"\n");
        } else {
  
            for (j = 0; j < 9; j++) {
                if ((int) (j / 3) == 1)
                    printk(KERN_CONT" ");
                else
                    printk(KERN_CONT"*");
            }
            printk(KERN_CONT"\n");
        }
    }
    return 0;
}
static void __exit lkm_end(void){
printk(KERN_INFO "           ___ ");
printk(KERN_INFO "  Goodbye |O_O|");
printk(KERN_INFO "           \\|/");
printk(KERN_INFO "           _|_ ");
printk(KERN_INFO "_________________");
}	

module_init(lkm_start);
module_exit(lkm_end);
