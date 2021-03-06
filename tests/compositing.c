#include "test.h"

void test(){
    vkvg_surface_clear(surf);

    VkvgContext ctx = vkvg_create(surf);

    vkvg_set_source_rgba(ctx, 1,0,0,0.5);
    vkvg_rectangle(ctx,100,100,200,200);
    vkvg_fill(ctx);

    vkvg_set_source_rgba(ctx, 0,0,1,0.5);
    vkvg_rectangle(ctx,200,200,200,200);
    vkvg_fill(ctx);

    vkvg_destroy(ctx);
}

int main(int argc, char *argv[]) {

    perform_test (test, 600, 800);

    return 0;
}
