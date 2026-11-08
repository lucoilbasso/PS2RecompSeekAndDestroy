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

// Function: entry_001a6e78
// Address: 0x1a6e78 - 0x1a6e98
void entry_001a6e78_0x1a6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6e78_0x1a6e78");
#endif

    ctx->pc = 0x1a6e78u;

    // 0x1a6e78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a6e7c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a6e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a6e80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6E80u;
    {
        const bool branch_taken_0x1a6e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E80u;
        // 0x1a6e84: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e80) {
            ctx->pc = 0x1A6E98u;
            return;
        }
    }
    ctx->pc = 0x1A6E88u;
    // 0x1a6e88: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a6e8c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a6e90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6E90u;
    SET_GPR_U32(ctx, 31, 0x1A6E98u);
    ctx->pc = 0x1A6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E90u;
    // 0x1a6e94: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6E90u, 0x1A6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E98u;
}
