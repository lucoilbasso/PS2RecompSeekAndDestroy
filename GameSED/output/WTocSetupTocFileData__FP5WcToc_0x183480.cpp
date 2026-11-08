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

// Function: WTocSetupTocFileData__FP5WcToc
// Address: 0x183480 - 0x1835c4
void WTocSetupTocFileData__FP5WcToc_0x183480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTocSetupTocFileData__FP5WcToc_0x183480");
#endif

    switch (ctx->pc) {
        case 0x1834f8u: goto label_1834f8;
        case 0x183558u: goto label_183558;
        case 0x183574u: goto label_183574;
        case 0x183598u: goto label_183598;
        case 0x1835a8u: goto label_1835a8;
        default: break;
    }

    ctx->pc = 0x183480u;

    // 0x183480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183484: 0x24031803  addiu       $v1, $zero, 0x1803
    ctx->pc = 0x183484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6147));
    // 0x183488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18348c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18348cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183490: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x183490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x183494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18349c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1834a0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1834a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1834a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1834a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1834A8u;
    {
        const bool branch_taken_0x1834a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1834ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834A8u;
        // 0x1834ac: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834a8) {
            ctx->pc = 0x1834B8u;
            goto label_1834b8;
        }
    }
    ctx->pc = 0x1834B0u;
    // 0x1834b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1834B0u;
    {
        const bool branch_taken_0x1834b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834B0u;
        // 0x1834b4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834b0) {
            ctx->pc = 0x1834BCu;
            goto label_1834bc;
        }
    }
    ctx->pc = 0x1834B8u;
label_1834b8:
    // 0x1834b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1834b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1834bc:
    // 0x1834bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1834bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1834c0: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x1834c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1834c4: 0x8602002a  lh          $v0, 0x2A($s0)
    ctx->pc = 0x1834c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1834c8: 0xa6040028  sh          $a0, 0x28($s0)
    ctx->pc = 0x1834c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x1834cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1834d0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1834d0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1834d4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1834d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1834d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1834e0: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x1834e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1834e4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1834E4u;
    {
        const bool branch_taken_0x1834e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834E4u;
        // 0x1834e8: 0x32b83  sra         $a1, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834e4) {
            ctx->pc = 0x1834F0u;
            goto label_1834f0;
        }
    }
    ctx->pc = 0x1834ECu;
    // 0x1834ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1834ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1834f0:
    // 0x1834f0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1834F0u;
    SET_GPR_U32(ctx, 31, 0x1834F8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1834F0u, 0x1834F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834F8u;
label_1834f8:
    // 0x1834f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1834F8u;
    {
        const bool branch_taken_0x1834f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1834FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834F8u;
        // 0x1834fc: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834f8) {
            ctx->pc = 0x183530u;
            goto label_183530;
        }
    }
    ctx->pc = 0x183500u;
    // 0x183500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183508: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x18350c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18350cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x183510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183514: 0x24a57df0  addiu       $a1, $a1, 0x7DF0
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32240));
    // 0x183518: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x183518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18351c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18351cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183524: 0x8068186  j           func_1A0618
    ctx->pc = 0x183524u;
    ctx->pc = 0x183528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183524u;
    // 0x183528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x18352Cu;
    // 0x18352c: 0x0  nop
    ctx->pc = 0x18352cu;
    // NOP
label_183530:
    // 0x183530: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x183534: 0x24021803  addiu       $v0, $zero, 0x1803
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6147));
    // 0x183538: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183538u;
    {
        const bool branch_taken_0x183538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x183538) {
            ctx->pc = 0x18353Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183538u;
            // 0x18353c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183590u;
            goto label_183590;
        }
    }
    ctx->pc = 0x183540u;
    // 0x183540: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x183540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x183544: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x183544u;
    {
        const bool branch_taken_0x183544 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183544u;
        // 0x183548: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183544) {
            ctx->pc = 0x183598u;
            goto label_183598;
        }
    }
    ctx->pc = 0x18354Cu;
    // 0x18354c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x18354cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x183550: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x183554: 0x0  nop
    ctx->pc = 0x183554u;
    // NOP
label_183558:
    // 0x183558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18355c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x183560: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183568: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x183568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18356c: 0xc060e0c  jal         func_183830
    ctx->pc = 0x18356Cu;
    SET_GPR_U32(ctx, 31, 0x183574u);
    ctx->pc = 0x183570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18356Cu;
    // 0x183570: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183830u, 0x18356Cu, 0x183574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183574u;
label_183574:
    // 0x183574: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x183578: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x183578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18357c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18357Cu;
    {
        const bool branch_taken_0x18357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18357Cu;
        // 0x183580: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18357c) {
            ctx->pc = 0x183558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183558;
        }
    }
    ctx->pc = 0x183584u;
    // 0x183584: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x183584u;
    {
        const bool branch_taken_0x183584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183584u;
        // 0x183588: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183584) {
            ctx->pc = 0x18359Cu;
            goto label_18359c;
        }
    }
    ctx->pc = 0x18358Cu;
    // 0x18358c: 0x0  nop
    ctx->pc = 0x18358cu;
    // NOP
label_183590:
    // 0x183590: 0xc060e0c  jal         func_183830
    ctx->pc = 0x183590u;
    SET_GPR_U32(ctx, 31, 0x183598u);
    ctx->pc = 0x183594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183590u;
    // 0x183594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183830u, 0x183590u, 0x183598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183598u;
label_183598:
    // 0x183598: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x183598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_18359c:
    // 0x18359c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835a0: 0xc060eb0  jal         func_183AC0
    ctx->pc = 0x1835A0u;
    SET_GPR_U32(ctx, 31, 0x1835A8u);
    ctx->pc = 0x1835A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835A0u;
    // 0x1835a4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AC0u, 0x1835A0u, 0x1835A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835A8u;
label_1835a8:
    // 0x1835a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1835a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1835ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1835acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1835b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1835b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1835b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1835b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1835b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1835b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1835bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1835BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835BCu;
        // 0x1835c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1835BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1835C4u;
}
