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

// Function: entry_001c73a0
// Address: 0x1c73a0 - 0x1c73ec
void entry_001c73a0_0x1c73a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c73a0_0x1c73a0");
#endif

    switch (ctx->pc) {
        case 0x1c73c0u: goto label_1c73c0;
        case 0x1c73d8u: goto label_1c73d8;
        case 0x1c73e8u: goto label_1c73e8;
        default: break;
    }

    ctx->pc = 0x1c73a0u;

    // 0x1c73a0: 0x17c20012  bne         $fp, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C73A0u;
    {
        const bool branch_taken_0x1c73a0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c73a0) {
            ctx->pc = 0x1C73ECu;
            return;
        }
    }
    ctx->pc = 0x1C73A8u;
    // 0x1c73a8: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x1c73a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c73ac: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x1c73acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x1c73b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c73b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73b8: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C73B8u;
    SET_GPR_U32(ctx, 31, 0x1C73C0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C73B8u, 0x1C73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73C0u;
label_1c73c0:
    // 0x1c73c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c73c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C73C4u;
    {
        const bool branch_taken_0x1c73c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73c4) {
            ctx->pc = 0x1C73ECu;
            return;
        }
    }
    ctx->pc = 0x1C73CCu;
    // 0x1c73cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73d0: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C73D0u;
    SET_GPR_U32(ctx, 31, 0x1C73D8u);
    ctx->pc = 0x1C73D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73D0u;
    // 0x1c73d4: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C73D0u, 0x1C73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73D8u;
label_1c73d8:
    // 0x1c73d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c73d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c73dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73e0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C73E0u;
    SET_GPR_U32(ctx, 31, 0x1C73E8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C73E0u, 0x1C73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73E8u;
label_1c73e8:
    // 0x1c73e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c73e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c73ecu;
}
