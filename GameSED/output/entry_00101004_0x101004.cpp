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

// Function: entry_00101004
// Address: 0x101004 - 0x101038
void entry_00101004_0x101004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101004_0x101004");
#endif

    switch (ctx->pc) {
        case 0x101010u: goto label_101010;
        case 0x101018u: goto label_101018;
        case 0x10102cu: goto label_10102c;
        default: break;
    }

    ctx->pc = 0x101004u;

    // 0x101004: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x101004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x101008: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101008u;
    SET_GPR_U32(ctx, 31, 0x101010u);
    ctx->pc = 0x10100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101008u;
    // 0x10100c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101008u, 0x101010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101010u;
label_101010:
    // 0x101010: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101010u;
    SET_GPR_U32(ctx, 31, 0x101018u);
    ctx->pc = 0x101014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101010u;
    // 0x101014: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101010u, 0x101018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101018u;
label_101018:
    // 0x101018: 0x8e130020  lw          $s3, 0x20($s0)
    ctx->pc = 0x101018u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x10101c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101024: 0xc04039c  jal         func_100E70
    ctx->pc = 0x101024u;
    SET_GPR_U32(ctx, 31, 0x10102Cu);
    ctx->pc = 0x101028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101024u;
    // 0x101028: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x101024u, 0x10102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10102Cu;
label_10102c:
    // 0x10102c: 0x1a600020  blez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x10102Cu;
    {
        const bool branch_taken_0x10102c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x101030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10102Cu;
        // 0x101030: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10102c) {
            ctx->pc = 0x1010B0u;
            return;
        }
    }
    ctx->pc = 0x101034u;
    // 0x101034: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101038u;
}
