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

// Function: Ap2DPanel_TRANS_Param__FP8WcEntityP15BsSCDEntControlb
// Address: 0x1076a0 - 0x107804
void Ap2DPanel_TRANS_Param__FP8WcEntityP15BsSCDEntControlb_0x1076a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ap2DPanel_TRANS_Param__FP8WcEntityP15BsSCDEntControlb_0x1076a0");
#endif

    switch (ctx->pc) {
        case 0x1076a0u: goto label_1076a0;
        case 0x1076a4u: goto label_1076a4;
        case 0x1076a8u: goto label_1076a8;
        case 0x1076acu: goto label_1076ac;
        case 0x1076b0u: goto label_1076b0;
        case 0x1076b4u: goto label_1076b4;
        case 0x1076b8u: goto label_1076b8;
        case 0x1076bcu: goto label_1076bc;
        case 0x1076c0u: goto label_1076c0;
        case 0x1076c4u: goto label_1076c4;
        case 0x1076c8u: goto label_1076c8;
        case 0x1076ccu: goto label_1076cc;
        case 0x1076d0u: goto label_1076d0;
        case 0x1076d4u: goto label_1076d4;
        case 0x1076d8u: goto label_1076d8;
        case 0x1076dcu: goto label_1076dc;
        case 0x1076e0u: goto label_1076e0;
        case 0x1076e4u: goto label_1076e4;
        case 0x1076e8u: goto label_1076e8;
        case 0x1076ecu: goto label_1076ec;
        case 0x1076f0u: goto label_1076f0;
        case 0x1076f4u: goto label_1076f4;
        case 0x1076f8u: goto label_1076f8;
        case 0x1076fcu: goto label_1076fc;
        case 0x107700u: goto label_107700;
        case 0x107704u: goto label_107704;
        case 0x107708u: goto label_107708;
        case 0x10770cu: goto label_10770c;
        case 0x107710u: goto label_107710;
        case 0x107714u: goto label_107714;
        case 0x107718u: goto label_107718;
        case 0x10771cu: goto label_10771c;
        case 0x107720u: goto label_107720;
        case 0x107724u: goto label_107724;
        case 0x107728u: goto label_107728;
        case 0x10772cu: goto label_10772c;
        case 0x107730u: goto label_107730;
        case 0x107734u: goto label_107734;
        case 0x107738u: goto label_107738;
        case 0x10773cu: goto label_10773c;
        case 0x107740u: goto label_107740;
        case 0x107744u: goto label_107744;
        case 0x107748u: goto label_107748;
        case 0x10774cu: goto label_10774c;
        case 0x107750u: goto label_107750;
        case 0x107754u: goto label_107754;
        case 0x107758u: goto label_107758;
        case 0x10775cu: goto label_10775c;
        case 0x107760u: goto label_107760;
        case 0x107764u: goto label_107764;
        case 0x107768u: goto label_107768;
        case 0x10776cu: goto label_10776c;
        case 0x107770u: goto label_107770;
        case 0x107774u: goto label_107774;
        case 0x107778u: goto label_107778;
        case 0x10777cu: goto label_10777c;
        case 0x107780u: goto label_107780;
        case 0x107784u: goto label_107784;
        case 0x107788u: goto label_107788;
        case 0x10778cu: goto label_10778c;
        case 0x107790u: goto label_107790;
        case 0x107794u: goto label_107794;
        case 0x107798u: goto label_107798;
        case 0x10779cu: goto label_10779c;
        case 0x1077a0u: goto label_1077a0;
        case 0x1077a4u: goto label_1077a4;
        case 0x1077a8u: goto label_1077a8;
        case 0x1077acu: goto label_1077ac;
        case 0x1077b0u: goto label_1077b0;
        case 0x1077b4u: goto label_1077b4;
        case 0x1077b8u: goto label_1077b8;
        case 0x1077bcu: goto label_1077bc;
        case 0x1077c0u: goto label_1077c0;
        case 0x1077c4u: goto label_1077c4;
        case 0x1077c8u: goto label_1077c8;
        case 0x1077ccu: goto label_1077cc;
        case 0x1077d0u: goto label_1077d0;
        case 0x1077d4u: goto label_1077d4;
        case 0x1077d8u: goto label_1077d8;
        case 0x1077dcu: goto label_1077dc;
        case 0x1077e0u: goto label_1077e0;
        case 0x1077e4u: goto label_1077e4;
        case 0x1077e8u: goto label_1077e8;
        case 0x1077ecu: goto label_1077ec;
        case 0x1077f0u: goto label_1077f0;
        case 0x1077f4u: goto label_1077f4;
        case 0x1077f8u: goto label_1077f8;
        case 0x1077fcu: goto label_1077fc;
        case 0x107800u: goto label_107800;
        default: break;
    }

    ctx->pc = 0x1076a0u;

