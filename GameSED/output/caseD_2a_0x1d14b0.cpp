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

// Function: caseD_2a
// Address: 0x1d14b0 - 0x1d14cc
void caseD_2a_0x1d14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2a_0x1d14b0");
#endif

    ctx->pc = 0x1d14b0u;

    // 0x1d14b0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d14b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d14b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d14bc: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D14BCu;
    {
        const bool branch_taken_0x1d14bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14BCu;
        // 0x1d14c0: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14bc) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D14C4u;
    // 0x1d14c4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d14c8: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x1d14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    ctx->pc = 0x1d14ccu;
}
