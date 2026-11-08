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

// Function: FontSkeletonLoad__9WcFontMan
// Address: 0x17c3a8 - 0x17c488
void FontSkeletonLoad__9WcFontMan_0x17c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontSkeletonLoad__9WcFontMan_0x17c3a8");
#endif

    switch (ctx->pc) {
        case 0x17c3ccu: goto label_17c3cc;
        case 0x17c3e4u: goto label_17c3e4;
        case 0x17c3f0u: goto label_17c3f0;
        case 0x17c3f8u: goto label_17c3f8;
        case 0x17c404u: goto label_17c404;
        case 0x17c40cu: goto label_17c40c;
        default: break;
    }

    ctx->pc = 0x17c3a8u;

    // 0x17c3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c3ac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c3b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c3c4: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x17C3C4u;
    SET_GPR_U32(ctx, 31, 0x17C3CCu);
    ctx->pc = 0x17C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3C4u;
    // 0x17c3c8: 0x8c500170  lw          $s0, 0x170($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x17C3C4u, 0x17C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3CCu;
label_17c3cc:
    // 0x17c3cc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x17c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x17c3d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17c3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3d4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x17c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17c3d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3dc: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x17C3DCu;
    SET_GPR_U32(ctx, 31, 0x17C3E4u);
    ctx->pc = 0x17C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3DCu;
    // 0x17c3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x17C3DCu, 0x17C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3E4u;
label_17c3e4:
    // 0x17c3e4: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x17c3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17c3e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C3E8u;
    SET_GPR_U32(ctx, 31, 0x17C3F0u);
    ctx->pc = 0x17C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3E8u;
    // 0x17c3ec: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C3E8u, 0x17C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F0u;
label_17c3f0:
    // 0x17c3f0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17C3F0u;
    SET_GPR_U32(ctx, 31, 0x17C3F8u);
    ctx->pc = 0x17C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3F0u;
    // 0x17c3f4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17C3F0u, 0x17C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F8u;
label_17c3f8:
    // 0x17c3f8: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x17c3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17c3fc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C3FCu;
    SET_GPR_U32(ctx, 31, 0x17C404u);
    ctx->pc = 0x17C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3FCu;
    // 0x17c400: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C3FCu, 0x17C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C404u;
label_17c404:
    // 0x17c404: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17C404u;
    SET_GPR_U32(ctx, 31, 0x17C40Cu);
    ctx->pc = 0x17C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C404u;
    // 0x17c408: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17C404u, 0x17C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C40Cu;
label_17c40c:
    // 0x17c40c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x17c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17c410: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x17c410u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17c414: 0xa53bc  dsll32      $t2, $t2, 14
    ctx->pc = 0x17c414u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 14));
    // 0x17c418: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x17c418u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17c41c: 0x94cf8  dsll        $t1, $t1, 19
    ctx->pc = 0x17c41cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 19);
    // 0x17c420: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17c424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c428: 0x94670018  lhu         $a3, 0x18($v1)
    ctx->pc = 0x17c428u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17c42c: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x17c42cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17c430: 0x94680002  lhu         $t0, 0x2($v1)
    ctx->pc = 0x17c430u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c434: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17c434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17c438: 0x9465001a  lhu         $a1, 0x1A($v1)
    ctx->pc = 0x17c438u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x17c43c: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x17c43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x17c440: 0x9466000c  lhu         $a2, 0xC($v1)
    ctx->pc = 0x17c440u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17c444: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x17c444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
    // 0x17c448: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x17c448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c44c: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x17c44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x17c450: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x17c450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x17c454: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x17c454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x17c458: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x17c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x17c45c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x17c45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x17c460: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x17c460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x17c464: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17c464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17c468: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17c468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17c46c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x17c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x17c470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c474: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17c474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17c478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c47c: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x17c47cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
    // 0x17c480: 0x3e00008  jr          $ra
    ctx->pc = 0x17C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C480u;
        // 0x17c484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C488u;
}
