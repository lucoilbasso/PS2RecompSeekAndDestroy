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

// Function: ApMultiScreenCreate__FP7Color32
// Address: 0x147580 - 0x147684
void ApMultiScreenCreate__FP7Color32_0x147580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMultiScreenCreate__FP7Color32_0x147580");
#endif

    switch (ctx->pc) {
        case 0x1475a4u: goto label_1475a4;
        case 0x1475d0u: goto label_1475d0;
        case 0x147608u: goto label_147608;
        case 0x14762cu: goto label_14762c;
        case 0x147638u: goto label_147638;
        default: break;
    }

    ctx->pc = 0x147580u;

    // 0x147580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147584: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x147588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14758c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14758cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x147590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x147594: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x147594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x147598: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x147598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14759c: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x14759Cu;
    SET_GPR_U32(ctx, 31, 0x1475A4u);
    ctx->pc = 0x1475A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14759Cu;
    // 0x1475a0: 0x245126c0  addiu       $s1, $v0, 0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x14759Cu, 0x1475A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475A4u;
label_1475a4:
    // 0x1475a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1475a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1475ac: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1475acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1475b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1475b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1475b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475b8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1475b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1475bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1475c0: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x1475c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    // 0x1475c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1475c8: 0xae230374  sw          $v1, 0x374($s1)
    ctx->pc = 0x1475c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 3));
    // 0x1475cc: 0x0  nop
    ctx->pc = 0x1475ccu;
    // NOP
label_1475d0:
    // 0x1475d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1475d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1475d8: 0xaca20378  sw          $v0, 0x378($a1)
    ctx->pc = 0x1475d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 888), GPR_U32(ctx, 2));
    // 0x1475dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1475e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1475e4: 0xaca3037c  sw          $v1, 0x37C($a1)
    ctx->pc = 0x1475e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 892), GPR_U32(ctx, 3));
    // 0x1475e8: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1475E8u;
    {
        const bool branch_taken_0x1475e8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1475ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475E8u;
        // 0x1475ec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475e8) {
            ctx->pc = 0x1475D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1475d0;
        }
    }
    ctx->pc = 0x1475F0u;
    // 0x1475f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1475f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1475f4: 0x262503b0  addiu       $a1, $s1, 0x3B0
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x1475f8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1475fc: 0xae2303ac  sw          $v1, 0x3AC($s1)
    ctx->pc = 0x1475fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 3));
    // 0x147600: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x147600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x147604: 0xae2203a8  sw          $v0, 0x3A8($s1)
    ctx->pc = 0x147604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 2));
label_147608:
    // 0x147608: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x147608u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14760c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x147610: 0x0  nop
    ctx->pc = 0x147610u;
    // NOP
    // 0x147614: 0x0  nop
    ctx->pc = 0x147614u;
    // NOP
    // 0x147618: 0x0  nop
    ctx->pc = 0x147618u;
    // NOP
    // 0x14761c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14761Cu;
    {
        const bool branch_taken_0x14761c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x147620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14761Cu;
        // 0x147620: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14761c) {
            ctx->pc = 0x147608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147608;
        }
    }
    ctx->pc = 0x147624u;
    // 0x147624: 0xc051d3a  jal         func_1474E8
    ctx->pc = 0x147624u;
    SET_GPR_U32(ctx, 31, 0x14762Cu);
    ctx->pc = 0x147628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147624u;
    // 0x147628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1474E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1474E8u, 0x147624u, 0x14762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14762Cu;
label_14762c:
    // 0x14762c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147630: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x147630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x147634: 0x0  nop
    ctx->pc = 0x147634u;
    // NOP
label_147638:
    // 0x147638: 0x24a40270  addiu       $a0, $a1, 0x270
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x14763c: 0x24a303b0  addiu       $v1, $a1, 0x3B0
    ctx->pc = 0x14763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 944));
    // 0x147640: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x147640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147644: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x147644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x147648: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x147648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14764c: 0x0  nop
    ctx->pc = 0x14764cu;
    // NOP
    // 0x147650: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x147650u;
    {
        const bool branch_taken_0x147650 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x147654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147650u;
        // 0x147654: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147650) {
            ctx->pc = 0x147638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147638;
        }
    }
    ctx->pc = 0x147658u;
    // 0x147658: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x14765c: 0xae51015c  sw          $s1, 0x15C($s2)
    ctx->pc = 0x14765cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 17));
    // 0x147660: 0x246376f8  addiu       $v1, $v1, 0x76F8
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30456));
    // 0x147664: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x147664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147668: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x147668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
    // 0x14766c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x147674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147678: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x147678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14767c: 0x3e00008  jr          $ra
    ctx->pc = 0x14767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14767Cu;
        // 0x147680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147684u;
}