label_1076a0:
    // 0x1076a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1076a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1076a4:
    // 0x1076a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1076a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1076a8:
    // 0x1076a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1076a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1076ac:
    // 0x1076ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1076acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1076b0:
    // 0x1076b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1076b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1076b4:
    // 0x1076b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1076b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1076b8:
    // 0x1076b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1076b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1076bc:
    // 0x1076bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1076bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1076c0:
    // 0x1076c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1076c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1076c4:
    // 0x1076c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1076c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1076c8:
    // 0x1076c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1076c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1076cc:
    // 0x1076cc: 0xc06a26e  jal         func_1A89B8
label_1076d0:
    if (ctx->pc == 0x1076D0u) {
        ctx->pc = 0x1076D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076CCu;
        // 0x1076d0: 0x213880b  movn        $s1, $s0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076D4u;
        goto label_1076d4;
    }
    ctx->pc = 0x1076CCu;
    SET_GPR_U32(ctx, 31, 0x1076D4u);
    ctx->pc = 0x1076D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076CCu;
    // 0x1076d0: 0x213880b  movn        $s1, $s0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1076CCu, 0x1076D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076D4u;
label_1076d4:
    // 0x1076d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1076d8:
    if (ctx->pc == 0x1076D8u) {
        ctx->pc = 0x1076DCu;
        goto label_1076dc;
    }
    ctx->pc = 0x1076D4u;
    {
        const bool branch_taken_0x1076d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1076d4) {
            ctx->pc = 0x107718u;
            goto label_107718;
        }
    }
    ctx->pc = 0x1076DCu;
label_1076dc:
    // 0x1076dc: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
label_1076e0:
    if (ctx->pc == 0x1076E0u) {
        ctx->pc = 0x1076E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076DCu;
        // 0x1076e0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076E4u;
        goto label_1076e4;
    }
    ctx->pc = 0x1076DCu;
    {
        const bool branch_taken_0x1076dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076dc) {
            ctx->pc = 0x1076E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1076DCu;
            // 0x1076e0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1076F8u;
            goto label_1076f8;
        }
    }
    ctx->pc = 0x1076E4u;
label_1076e4:
    // 0x1076e4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1076e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1076e8:
    // 0x1076e8: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x1076e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
label_1076ec:
    // 0x1076ec: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1076f0:
    if (ctx->pc == 0x1076F0u) {
        ctx->pc = 0x1076F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076ECu;
        // 0x1076f0: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076F4u;
        goto label_1076f4;
    }
    ctx->pc = 0x1076ECu;
    {
        const bool branch_taken_0x1076ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076ECu;
        // 0x1076f0: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076ec) {
            ctx->pc = 0x1077E8u;
            goto label_1077e8;
        }
    }
    ctx->pc = 0x1076F4u;
label_1076f4:
    // 0x1076f4: 0x0  nop
    ctx->pc = 0x1076f4u;
    // NOP
label_1076f8:
    // 0x1076f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1076f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1076fc:
    // 0x1076fc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_107700:
    // 0x107700: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107704:
    // 0x107704: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107708:
    // 0x107708: 0x60f809  jalr        $v1
label_10770c:
    if (ctx->pc == 0x10770Cu) {
        ctx->pc = 0x10770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107708u;
        // 0x10770c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107710u;
        goto label_107710;
    }
    ctx->pc = 0x107708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107710u);
        ctx->pc = 0x10770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107708u;
        // 0x10770c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107708u, 0x107710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107710u;
label_107710:
    // 0x107710: 0x10000036  b           . + 4 + (0x36 << 2)
label_107714:
    if (ctx->pc == 0x107714u) {
        ctx->pc = 0x107714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107710u;
        // 0x107714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107718u;
        goto label_107718;
    }
    ctx->pc = 0x107710u;
    {
        const bool branch_taken_0x107710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107710u;
        // 0x107714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107710) {
            ctx->pc = 0x1077ECu;
            goto label_1077ec;
        }
    }
    ctx->pc = 0x107718u;
