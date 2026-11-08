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

// Function: entry_0012ea60
// Address: 0x12ea60 - 0x12ea88
void entry_0012ea60_0x12ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ea60_0x12ea60");
#endif

    switch (ctx->pc) {
        case 0x12ea6cu: goto label_12ea6c;
        default: break;
    }

    ctx->pc = 0x12ea60u;

    // 0x12ea60: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ea64: 0xc04bad4  jal         func_12EB50
    ctx->pc = 0x12EA64u;
    SET_GPR_U32(ctx, 31, 0x12EA6Cu);
    ctx->pc = 0x12EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA64u;
    // 0x12ea68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB50u, 0x12EA64u, 0x12EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA6Cu;
label_12ea6c:
    // 0x12ea6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ea70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea74: 0x26e56040  addiu       $a1, $s7, 0x6040
    ctx->pc = 0x12ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 24640));
    // 0x12ea78: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EA78u;
    {
        const bool branch_taken_0x12ea78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA78u;
        // 0x12ea7c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea78) {
            ctx->pc = 0x12EA88u;
            return;
        }
    }
    ctx->pc = 0x12EA80u;
    // 0x12ea80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12EA80u;
    SET_GPR_U32(ctx, 31, 0x12EA88u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12EA80u, 0x12EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA88u;
}
