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

// Function: entry_0013061c
// Address: 0x13061c - 0x130664
void entry_0013061c_0x13061c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013061c_0x13061c");
#endif

    switch (ctx->pc) {
        case 0x130638u: goto label_130638;
        default: break;
    }

    ctx->pc = 0x13061cu;

    // 0x13061c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x130620: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x130620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130624: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x130624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130628: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x130628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13062c: 0xae320078  sw          $s2, 0x78($s1)
    ctx->pc = 0x13062cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 18));
    // 0x130630: 0xc04844a  jal         func_121128
    ctx->pc = 0x130630u;
    SET_GPR_U32(ctx, 31, 0x130638u);
    ctx->pc = 0x130634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130630u;
    // 0x130634: 0xae330110  sw          $s3, 0x110($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130630u, 0x130638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130638u;
label_130638:
    // 0x130638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13063c: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x13063Cu;
    {
        const bool branch_taken_0x13063c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13063Cu;
        // 0x130640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13063c) {
            ctx->pc = 0x130728u;
            return;
        }
    }
    ctx->pc = 0x130644u;
    // 0x130644: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x130648: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x130648u;
    {
        const bool branch_taken_0x130648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130648u;
        // 0x13064c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130648) {
            ctx->pc = 0x130664u;
            return;
        }
    }
    ctx->pc = 0x130650u;
    // 0x130650: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130658: 0x24a560e8  addiu       $a1, $a1, 0x60E8
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24808));
    // 0x13065c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13065Cu;
    SET_GPR_U32(ctx, 31, 0x130664u);
    ctx->pc = 0x130660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13065Cu;
    // 0x130660: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13065Cu, 0x130664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130664u;
}
