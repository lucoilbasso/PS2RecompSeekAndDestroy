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

// Function: entry_001388a0
// Address: 0x1388a0 - 0x1388b8
void entry_001388a0_0x1388a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388a0_0x1388a0");
#endif

    ctx->pc = 0x1388a0u;

    // 0x1388a0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x1388a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1388a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1388A4u;
    {
        const bool branch_taken_0x1388a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1388A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A4u;
        // 0x1388a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a4) {
            ctx->pc = 0x1388BCu;
            return;
        }
    }
    ctx->pc = 0x1388ACu;
    // 0x1388ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1388ACu;
    {
        const bool branch_taken_0x1388ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388ACu;
        // 0x1388b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388ac) {
            ctx->pc = 0x1388BCu;
            return;
        }
    }
    ctx->pc = 0x1388B4u;
    // 0x1388b4: 0x0  nop
    ctx->pc = 0x1388b4u;
    // NOP
    ctx->pc = 0x1388b8u;
}
