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

// Function: Cmd_LOAD_SCANMAP_Entry__FP15BsSCDEntControl
// Address: 0x1446f0 - 0x1447c0
void Cmd_LOAD_SCANMAP_Entry__FP15BsSCDEntControl_0x1446f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_SCANMAP_Entry__FP15BsSCDEntControl_0x1446f0");
#endif

    switch (ctx->pc) {
        case 0x144728u: goto label_144728;
        case 0x144730u: goto label_144730;
        case 0x14474cu: goto label_14474c;
        case 0x144760u: goto label_144760;
        case 0x144770u: goto label_144770;
        case 0x144778u: goto label_144778;
        case 0x144790u: goto label_144790;
        case 0x144798u: goto label_144798;
        case 0x1447a0u: goto label_1447a0;
        default: break;
    }

    ctx->pc = 0x1446f0u;

    // 0x1446f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1446f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1446f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1446f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1446f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1446fc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1446fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144700: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x144700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x144704: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x144708: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x144708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14470c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x14470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x144710: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x144710u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x144714: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x144714u;
    {
        const bool branch_taken_0x144714 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144714u;
        // 0x144718: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144714) {
            ctx->pc = 0x144758u;
            goto label_144758;
        }
    }
    ctx->pc = 0x14471Cu;
    // 0x14471c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x144720: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144720u;
    SET_GPR_U32(ctx, 31, 0x144728u);
    ctx->pc = 0x144724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144720u;
    // 0x144724: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144720u, 0x144728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144728u;
label_144728:
    // 0x144728: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144728u;
    SET_GPR_U32(ctx, 31, 0x144730u);
    ctx->pc = 0x14472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144728u;
    // 0x14472c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144728u, 0x144730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144730u;
label_144730:
    // 0x144730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144734: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x144734u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x144738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14473c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x14473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x144740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144744: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144744u;
    SET_GPR_U32(ctx, 31, 0x14474Cu);
    ctx->pc = 0x144748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144744u;
    // 0x144748: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144744u, 0x14474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14474Cu;
label_14474c:
    // 0x14474c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14474Cu;
    {
        const bool branch_taken_0x14474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14474c) {
            ctx->pc = 0x144790u;
            goto label_144790;
        }
    }
    ctx->pc = 0x144754u;
    // 0x144754: 0x0  nop
    ctx->pc = 0x144754u;
    // NOP
label_144758:
    // 0x144758: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144758u;
    SET_GPR_U32(ctx, 31, 0x144760u);
    ctx->pc = 0x14475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144758u;
    // 0x14475c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144758u, 0x144760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144760u;
label_144760:
    // 0x144760: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144764: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x144768: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144768u;
    SET_GPR_U32(ctx, 31, 0x144770u);
    ctx->pc = 0x14476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144768u;
    // 0x14476c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144768u, 0x144770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144770u;
label_144770:
    // 0x144770: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144770u;
    SET_GPR_U32(ctx, 31, 0x144778u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144770u, 0x144778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144778u;
label_144778:
    // 0x144778: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14477c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144788: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144788u;
    SET_GPR_U32(ctx, 31, 0x144790u);
    ctx->pc = 0x14478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144788u;
    // 0x14478c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144788u, 0x144790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144790u;
label_144790:
    // 0x144790: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144790u;
    SET_GPR_U32(ctx, 31, 0x144798u);
    ctx->pc = 0x144794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144790u;
    // 0x144794: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144790u, 0x144798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144798u;
label_144798:
    // 0x144798: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144798u;
    SET_GPR_U32(ctx, 31, 0x1447A0u);
    ctx->pc = 0x14479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144798u;
    // 0x14479c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144798u, 0x1447A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447A0u;
label_1447a0:
    // 0x1447a0: 0xae720074  sw          $s2, 0x74($s3)
    ctx->pc = 0x1447a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 18));
    // 0x1447a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1447a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1447a8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1447a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1447ac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1447acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1447b0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1447b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1447b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1447b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1447b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1447B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1447BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447B8u;
        // 0x1447bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1447C0u;
}
