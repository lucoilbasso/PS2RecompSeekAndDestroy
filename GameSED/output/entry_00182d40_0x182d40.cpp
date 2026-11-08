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

// Function: entry_00182d40
// Address: 0x182d40 - 0x182d50
void entry_00182d40_0x182d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182d40_0x182d40");
#endif

    ctx->pc = 0x182d40u;

    // 0x182d40: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x182d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x182d44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182d48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x182D48u;
    {
        const bool branch_taken_0x182d48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D48u;
        // 0x182d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d48) {
            ctx->pc = 0x182D60u;
            return;
        }
    }
    ctx->pc = 0x182D50u;
}
