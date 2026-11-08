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

// Function: PartsLoadInfoClose__9ApcObjRsc
// Address: 0x1d7598 - 0x1d7660
void PartsLoadInfoClose__9ApcObjRsc_0x1d7598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsLoadInfoClose__9ApcObjRsc_0x1d7598");
#endif

    switch (ctx->pc) {
        case 0x1d7598u: goto label_1d7598;
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a0u: goto label_1d75a0;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75b0u: goto label_1d75b0;
        case 0x1d75b4u: goto label_1d75b4;
        case 0x1d75b8u: goto label_1d75b8;
        case 0x1d75bcu: goto label_1d75bc;
        case 0x1d75c0u: goto label_1d75c0;
        case 0x1d75c4u: goto label_1d75c4;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75ccu: goto label_1d75cc;
        case 0x1d75d0u: goto label_1d75d0;
        case 0x1d75d4u: goto label_1d75d4;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75dcu: goto label_1d75dc;
        case 0x1d75e0u: goto label_1d75e0;
        case 0x1d75e4u: goto label_1d75e4;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75ecu: goto label_1d75ec;
        case 0x1d75f0u: goto label_1d75f0;
        case 0x1d75f4u: goto label_1d75f4;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d75fcu: goto label_1d75fc;
        case 0x1d7600u: goto label_1d7600;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7608u: goto label_1d7608;
        case 0x1d760cu: goto label_1d760c;
        case 0x1d7610u: goto label_1d7610;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7618u: goto label_1d7618;
        case 0x1d761cu: goto label_1d761c;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d7624u: goto label_1d7624;
        case 0x1d7628u: goto label_1d7628;
        case 0x1d762cu: goto label_1d762c;
        case 0x1d7630u: goto label_1d7630;
        case 0x1d7634u: goto label_1d7634;
        case 0x1d7638u: goto label_1d7638;
        case 0x1d763cu: goto label_1d763c;
        case 0x1d7640u: goto label_1d7640;
        case 0x1d7644u: goto label_1d7644;
        case 0x1d7648u: goto label_1d7648;
        case 0x1d764cu: goto label_1d764c;
        case 0x1d7650u: goto label_1d7650;
        case 0x1d7654u: goto label_1d7654;
        case 0x1d7658u: goto label_1d7658;
        case 0x1d765cu: goto label_1d765c;
        default: break;
    }

    ctx->pc = 0x1d7598u;

label_1d7598:
    // 0x1d7598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d759c:
    // 0x1d759c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d75a0:
    // 0x1d75a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d75a4:
    // 0x1d75a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d75a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d75a8:
    // 0x1d75a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d75a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d75ac:
    // 0x1d75ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d75acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d75b0:
    // 0x1d75b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d75b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d75b4:
    // 0x1d75b4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1d75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1d75b8:
    // 0x1d75b8: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_1d75bc:
    if (ctx->pc == 0x1D75BCu) {
        ctx->pc = 0x1D75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75B8u;
        // 0x1d75bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75C0u;
        goto label_1d75c0;
    }
    ctx->pc = 0x1D75B8u;
    {
        const bool branch_taken_0x1d75b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75B8u;
        // 0x1d75bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75b8) {
            ctx->pc = 0x1D7638u;
            goto label_1d7638;
        }
    }
    ctx->pc = 0x1D75C0u;
label_1d75c0:
    // 0x1d75c0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d75c4:
    // 0x1d75c4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d75c8:
    // 0x1d75c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d75c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d75cc:
    // 0x1d75cc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d75d0:
    // 0x1d75d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d75d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d75d4:
    // 0x1d75d4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d75d8:
    if (ctx->pc == 0x1D75D8u) {
        ctx->pc = 0x1D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D4u;
        // 0x1d75d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75DCu;
        goto label_1d75dc;
    }
    ctx->pc = 0x1D75D4u;
    {
        const bool branch_taken_0x1d75d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D4u;
        // 0x1d75d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75d4) {
            ctx->pc = 0x1D75F8u;
            goto label_1d75f8;
        }
    }
    ctx->pc = 0x1D75DCu;
