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

// Function: entry_001430b4
// Address: 0x1430b4 - 0x1430d0
void entry_001430b4_0x1430b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001430b4_0x1430b4");
#endif

    switch (ctx->pc) {
        case 0x1430bcu: goto label_1430bc;
        default: break;
    }

    ctx->pc = 0x1430b4u;

    // 0x1430b4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1430B4u;
    SET_GPR_U32(ctx, 31, 0x1430BCu);
    ctx->pc = 0x1430B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1430B4u;
    // 0x1430b8: 0x24054200  addiu       $a1, $zero, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1430B4u, 0x1430BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430BCu;
label_1430bc:
    // 0x1430bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1430bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1430C0u;
    {
        const bool branch_taken_0x1430c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430C0u;
        // 0x1430c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430c0) {
            ctx->pc = 0x1430D0u;
            return;
        }
    }
    ctx->pc = 0x1430C8u;
    // 0x1430c8: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x1430C8u;
    SET_GPR_U32(ctx, 31, 0x1430D0u);
    ctx->pc = 0x1430CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1430C8u;
    // 0x1430cc: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x1430C8u, 0x1430D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430D0u;
}
