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

// Function: entry_001703c8
// Address: 0x1703c8 - 0x1703f8
void entry_001703c8_0x1703c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001703c8_0x1703c8");
#endif

    switch (ctx->pc) {
        case 0x1703d0u: goto label_1703d0;
        case 0x1703e0u: goto label_1703e0;
        default: break;
    }

    ctx->pc = 0x1703c8u;

    // 0x1703c8: 0xc05c628  jal         func_1718A0
    ctx->pc = 0x1703C8u;
    SET_GPR_U32(ctx, 31, 0x1703D0u);
    ctx->pc = 0x1703CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703C8u;
    // 0x1703cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1718A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1718A0u, 0x1703C8u, 0x1703D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703D0u;
label_1703d0:
    // 0x1703d0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1703D0u;
    {
        const bool branch_taken_0x1703d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703d0) {
            ctx->pc = 0x1703C0u;
            return;
        }
    }
    ctx->pc = 0x1703D8u;
    // 0x1703d8: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x1703D8u;
    SET_GPR_U32(ctx, 31, 0x1703E0u);
    ctx->pc = 0x1703DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703D8u;
    // 0x1703dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x1703D8u, 0x1703E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703E0u;
label_1703e0:
    // 0x1703e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1703e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1703e4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1703E4u;
    {
        const bool branch_taken_0x1703e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1703e4) {
            ctx->pc = 0x170420u;
            return;
        }
    }
    ctx->pc = 0x1703ECu;
    // 0x1703ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1703ECu;
    {
        const bool branch_taken_0x1703ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703ECu;
        // 0x1703f0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703ec) {
            ctx->pc = 0x170400u;
            return;
        }
    }
    ctx->pc = 0x1703F4u;
    // 0x1703f4: 0x0  nop
    ctx->pc = 0x1703f4u;
    // NOP
    ctx->pc = 0x1703f8u;
}
