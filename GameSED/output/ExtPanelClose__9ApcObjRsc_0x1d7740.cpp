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

// Function: ExtPanelClose__9ApcObjRsc
// Address: 0x1d7740 - 0x1d77dc
void ExtPanelClose__9ApcObjRsc_0x1d7740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelClose__9ApcObjRsc_0x1d7740");
#endif

    switch (ctx->pc) {
        case 0x1d7740u: goto label_1d7740;
        case 0x1d7744u: goto label_1d7744;
        case 0x1d7748u: goto label_1d7748;
        case 0x1d774cu: goto label_1d774c;
        case 0x1d7750u: goto label_1d7750;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7758u: goto label_1d7758;
        case 0x1d775cu: goto label_1d775c;
        case 0x1d7760u: goto label_1d7760;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d7768u: goto label_1d7768;
        case 0x1d776cu: goto label_1d776c;
        case 0x1d7770u: goto label_1d7770;
        case 0x1d7774u: goto label_1d7774;
        case 0x1d7778u: goto label_1d7778;
        case 0x1d777cu: goto label_1d777c;
        case 0x1d7780u: goto label_1d7780;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d7788u: goto label_1d7788;
        case 0x1d778cu: goto label_1d778c;
        case 0x1d7790u: goto label_1d7790;
        case 0x1d7794u: goto label_1d7794;
        case 0x1d7798u: goto label_1d7798;
        case 0x1d779cu: goto label_1d779c;
        case 0x1d77a0u: goto label_1d77a0;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77a8u: goto label_1d77a8;
        case 0x1d77acu: goto label_1d77ac;
        case 0x1d77b0u: goto label_1d77b0;
        case 0x1d77b4u: goto label_1d77b4;
        case 0x1d77b8u: goto label_1d77b8;
        case 0x1d77bcu: goto label_1d77bc;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d77c4u: goto label_1d77c4;
        case 0x1d77c8u: goto label_1d77c8;
        case 0x1d77ccu: goto label_1d77cc;
        case 0x1d77d0u: goto label_1d77d0;
        case 0x1d77d4u: goto label_1d77d4;
        case 0x1d77d8u: goto label_1d77d8;
        default: break;
    }

    ctx->pc = 0x1d7740u;

label_1d7740:
    // 0x1d7740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7744:
    // 0x1d7744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d7748:
    // 0x1d7748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d774c:
    // 0x1d774c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d7750:
    // 0x1d7750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d7754:
    // 0x1d7754: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d7758:
    // 0x1d7758: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1d7758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1d775c:
    // 0x1d775c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_1d7760:
    if (ctx->pc == 0x1D7760u) {
        ctx->pc = 0x1D7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D775Cu;
        // 0x1d7760: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7764u;
        goto label_1d7764;
    }
    ctx->pc = 0x1D775Cu;
    {
        const bool branch_taken_0x1d775c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D775Cu;
        // 0x1d7760: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d775c) {
            ctx->pc = 0x1D77B0u;
            goto label_1d77b0;
        }
    }
    ctx->pc = 0x1D7764u;
label_1d7764:
    // 0x1d7764: 0x0  nop
    ctx->pc = 0x1d7764u;
    // NOP
label_1d7768:
    // 0x1d7768: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1d776c:
    // 0x1d776c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d776cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d7770:
    // 0x1d7770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d7774:
    // 0x1d7774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7778:
    // 0x1d7778: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d7778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d777c:
    // 0x1d777c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d7780:
    if (ctx->pc == 0x1D7780u) {
        ctx->pc = 0x1D7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D777Cu;
        // 0x1d7780: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7784u;
        goto label_1d7784;
    }
    ctx->pc = 0x1D777Cu;
    {
        const bool branch_taken_0x1d777c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D777Cu;
        // 0x1d7780: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d777c) {
            ctx->pc = 0x1D77A0u;
            goto label_1d77a0;
        }
    }
    ctx->pc = 0x1D7784u;
label_1d7784:
    // 0x1d7784: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7788:
    // 0x1d7788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d778c:
    // 0x1d778c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7790:
    // 0x1d7790: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7794:
    // 0x1d7794: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7798:
    // 0x1d7798: 0x60f809  jalr        $v1
label_1d779c:
    if (ctx->pc == 0x1D779Cu) {
        ctx->pc = 0x1D779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7798u;
        // 0x1d779c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77A0u;
        goto label_1d77a0;
    }
    ctx->pc = 0x1D7798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D77A0u);
        ctx->pc = 0x1D779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7798u;
        // 0x1d779c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7798u, 0x1D77A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D77A0u;
label_1d77a0:
    // 0x1d77a0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1d77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1d77a4:
    // 0x1d77a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d77a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d77a8:
    // 0x1d77a8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1d77ac:
    if (ctx->pc == 0x1D77ACu) {
        ctx->pc = 0x1D77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77A8u;
        // 0x1d77ac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77B0u;
        goto label_1d77b0;
    }
    ctx->pc = 0x1D77A8u;
    {
        const bool branch_taken_0x1d77a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77A8u;
        // 0x1d77ac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77a8) {
            ctx->pc = 0x1D7768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7768;
        }
    }
    ctx->pc = 0x1D77B0u;
label_1d77b0:
    // 0x1d77b0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1d77b4:
    // 0x1d77b4: 0xc067f04  jal         func_19FC10
label_1d77b8:
    if (ctx->pc == 0x1D77B8u) {
        ctx->pc = 0x1D77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77B4u;
        // 0x1d77b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77BCu;
        goto label_1d77bc;
    }
    ctx->pc = 0x1D77B4u;
    SET_GPR_U32(ctx, 31, 0x1D77BCu);
    ctx->pc = 0x1D77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77B4u;
    // 0x1d77b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D77B4u, 0x1D77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77BCu;
label_1d77bc:
    // 0x1d77bc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1d77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_1d77c0:
    // 0x1d77c0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1d77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_1d77c4:
    // 0x1d77c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d77c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d77c8:
    // 0x1d77c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d77c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d77cc:
    // 0x1d77cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d77ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d77d0:
    // 0x1d77d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d77d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d77d4:
    // 0x1d77d4: 0x3e00008  jr          $ra
label_1d77d8:
    if (ctx->pc == 0x1D77D8u) {
        ctx->pc = 0x1D77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D4u;
        // 0x1d77d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77DCu;
        goto label_fallthrough_0x1d77d4;
    }
    ctx->pc = 0x1D77D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D4u;
        // 0x1d77d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D77D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d77d4:
    ctx->pc = 0x1D77DCu;
}
