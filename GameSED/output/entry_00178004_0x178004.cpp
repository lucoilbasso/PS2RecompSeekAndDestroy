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

// Function: entry_00178004
// Address: 0x178004 - 0x178048
void entry_00178004_0x178004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178004_0x178004");
#endif

    switch (ctx->pc) {
        case 0x178028u: goto label_178028;
        case 0x178040u: goto label_178040;
        default: break;
    }

    ctx->pc = 0x178004u;

    // 0x178004: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178008: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17800c: 0x4a000  sll         $s4, $a0, 0
    ctx->pc = 0x17800cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x178010: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178014: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x178014u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x178018: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17801c: 0x26721020  addiu       $s2, $s3, 0x1020
    ctx->pc = 0x17801cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4128));
    // 0x178020: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x178020u;
    SET_GPR_U32(ctx, 31, 0x178028u);
    ctx->pc = 0x178024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178020u;
    // 0x178024: 0x8e241010  lw          $a0, 0x1010($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178020u, 0x178028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178028u;
label_178028:
    // 0x178028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17802c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x17802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178030: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178030u;
    {
        const bool branch_taken_0x178030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178030u;
        // 0x178034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178030) {
            ctx->pc = 0x178048u;
            return;
        }
    }
    ctx->pc = 0x178038u;
    // 0x178038: 0xc05e19a  jal         func_178668
    ctx->pc = 0x178038u;
    SET_GPR_U32(ctx, 31, 0x178040u);
    ctx->pc = 0x178668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178668u, 0x178038u, 0x178040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178040u;
label_178040:
    // 0x178040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178040u;
    {
        const bool branch_taken_0x178040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178040u;
        // 0x178044: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178040) {
            ctx->pc = 0x178054u;
            return;
        }
    }
    ctx->pc = 0x178048u;
}
