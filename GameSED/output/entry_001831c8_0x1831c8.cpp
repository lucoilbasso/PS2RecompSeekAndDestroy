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

// Function: entry_001831c8
// Address: 0x1831c8 - 0x1831d8
void entry_001831c8_0x1831c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001831c8_0x1831c8");
#endif

    ctx->pc = 0x1831c8u;

    // 0x1831c8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1831c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1831cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1831CCu;
    {
        const bool branch_taken_0x1831cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1831D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831CCu;
        // 0x1831d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831cc) {
            ctx->pc = 0x1831D8u;
            return;
        }
    }
    ctx->pc = 0x1831D4u;
    // 0x1831d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1831d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1831d8u;
}