label_107718:
    // 0x107718: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_10771c:
    if (ctx->pc == 0x10771Cu) {
        ctx->pc = 0x10771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107718u;
        // 0x10771c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107720u;
        goto label_107720;
    }
    ctx->pc = 0x107718u;
    {
        const bool branch_taken_0x107718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x107718) {
            ctx->pc = 0x10771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107718u;
            // 0x10771c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107730u;
            goto label_107730;
        }
    }
    ctx->pc = 0x107720u;
label_107720:
    // 0x107720: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x107720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_107724:
    // 0x107724: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x107724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_107728:
    // 0x107728: 0x10000007  b           . + 4 + (0x7 << 2)
label_10772c:
    if (ctx->pc == 0x10772Cu) {
        ctx->pc = 0x10772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107728u;
        // 0x10772c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107730u;
        goto label_107730;
    }
    ctx->pc = 0x107728u;
    {
        const bool branch_taken_0x107728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107728u;
        // 0x10772c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107728) {
            ctx->pc = 0x107748u;
            goto label_107748;
        }
    }
    ctx->pc = 0x107730u;
label_107730:
    // 0x107730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107734:
    // 0x107734: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x107734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_107738:
    // 0x107738: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10773c:
    // 0x10773c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107740:
    // 0x107740: 0x60f809  jalr        $v1
label_107744:
    if (ctx->pc == 0x107744u) {
        ctx->pc = 0x107744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107740u;
        // 0x107744: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107748u;
        goto label_107748;
    }
    ctx->pc = 0x107740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107748u);
        ctx->pc = 0x107744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107740u;
        // 0x107744: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107740u, 0x107748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107748u;
label_107748:
    // 0x107748: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x107748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_10774c:
    // 0x10774c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_107750:
    // 0x107750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107754:
    // 0x107754: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
label_107758:
    if (ctx->pc == 0x107758u) {
        ctx->pc = 0x107758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107754u;
        // 0x107758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10775Cu;
        goto label_10775c;
    }
    ctx->pc = 0x107754u;
    {
        const bool branch_taken_0x107754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x107754) {
            ctx->pc = 0x107758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107754u;
            // 0x107758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1077ECu;
            goto label_1077ec;
        }
    }
    ctx->pc = 0x10775Cu;
label_10775c:
    // 0x10775c: 0xc06a26e  jal         func_1A89B8
label_107760:
    if (ctx->pc == 0x107760u) {
        ctx->pc = 0x107760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10775Cu;
        // 0x107760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107764u;
        goto label_107764;
    }
    ctx->pc = 0x10775Cu;
    SET_GPR_U32(ctx, 31, 0x107764u);
    ctx->pc = 0x107760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10775Cu;
    // 0x107760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10775Cu, 0x107764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107764u;
label_107764:
    // 0x107764: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_107768:
    if (ctx->pc == 0x107768u) {
        ctx->pc = 0x107768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107764u;
        // 0x107768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10776Cu;
        goto label_10776c;
    }
    ctx->pc = 0x107764u;
    {
        const bool branch_taken_0x107764 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x107768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107764u;
        // 0x107768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107764) {
            ctx->pc = 0x107778u;
            goto label_107778;
        }
    }
    ctx->pc = 0x10776Cu;
label_10776c:
    // 0x10776c: 0x10000008  b           . + 4 + (0x8 << 2)
label_107770:
    if (ctx->pc == 0x107770u) {
        ctx->pc = 0x107770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10776Cu;
        // 0x107770: 0xa2250007  sb          $a1, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107774u;
        goto label_107774;
    }
    ctx->pc = 0x10776Cu;
    {
        const bool branch_taken_0x10776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10776Cu;
        // 0x107770: 0xa2250007  sb          $a1, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10776c) {
            ctx->pc = 0x107790u;
            goto label_107790;
        }
    }
    ctx->pc = 0x107774u;
label_107774:
    // 0x107774: 0x0  nop
    ctx->pc = 0x107774u;
    // NOP
label_107778:
    // 0x107778: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x107778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10777c:
    // 0x10777c: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x10777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_107780:
    // 0x107780: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107784:
    // 0x107784: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107788:
    // 0x107788: 0x60f809  jalr        $v1
