#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0018bdc0
// Address: 0x18bdc0 - 0x18bdd4
void entry_0018bdc0_0x18bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bdc0_0x18bdc0");
#endif

    ctx->pc = 0x18bdc0u;

    // 0x18bdc0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18bdc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bdc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18BDC4u;
    {
        const bool branch_taken_0x18bdc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18bdc4) {
            ctx->pc = 0x18BDD4u;
            return;
        }
    }
    ctx->pc = 0x18BDCCu;
    // 0x18bdcc: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x18bdccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18bdd0: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x18bdd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    ctx->pc = 0x18bdd4u;
}
