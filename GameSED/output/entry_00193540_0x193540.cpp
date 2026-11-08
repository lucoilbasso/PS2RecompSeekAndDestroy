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

// Function: entry_00193540
// Address: 0x193540 - 0x193560
void entry_00193540_0x193540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193540_0x193540");
#endif

    switch (ctx->pc) {
        case 0x19355cu: goto label_19355c;
        default: break;
    }

    ctx->pc = 0x193540u;

    // 0x193540: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x193540u;
    {
        const bool branch_taken_0x193540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x193544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193540u;
        // 0x193544: 0x26700220  addiu       $s0, $s3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193540) {
            ctx->pc = 0x193590u;
            return;
        }
    }
    ctx->pc = 0x193548u;
    // 0x193548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19354c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193550: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x193550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x193554: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x193554u;
    SET_GPR_U32(ctx, 31, 0x19355Cu);
    ctx->pc = 0x193558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193554u;
    // 0x193558: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x193554u, 0x19355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19355Cu;
label_19355c:
    // 0x19355c: 0x26700220  addiu       $s0, $s3, 0x220
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    ctx->pc = 0x193560u;
}
