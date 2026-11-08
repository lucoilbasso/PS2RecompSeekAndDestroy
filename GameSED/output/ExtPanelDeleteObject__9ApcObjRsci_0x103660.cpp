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

// Function: ExtPanelDeleteObject__9ApcObjRsci
// Address: 0x103660 - 0x10374c
void ExtPanelDeleteObject__9ApcObjRsci_0x103660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelDeleteObject__9ApcObjRsci_0x103660");
#endif

    switch (ctx->pc) {
        case 0x103660u: goto label_103660;
        case 0x103664u: goto label_103664;
        case 0x103668u: goto label_103668;
        case 0x10366cu: goto label_10366c;
        case 0x103670u: goto label_103670;
        case 0x103674u: goto label_103674;
        case 0x103678u: goto label_103678;
        case 0x10367cu: goto label_10367c;
        case 0x103680u: goto label_103680;
        case 0x103684u: goto label_103684;
        case 0x103688u: goto label_103688;
        case 0x10368cu: goto label_10368c;
        case 0x103690u: goto label_103690;
        case 0x103694u: goto label_103694;
        case 0x103698u: goto label_103698;
        case 0x10369cu: goto label_10369c;
        case 0x1036a0u: goto label_1036a0;
        case 0x1036a4u: goto label_1036a4;
        case 0x1036a8u: goto label_1036a8;
        case 0x1036acu: goto label_1036ac;
        case 0x1036b0u: goto label_1036b0;
        case 0x1036b4u: goto label_1036b4;
        case 0x1036b8u: goto label_1036b8;
        case 0x1036bcu: goto label_1036bc;
        case 0x1036c0u: goto label_1036c0;
        case 0x1036c4u: goto label_1036c4;
        case 0x1036c8u: goto label_1036c8;
        case 0x1036ccu: goto label_1036cc;
        case 0x1036d0u: goto label_1036d0;
        case 0x1036d4u: goto label_1036d4;
        case 0x1036d8u: goto label_1036d8;
        case 0x1036dcu: goto label_1036dc;
        case 0x1036e0u: goto label_1036e0;
        case 0x1036e4u: goto label_1036e4;
        case 0x1036e8u: goto label_1036e8;
        case 0x1036ecu: goto label_1036ec;
        case 0x1036f0u: goto label_1036f0;
        case 0x1036f4u: goto label_1036f4;
        case 0x1036f8u: goto label_1036f8;
        case 0x1036fcu: goto label_1036fc;
        case 0x103700u: goto label_103700;
        case 0x103704u: goto label_103704;
        case 0x103708u: goto label_103708;
        case 0x10370cu: goto label_10370c;
        case 0x103710u: goto label_103710;
        case 0x103714u: goto label_103714;
        case 0x103718u: goto label_103718;
        case 0x10371cu: goto label_10371c;
        case 0x103720u: goto label_103720;
        case 0x103724u: goto label_103724;
        case 0x103728u: goto label_103728;
        case 0x10372cu: goto label_10372c;
        case 0x103730u: goto label_103730;
        case 0x103734u: goto label_103734;
        case 0x103738u: goto label_103738;
        case 0x10373cu: goto label_10373c;
        case 0x103740u: goto label_103740;
        case 0x103744u: goto label_103744;
        case 0x103748u: goto label_103748;
        default: break;
    }

    ctx->pc = 0x103660u;

label_103660:
    // 0x103660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103664:
    // 0x103664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_103668:
    // 0x103668: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10366c:
    // 0x10366c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_103670:
    // 0x103670: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_103674:
    // 0x103674: 0xc040d4a  jal         func_103528
label_103678:
    if (ctx->pc == 0x103678u) {
        ctx->pc = 0x103678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103674u;
        // 0x103678: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10367Cu;
        goto label_10367c;
    }
    ctx->pc = 0x103674u;
    SET_GPR_U32(ctx, 31, 0x10367Cu);
    ctx->pc = 0x103678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103674u;
    // 0x103678: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103528u, 0x103674u, 0x10367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10367Cu;
label_10367c:
    // 0x10367c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_103680:
    if (ctx->pc == 0x103680u) {
        ctx->pc = 0x103680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10367Cu;
        // 0x103680: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103684u;
        goto label_103684;
    }
    ctx->pc = 0x10367Cu;
    {
        const bool branch_taken_0x10367c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10367Cu;
        // 0x103680: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10367c) {
            ctx->pc = 0x103690u;
            goto label_103690;
        }
    }
    ctx->pc = 0x103684u;
label_103684:
    // 0x103684: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x103684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
label_103688:
    // 0x103688: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_10368c:
    if (ctx->pc == 0x10368Cu) {
        ctx->pc = 0x10368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103688u;
        // 0x10368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103690u;
        goto label_103690;
    }
    ctx->pc = 0x103688u;
    {
        const bool branch_taken_0x103688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103688) {
            ctx->pc = 0x10368Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103688u;
            // 0x10368c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1036B8u;
            goto label_1036b8;
        }
    }
    ctx->pc = 0x103690u;
label_103690:
    // 0x103690: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_103694:
    // 0x103694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103698:
    // 0x103698: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x103698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10369c:
    // 0x10369c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10369cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1036a0:
    // 0x1036a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1036a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1036a4:
    // 0x1036a4: 0x60f809  jalr        $v1
label_1036a8:
    if (ctx->pc == 0x1036A8u) {
        ctx->pc = 0x1036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A4u;
        // 0x1036a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036ACu;
        goto label_1036ac;
    }
    ctx->pc = 0x1036A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1036ACu);
        ctx->pc = 0x1036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A4u;
        // 0x1036a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1036A4u, 0x1036ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1036ACu;
