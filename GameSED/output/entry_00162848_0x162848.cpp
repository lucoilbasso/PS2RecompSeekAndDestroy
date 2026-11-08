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

// Function: entry_00162848
// Address: 0x162848 - 0x162858
void entry_00162848_0x162848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162848_0x162848");
#endif

    ctx->pc = 0x162848u;

    // 0x162848: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x162848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16284c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16284Cu;
    {
        const bool branch_taken_0x16284c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16284Cu;
        // 0x162850: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16284c) {
            ctx->pc = 0x162858u;
            return;
        }
    }
    ctx->pc = 0x162854u;
    // 0x162854: 0x4600b046  mov.s       $f1, $f22
    ctx->pc = 0x162854u;
    ctx->f[1] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x162858u;
}