label_10778c:
    if (ctx->pc == 0x10778Cu) {
        ctx->pc = 0x10778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107788u;
        // 0x10778c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107790u;
        goto label_107790;
    }
    ctx->pc = 0x107788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107790u);
        ctx->pc = 0x10778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107788u;
        // 0x10778c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107788u, 0x107790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107790u;
label_107790:
    // 0x107790: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x107790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_107794:
    // 0x107794: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_107798:
    // 0x107798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10779c:
    // 0x10779c: 0x50640013  beql        $v1, $a0, . + 4 + (0x13 << 2)
label_1077a0:
    if (ctx->pc == 0x1077A0u) {
        ctx->pc = 0x1077A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10779Cu;
        // 0x1077a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077A4u;
        goto label_1077a4;
    }
    ctx->pc = 0x10779Cu;
    {
        const bool branch_taken_0x10779c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10779c) {
            ctx->pc = 0x1077A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10779Cu;
            // 0x1077a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1077ECu;
            goto label_1077ec;
        }
    }
    ctx->pc = 0x1077A4u;
label_1077a4:
    // 0x1077a4: 0xc06a26e  jal         func_1A89B8
label_1077a8:
    if (ctx->pc == 0x1077A8u) {
        ctx->pc = 0x1077A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A4u;
        // 0x1077a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077ACu;
        goto label_1077ac;
    }
    ctx->pc = 0x1077A4u;
    SET_GPR_U32(ctx, 31, 0x1077ACu);
    ctx->pc = 0x1077A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077A4u;
    // 0x1077a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1077A4u, 0x1077ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077ACu;
label_1077ac:
    // 0x1077ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_1077b0:
    if (ctx->pc == 0x1077B0u) {
        ctx->pc = 0x1077B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077ACu;
        // 0x1077b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077B4u;
        goto label_1077b4;
    }
    ctx->pc = 0x1077ACu;
    {
        const bool branch_taken_0x1077ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077ACu;
        // 0x1077b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077ac) {
            ctx->pc = 0x1077D0u;
            goto label_1077d0;
        }
    }
    ctx->pc = 0x1077B4u;
label_1077b4:
    // 0x1077b4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1077b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_1077b8:
    // 0x1077b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1077b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1077bc:
    // 0x1077bc: 0x9063bfc0  lbu         $v1, -0x4040($v1)
    ctx->pc = 0x1077bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950848)));
label_1077c0:
    // 0x1077c0: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1077c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_1077c4:
    // 0x1077c4: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x1077c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_1077c8:
    // 0x1077c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1077cc:
    if (ctx->pc == 0x1077CCu) {
        ctx->pc = 0x1077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077C8u;
        // 0x1077cc: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077D0u;
        goto label_1077d0;
    }
    ctx->pc = 0x1077C8u;
    {
        const bool branch_taken_0x1077c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077C8u;
        // 0x1077cc: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077c8) {
            ctx->pc = 0x1077E8u;
            goto label_1077e8;
        }
    }
    ctx->pc = 0x1077D0u;
label_1077d0:
    // 0x1077d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1077d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1077d4:
    // 0x1077d4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1077d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1077d8:
    // 0x1077d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1077d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1077dc:
    // 0x1077dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1077dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1077e0:
    // 0x1077e0: 0x60f809  jalr        $v1
label_1077e4:
    if (ctx->pc == 0x1077E4u) {
        ctx->pc = 0x1077E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E0u;
        // 0x1077e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077E8u;
        goto label_1077e8;
    }
    ctx->pc = 0x1077E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1077E8u);
        ctx->pc = 0x1077E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E0u;
        // 0x1077e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1077E0u, 0x1077E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1077E8u;
label_1077e8:
    // 0x1077e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1077e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1077ec:
    // 0x1077ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1077ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1077f0:
    // 0x1077f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1077f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1077f4:
    // 0x1077f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1077f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1077f8:
    // 0x1077f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1077f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1077fc:
    // 0x1077fc: 0x3e00008  jr          $ra
label_107800:
    if (ctx->pc == 0x107800u) {
        ctx->pc = 0x107800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077FCu;
        // 0x107800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107804u;
        goto label_fallthrough_0x1077fc;
    }
    ctx->pc = 0x1077FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077FCu;
        // 0x107800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1077FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1077fc:
    ctx->pc = 0x107804u;
}
