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

// Function: entry_001a6a4c
// Address: 0x1a6a4c - 0x1a6a88
void entry_001a6a4c_0x1a6a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6a4c_0x1a6a4c");
#endif

    switch (ctx->pc) {
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a60u: goto label_1a6a60;
        default: break;
    }

    ctx->pc = 0x1a6a4cu;

    // 0x1a6a4c: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1A6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A54u);
    ctx->pc = 0x1A6A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A4Cu;
    // 0x1a6a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1A6A4Cu, 0x1A6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A54u;
label_1a6a54:
    // 0x1a6a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a58: 0xc07208c  jal         func_1C8230
    ctx->pc = 0x1A6A58u;
    SET_GPR_U32(ctx, 31, 0x1A6A60u);
    ctx->pc = 0x1A6A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A58u;
    // 0x1a6a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1A6A58u, 0x1A6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A60u;
label_1a6a60:
    // 0x1a6a60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6a64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6a6c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a6a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6a78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a6a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A80u;
        // 0x1a6a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A88u;
}
