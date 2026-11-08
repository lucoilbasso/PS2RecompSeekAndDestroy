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

// Function: entry_001a6cf8
// Address: 0x1a6cf8 - 0x1a6d18
void entry_001a6cf8_0x1a6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6cf8_0x1a6cf8");
#endif

    ctx->pc = 0x1a6cf8u;

    // 0x1a6cf8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6cfc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a6cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a6d00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6D00u;
    {
        const bool branch_taken_0x1a6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D00u;
        // 0x1a6d04: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d00) {
            ctx->pc = 0x1A6D18u;
            return;
        }
    }
    ctx->pc = 0x1A6D08u;
    // 0x1a6d08: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a6d0c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a6d10: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6D10u;
    SET_GPR_U32(ctx, 31, 0x1A6D18u);
    ctx->pc = 0x1A6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D10u;
    // 0x1a6d14: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6D10u, 0x1A6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D18u;
}
