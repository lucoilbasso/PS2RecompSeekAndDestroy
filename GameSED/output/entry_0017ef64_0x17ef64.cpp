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

// Function: entry_0017ef64
// Address: 0x17ef64 - 0x17ef70
void entry_0017ef64_0x17ef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef64_0x17ef64");
#endif

    ctx->pc = 0x17ef64u;

    // 0x17ef64: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x17ef64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF68u;
    {
        const bool branch_taken_0x17ef68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef68) {
            ctx->pc = 0x17EF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF68u;
            // 0x17ef6c: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF70u;
            return;
        }
    }
    ctx->pc = 0x17EF70u;
}
