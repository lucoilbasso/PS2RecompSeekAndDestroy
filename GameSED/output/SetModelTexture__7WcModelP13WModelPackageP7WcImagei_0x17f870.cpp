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

// Function: SetModelTexture__7WcModelP13WModelPackageP7WcImagei
// Address: 0x17f870 - 0x17f8d4
void SetModelTexture__7WcModelP13WModelPackageP7WcImagei_0x17f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetModelTexture__7WcModelP13WModelPackageP7WcImagei_0x17f870");
#endif

    switch (ctx->pc) {
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8a8u: goto label_17f8a8;
        case 0x17f8b8u: goto label_17f8b8;
        default: break;
    }

    ctx->pc = 0x17f870u;

    // 0x17f870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f87c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f880: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17f880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f888: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17f888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f88c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f890: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f898: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17F898u;
    SET_GPR_U32(ctx, 31, 0x17F8A0u);
    ctx->pc = 0x17F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F898u;
    // 0x17f89c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17F898u, 0x17F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8A0u;
label_17f8a0:
    // 0x17f8a0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17F8A0u;
    SET_GPR_U32(ctx, 31, 0x17F8A8u);
    ctx->pc = 0x17F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8A0u;
    // 0x17f8a4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17F8A0u, 0x17F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8A8u;
label_17f8a8:
    // 0x17f8a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8b0: 0xc05fbfc  jal         func_17EFF0
    ctx->pc = 0x17F8B0u;
    SET_GPR_U32(ctx, 31, 0x17F8B8u);
    ctx->pc = 0x17F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8B0u;
    // 0x17f8b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFF0u, 0x17F8B0u, 0x17F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F8B8u;
label_17f8b8:
    // 0x17f8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f8bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f8c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f8c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f8c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8CCu;
        // 0x17f8d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F8D4u;
}
