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

// Function: entry_0017ef70
// Address: 0x17ef70 - 0x17ef80
void entry_0017ef70_0x17ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef70_0x17ef70");
#endif

    ctx->pc = 0x17ef70u;

    // 0x17ef70: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x17ef70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x17ef74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ef74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17EF78u;
    {
        const bool branch_taken_0x17ef78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef78) {
            ctx->pc = 0x17EF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF78u;
            // 0x17ef7c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EF80u;
            return;
        }
    }
    ctx->pc = 0x17EF80u;
}
