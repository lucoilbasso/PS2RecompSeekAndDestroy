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

// Function: entry_001be0c0
// Address: 0x1be0c0 - 0x1be0e8
void entry_001be0c0_0x1be0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be0c0_0x1be0c0");
#endif

    switch (ctx->pc) {
        case 0x1be0e0u: goto label_1be0e0;
        default: break;
    }

    ctx->pc = 0x1be0c0u;

    // 0x1be0c0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1be0c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be0c8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE0C8u;
    {
        const bool branch_taken_0x1be0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0C8u;
        // 0x1be0cc: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0c8) {
            ctx->pc = 0x1BE0E8u;
            return;
        }
    }
    ctx->pc = 0x1BE0D0u;
    // 0x1be0d0: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x1be0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1be0d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1be0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1be0d8: 0xc070cec  jal         func_1C33B0
    ctx->pc = 0x1BE0D8u;
    SET_GPR_U32(ctx, 31, 0x1BE0E0u);
    ctx->pc = 0x1BE0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE0D8u;
    // 0x1be0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33B0u, 0x1BE0D8u, 0x1BE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE0E0u;
label_1be0e0:
    // 0x1be0e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE0E0u;
    {
        const bool branch_taken_0x1be0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0E0u;
        // 0x1be0e4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0e0) {
            ctx->pc = 0x1BE0FCu;
            return;
        }
    }
    ctx->pc = 0x1BE0E8u;
}
