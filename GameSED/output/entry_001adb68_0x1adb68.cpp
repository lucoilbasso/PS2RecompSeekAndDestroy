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

// Function: entry_001adb68
// Address: 0x1adb68 - 0x1adb90
void entry_001adb68_0x1adb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb68_0x1adb68");
#endif

    switch (ctx->pc) {
        case 0x1adb78u: goto label_1adb78;
        default: break;
    }

    ctx->pc = 0x1adb68u;

label_1adb68:
    // 0x1adb68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1adb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb70: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1ADB70u;
    SET_GPR_U32(ctx, 31, 0x1ADB78u);
    ctx->pc = 0x1ADB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB70u;
    // 0x1adb74: 0x24070720  addiu       $a3, $zero, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1ADB70u, 0x1ADB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADB78u;
label_1adb78:
    // 0x1adb78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1adb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1adb7c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1adb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1adb80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1ADB80u;
    {
        const bool branch_taken_0x1adb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB80u;
        // 0x1adb84: 0x2d02821  addu        $a1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb80) {
            ctx->pc = 0x1ADB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adb68;
        }
    }
    ctx->pc = 0x1ADB88u;
    // 0x1adb88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADB88u;
    {
        const bool branch_taken_0x1adb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB88u;
        // 0x1adb8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb88) {
            ctx->pc = 0x1ADB98u;
            return;
        }
    }
    ctx->pc = 0x1ADB90u;
}
