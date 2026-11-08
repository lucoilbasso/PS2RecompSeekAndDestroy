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

// Function: entry_001a8b88
// Address: 0x1a8b88 - 0x1a8bb8
void entry_001a8b88_0x1a8b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8b88_0x1a8b88");
#endif

    switch (ctx->pc) {
        case 0x1a8bb4u: goto label_1a8bb4;
        default: break;
    }

    ctx->pc = 0x1a8b88u;

    // 0x1a8b88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8b8c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b90: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8b98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8b9c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8ba0: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8BA4u;
    {
        const bool branch_taken_0x1a8ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA4u;
        // 0x1a8ba8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ba4) {
            ctx->pc = 0x1A8BB8u;
            return;
        }
    }
    ctx->pc = 0x1A8BACu;
    // 0x1a8bac: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8BACu;
    SET_GPR_U32(ctx, 31, 0x1A8BB4u);
    ctx->pc = 0x1A8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BACu;
    // 0x1a8bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8BACu, 0x1A8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a8bb8u;
}
