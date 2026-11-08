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

// Function: ApRsc3DMakeStageRscToc__FP8ApcRsc3Di
// Address: 0x143420 - 0x1434b4
void ApRsc3DMakeStageRscToc__FP8ApcRsc3Di_0x143420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DMakeStageRscToc__FP8ApcRsc3Di_0x143420");
#endif

    switch (ctx->pc) {
        case 0x143454u: goto label_143454;
        case 0x14346cu: goto label_14346c;
        case 0x143474u: goto label_143474;
        case 0x14347cu: goto label_14347c;
        default: break;
    }

    ctx->pc = 0x143420u;

    // 0x143420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143424: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x143424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x143428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14342c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x143434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x143438: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x143438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14343c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14344c: 0xc04161e  jal         func_105878
    ctx->pc = 0x14344Cu;
    SET_GPR_U32(ctx, 31, 0x143454u);
    ctx->pc = 0x143450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14344Cu;
    // 0x143450: 0x8c510378  lw          $s1, 0x378($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 888)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105878u, 0x14344Cu, 0x143454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143454u;
label_143454:
    // 0x143454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143458: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x143458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14345c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14345cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143464: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x143464u;
    SET_GPR_U32(ctx, 31, 0x14346Cu);
    ctx->pc = 0x143468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143464u;
    // 0x143468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x143464u, 0x14346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14346Cu;
label_14346c:
    // 0x14346c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x14346Cu;
    SET_GPR_U32(ctx, 31, 0x143474u);
    ctx->pc = 0x143470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14346Cu;
    // 0x143470: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x14346Cu, 0x143474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143474u;
label_143474:
    // 0x143474: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143474u;
    SET_GPR_U32(ctx, 31, 0x14347Cu);
    ctx->pc = 0x143478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143474u;
    // 0x143478: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143474u, 0x14347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14347Cu;
label_14347c:
    // 0x14347c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x14347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x143480: 0xae120048  sw          $s2, 0x48($s0)
    ctx->pc = 0x143480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 18));
    // 0x143484: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143488: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x143488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x14348c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14348cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143490: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x143490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x143494: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x143494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143498: 0x8c640098  lw          $a0, 0x98($v1)
    ctx->pc = 0x143498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x14349c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14349cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1434a0: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1434a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1434a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1434a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1434a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1434a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1434ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1434ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1434B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434ACu;
        // 0x1434b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1434B4u;
}