label_1036ac:
    // 0x1036ac: 0x10000023  b           . + 4 + (0x23 << 2)
label_1036b0:
    if (ctx->pc == 0x1036B0u) {
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036B4u;
        goto label_1036b4;
    }
    ctx->pc = 0x1036ACu;
    {
        const bool branch_taken_0x1036ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036ac) {
            ctx->pc = 0x10373Cu;
            goto label_10373c;
        }
    }
    ctx->pc = 0x1036B4u;
label_1036b4:
    // 0x1036b4: 0x0  nop
    ctx->pc = 0x1036b4u;
    // NOP
label_1036b8:
    // 0x1036b8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1036b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1036bc:
    // 0x1036bc: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
label_1036c0:
    if (ctx->pc == 0x1036C0u) {
        ctx->pc = 0x1036C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036BCu;
        // 0x1036c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036C4u;
        goto label_1036c4;
    }
    ctx->pc = 0x1036BCu;
    {
        const bool branch_taken_0x1036bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1036C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036BCu;
        // 0x1036c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036bc) {
            ctx->pc = 0x1036D4u;
            goto label_1036d4;
        }
    }
    ctx->pc = 0x1036C4u;
label_1036c4:
    // 0x1036c4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1036c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1036c8:
    // 0x1036c8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1036c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1036cc:
    // 0x1036cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1036d0:
    if (ctx->pc == 0x1036D0u) {
        ctx->pc = 0x1036D4u;
        goto label_1036d4;
    }
    ctx->pc = 0x1036CCu;
    {
        const bool branch_taken_0x1036cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1036cc) {
            ctx->pc = 0x1036D8u;
            goto label_1036d8;
        }
    }
    ctx->pc = 0x1036D4u;
label_1036d4:
    // 0x1036d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1036d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1036d8:
    // 0x1036d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1036dc:
    if (ctx->pc == 0x1036DCu) {
        ctx->pc = 0x1036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036D8u;
        // 0x1036dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036E0u;
        goto label_1036e0;
    }
    ctx->pc = 0x1036D8u;
    {
        const bool branch_taken_0x1036d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036D8u;
        // 0x1036dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036d8) {
            ctx->pc = 0x103700u;
            goto label_103700;
        }
    }
    ctx->pc = 0x1036E0u;
label_1036e0:
    // 0x1036e0: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1036e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1036e4:
    // 0x1036e4: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1036e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
label_1036e8:
    // 0x1036e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1036e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1036ec:
    // 0x1036ec: 0xc0415ec  jal         func_1057B0
label_1036f0:
    if (ctx->pc == 0x1036F0u) {
        ctx->pc = 0x1036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ECu;
        // 0x1036f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036F4u;
        goto label_1036f4;
    }
    ctx->pc = 0x1036ECu;
    SET_GPR_U32(ctx, 31, 0x1036F4u);
    ctx->pc = 0x1036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1036ECu;
    // 0x1036f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1036ECu, 0x1036F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1036F4u;
label_1036f4:
    // 0x1036f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1036f8:
    if (ctx->pc == 0x1036F8u) {
        ctx->pc = 0x1036F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F4u;
        // 0x1036f8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036FCu;
        goto label_1036fc;
    }
    ctx->pc = 0x1036F4u;
    {
        const bool branch_taken_0x1036f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F4u;
        // 0x1036f8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036f4) {
            ctx->pc = 0x103714u;
            goto label_103714;
        }
    }
    ctx->pc = 0x1036FCu;
label_1036fc:
    // 0x1036fc: 0x0  nop
    ctx->pc = 0x1036fcu;
    // NOP
label_103700:
    // 0x103700: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x103700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_103704:
    // 0x103704: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x103704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_103708:
    // 0x103708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x103708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10370c:
    // 0x10370c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10370cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103710:
    // 0x103710: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x103710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_103714:
    // 0x103714: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_103718:
    if (ctx->pc == 0x103718u) {
        ctx->pc = 0x103718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103714u;
        // 0x103718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10371Cu;
        goto label_10371c;
    }
    ctx->pc = 0x103714u;
    {
        const bool branch_taken_0x103714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x103718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103714u;
        // 0x103718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103714) {
            ctx->pc = 0x103734u;
            goto label_103734;
        }
    }
    ctx->pc = 0x10371Cu;
label_10371c:
    // 0x10371c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_103720:
    // 0x103720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x103720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103724:
    // 0x103724: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x103724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_103728:
    // 0x103728: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x103728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10372c:
    // 0x10372c: 0x60f809  jalr        $v1
label_103730:
    if (ctx->pc == 0x103730u) {
        ctx->pc = 0x103730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10372Cu;
        // 0x103730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103734u;
        goto label_103734;
    }
    ctx->pc = 0x10372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103734u);
        ctx->pc = 0x103730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10372Cu;
        // 0x103730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10372Cu, 0x103734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103734u;
label_103734:
    // 0x103734: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x103734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_103738:
    // 0x103738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10373c:
    // 0x10373c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10373cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103740:
    // 0x103740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103744:
    // 0x103744: 0x3e00008  jr          $ra
label_103748:
    if (ctx->pc == 0x103748u) {
        ctx->pc = 0x103748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103744u;
        // 0x103748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10374Cu;
        goto label_fallthrough_0x103744;
    }
    ctx->pc = 0x103744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103744u;
        // 0x103748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103744:
    ctx->pc = 0x10374Cu;
}