label_1d75dc:
    // 0x1d75dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d75e0:
    // 0x1d75e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75e4:
    // 0x1d75e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d75e8:
    // 0x1d75e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d75e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d75ec:
    // 0x1d75ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d75f0:
    // 0x1d75f0: 0x60f809  jalr        $v1
label_1d75f4:
    if (ctx->pc == 0x1D75F4u) {
        ctx->pc = 0x1D75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75F0u;
        // 0x1d75f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75F8u;
        goto label_1d75f8;
    }
    ctx->pc = 0x1D75F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D75F8u);
        ctx->pc = 0x1D75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75F0u;
        // 0x1d75f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D75F0u, 0x1D75F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D75F8u;
label_1d75f8:
    // 0x1d75f8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d75fc:
    // 0x1d75fc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d7600:
    if (ctx->pc == 0x1D7600u) {
        ctx->pc = 0x1D7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75FCu;
        // 0x1d7600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7604u;
        goto label_1d7604;
    }
    ctx->pc = 0x1D75FCu;
    {
        const bool branch_taken_0x1d75fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75FCu;
        // 0x1d7600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75fc) {
            ctx->pc = 0x1D761Cu;
            goto label_1d761c;
        }
    }
    ctx->pc = 0x1D7604u;
label_1d7604:
    // 0x1d7604: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7608:
    // 0x1d7608: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d760c:
    // 0x1d760c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d760cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7610:
    // 0x1d7610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7614:
    // 0x1d7614: 0x60f809  jalr        $v1
label_1d7618:
    if (ctx->pc == 0x1D7618u) {
        ctx->pc = 0x1D7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7614u;
        // 0x1d7618: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D761Cu;
        goto label_1d761c;
    }
    ctx->pc = 0x1D7614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D761Cu);
        ctx->pc = 0x1D7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7614u;
        // 0x1d7618: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7614u, 0x1D761Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D761Cu;
label_1d761c:
    // 0x1d761c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d761cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d7620:
    // 0x1d7620: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d7620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d7624:
    // 0x1d7624: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1d7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1d7628:
    // 0x1d7628: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d7628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d762c:
    // 0x1d762c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d762cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7630:
    // 0x1d7630: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1d7634:
    if (ctx->pc == 0x1D7634u) {
        ctx->pc = 0x1D7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7630u;
        // 0x1d7634: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7638u;
        goto label_1d7638;
    }
    ctx->pc = 0x1D7630u;
    {
        const bool branch_taken_0x1d7630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7630u;
        // 0x1d7634: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7630) {
            ctx->pc = 0x1D75C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d75c0;
        }
    }
    ctx->pc = 0x1D7638u;
label_1d7638:
    // 0x1d7638: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1d763c:
    // 0x1d763c: 0xc067f04  jal         func_19FC10
label_1d7640:
    if (ctx->pc == 0x1D7640u) {
        ctx->pc = 0x1D7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D763Cu;
        // 0x1d7640: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7644u;
        goto label_1d7644;
    }
    ctx->pc = 0x1D763Cu;
    SET_GPR_U32(ctx, 31, 0x1D7644u);
    ctx->pc = 0x1D7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D763Cu;
    // 0x1d7640: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D763Cu, 0x1D7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7644u;
label_1d7644:
    // 0x1d7644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7648:
    // 0x1d7648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d764c:
    // 0x1d764c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d764cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7650:
    // 0x1d7650: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d7654:
    // 0x1d7654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7658:
    // 0x1d7658: 0x3e00008  jr          $ra
label_1d765c:
    if (ctx->pc == 0x1D765Cu) {
        ctx->pc = 0x1D765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7658u;
        // 0x1d765c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7660u;
        goto label_fallthrough_0x1d7658;
    }
    ctx->pc = 0x1D7658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7658u;
        // 0x1d765c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7658:
    ctx->pc = 0x1D7660u;
}
