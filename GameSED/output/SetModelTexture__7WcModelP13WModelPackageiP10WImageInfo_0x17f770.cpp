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

// Function: SetModelTexture__7WcModelP13WModelPackageiP10WImageInfo
// Address: 0x17f770 - 0x17f7d4
void SetModelTexture__7WcModelP13WModelPackageiP10WImageInfo_0x17f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetModelTexture__7WcModelP13WModelPackageiP10WImageInfo_0x17f770");
#endif

    switch (ctx->pc) {
        case 0x17f7a0u: goto label_17f7a0;
        case 0x17f7a8u: goto label_17f7a8;
        case 0x17f7b8u: goto label_17f7b8;
        default: break;
    }

    ctx->pc = 0x17f770u;

    // 0x17f770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f780: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17f780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f788: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17f788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f78c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f798: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17F798u;
    SET_GPR_U32(ctx, 31, 0x17F7A0u);
    ctx->pc = 0x17F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F798u;
    // 0x17f79c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17F798u, 0x17F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7A0u;
label_17f7a0:
    // 0x17f7a0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17F7A0u;
    SET_GPR_U32(ctx, 31, 0x17F7A8u);
    ctx->pc = 0x17F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7A0u;
    // 0x17f7a4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17F7A0u, 0x17F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7A8u;
label_17f7a8:
    // 0x17f7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17f7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b0: 0xc05fdf6  jal         func_17F7D8
    ctx->pc = 0x17F7B0u;
    SET_GPR_U32(ctx, 31, 0x17F7B8u);
    ctx->pc = 0x17F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7B0u;
    // 0x17f7b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7D8u, 0x17F7B0u, 0x17F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7B8u;
label_17f7b8:
    // 0x17f7b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f7bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f7bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f7c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f7c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f7c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f7c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f7c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7CCu;
        // 0x17f7d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F7D4u;
}
