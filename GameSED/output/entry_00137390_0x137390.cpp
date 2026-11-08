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

// Function: entry_00137390
// Address: 0x137390 - 0x1373a0
void entry_00137390_0x137390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137390_0x137390");
#endif

    ctx->pc = 0x137390u;

    // 0x137390: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x137390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137394: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137394u;
    {
        const bool branch_taken_0x137394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137394) {
            ctx->pc = 0x1373A8u;
            return;
        }
    }
    ctx->pc = 0x13739Cu;
    // 0x13739c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x13739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    ctx->pc = 0x1373a0u;
}
