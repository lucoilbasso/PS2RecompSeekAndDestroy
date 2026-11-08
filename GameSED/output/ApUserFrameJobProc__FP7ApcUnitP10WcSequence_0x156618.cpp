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

// Function: ApUserFrameJobProc__FP7ApcUnitP10WcSequence
// Address: 0x156618 - 0x1567b0
void ApUserFrameJobProc__FP7ApcUnitP10WcSequence_0x156618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserFrameJobProc__FP7ApcUnitP10WcSequence_0x156618");
#endif

    switch (ctx->pc) {
        case 0x156618u: goto label_156618;
        case 0x15661cu: goto label_15661c;
        case 0x156620u: goto label_156620;
        case 0x156624u: goto label_156624;
        case 0x156628u: goto label_156628;
        case 0x15662cu: goto label_15662c;
        case 0x156630u: goto label_156630;
        case 0x156634u: goto label_156634;
        case 0x156638u: goto label_156638;
        case 0x15663cu: goto label_15663c;
        case 0x156640u: goto label_156640;
        case 0x156644u: goto label_156644;
        case 0x156648u: goto label_156648;
        case 0x15664cu: goto label_15664c;
        case 0x156650u: goto label_156650;
        case 0x156654u: goto label_156654;
        case 0x156658u: goto label_156658;
        case 0x15665cu: goto label_15665c;
        case 0x156660u: goto label_156660;
        case 0x156664u: goto label_156664;
        case 0x156668u: goto label_156668;
        case 0x15666cu: goto label_15666c;
        case 0x156670u: goto label_156670;
        case 0x156674u: goto label_156674;
        case 0x156678u: goto label_156678;
        case 0x15667cu: goto label_15667c;
        case 0x156680u: goto label_156680;
        case 0x156684u: goto label_156684;
        case 0x156688u: goto label_156688;
        case 0x15668cu: goto label_15668c;
        case 0x156690u: goto label_156690;
        case 0x156694u: goto label_156694;
        case 0x156698u: goto label_156698;
        case 0x15669cu: goto label_15669c;
        case 0x1566a0u: goto label_1566a0;
        case 0x1566a4u: goto label_1566a4;
        case 0x1566a8u: goto label_1566a8;
        case 0x1566acu: goto label_1566ac;
        case 0x1566b0u: goto label_1566b0;
        case 0x1566b4u: goto label_1566b4;
        case 0x1566b8u: goto label_1566b8;
        case 0x1566bcu: goto label_1566bc;
        case 0x1566c0u: goto label_1566c0;
        case 0x1566c4u: goto label_1566c4;
        case 0x1566c8u: goto label_1566c8;
        case 0x1566ccu: goto label_1566cc;
        case 0x1566d0u: goto label_1566d0;
        case 0x1566d4u: goto label_1566d4;
        case 0x1566d8u: goto label_1566d8;
        case 0x1566dcu: goto label_1566dc;
        case 0x1566e0u: goto label_1566e0;
        case 0x1566e4u: goto label_1566e4;
        case 0x1566e8u: goto label_1566e8;
        case 0x1566ecu: goto label_1566ec;
        case 0x1566f0u: goto label_1566f0;
        case 0x1566f4u: goto label_1566f4;
        case 0x1566f8u: goto label_1566f8;
        case 0x1566fcu: goto label_1566fc;
        case 0x156700u: goto label_156700;
        case 0x156704u: goto label_156704;
        case 0x156708u: goto label_156708;
        case 0x15670cu: goto label_15670c;
        case 0x156710u: goto label_156710;
        case 0x156714u: goto label_156714;
        case 0x156718u: goto label_156718;
        case 0x15671cu: goto label_15671c;
        case 0x156720u: goto label_156720;
        case 0x156724u: goto label_156724;
        case 0x156728u: goto label_156728;
        case 0x15672cu: goto label_15672c;
        case 0x156730u: goto label_156730;
        case 0x156734u: goto label_156734;
        case 0x156738u: goto label_156738;
        case 0x15673cu: goto label_15673c;
        case 0x156740u: goto label_156740;
        case 0x156744u: goto label_156744;
        case 0x156748u: goto label_156748;
        case 0x15674cu: goto label_15674c;
        case 0x156750u: goto label_156750;
        case 0x156754u: goto label_156754;
        case 0x156758u: goto label_156758;
        case 0x15675cu: goto label_15675c;
        case 0x156760u: goto label_156760;
        case 0x156764u: goto label_156764;
        case 0x156768u: goto label_156768;
        case 0x15676cu: goto label_15676c;
        case 0x156770u: goto label_156770;
        case 0x156774u: goto label_156774;
        case 0x156778u: goto label_156778;
        case 0x15677cu: goto label_15677c;
        case 0x156780u: goto label_156780;
        case 0x156784u: goto label_156784;
        case 0x156788u: goto label_156788;
        case 0x15678cu: goto label_15678c;
        case 0x156790u: goto label_156790;
        case 0x156794u: goto label_156794;
        case 0x156798u: goto label_156798;
        case 0x15679cu: goto label_15679c;
        case 0x1567a0u: goto label_1567a0;
        case 0x1567a4u: goto label_1567a4;
        case 0x1567a8u: goto label_1567a8;
        case 0x1567acu: goto label_1567ac;
        default: break;
    }

    ctx->pc = 0x156618u;

label_156618:
    // 0x156618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15661c:
    // 0x15661c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_156620:
    // 0x156620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_156624:
    // 0x156624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156628:
    // 0x156628: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x156628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_15662c:
    // 0x15662c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15662cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156630:
    // 0x156630: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x156630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_156634:
    // 0x156634: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x156634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_156638:
    // 0x156638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15663c:
    // 0x15663c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x15663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_156640:
    // 0x156640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_156644:
    // 0x156644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_156648:
    // 0x156648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x156648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15664c:
    // 0x15664c: 0x8e3001ac  lw          $s0, 0x1AC($s1)
    ctx->pc = 0x15664cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_156650:
    // 0x156650: 0x8c520020  lw          $s2, 0x20($v0)
    ctx->pc = 0x156650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_156654:
    // 0x156654: 0xc06a202  jal         func_1A8808
label_156658:
    if (ctx->pc == 0x156658u) {
        ctx->pc = 0x156658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156654u;
        // 0x156658: 0x8e130014  lw          $s3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15665Cu;
        goto label_15665c;
    }
    ctx->pc = 0x156654u;
    SET_GPR_U32(ctx, 31, 0x15665Cu);
    ctx->pc = 0x156658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156654u;
    // 0x156658: 0x8e130014  lw          $s3, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156654u, 0x15665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15665Cu;
label_15665c:
    // 0x15665c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_156660:
    if (ctx->pc == 0x156660u) {
        ctx->pc = 0x156664u;
        goto label_156664;
    }
    ctx->pc = 0x15665Cu;
    {
        const bool branch_taken_0x15665c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15665c) {
            ctx->pc = 0x156688u;
            goto label_156688;
        }
    }
    ctx->pc = 0x156664u;
label_156664:
    // 0x156664: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x156664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_156668:
    // 0x156668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x156668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15666c:
    // 0x15666c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_156670:
    if (ctx->pc == 0x156670u) {
        ctx->pc = 0x156670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15666Cu;
        // 0x156670: 0x240324d0  addiu       $v1, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156674u;
        goto label_156674;
    }
    ctx->pc = 0x15666Cu;
    {
        const bool branch_taken_0x15666c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15666Cu;
        // 0x156670: 0x240324d0  addiu       $v1, $zero, 0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15666c) {
            ctx->pc = 0x156688u;
            goto label_156688;
        }
    }
    ctx->pc = 0x156674u;
label_156674:
    // 0x156674: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x156674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_156678:
    // 0x156678: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x156678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15667c:
    // 0x15667c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
label_156680:
    // 0x156680: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_156684:
    // 0x156684: 0x8694d170  lh          $s4, -0x2E90($s4)
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294955376)));
label_156688:
    // 0x156688: 0x56800009  bnel        $s4, $zero, . + 4 + (0x9 << 2)
label_15668c:
    if (ctx->pc == 0x15668Cu) {
        ctx->pc = 0x15668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156688u;
        // 0x15668c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156690u;
        goto label_156690;
    }
    ctx->pc = 0x156688u;
    {
        const bool branch_taken_0x156688 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x156688) {
            ctx->pc = 0x15668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156688u;
            // 0x15668c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1566B0u;
            goto label_1566b0;
        }
    }
    ctx->pc = 0x156690u;
label_156690:
    // 0x156690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_156694:
    // 0x156694: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_156698:
    // 0x156698: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15669c:
    // 0x15669c: 0xc05dfc4  jal         func_177F10
label_1566a0:
    if (ctx->pc == 0x1566A0u) {
        ctx->pc = 0x1566A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15669Cu;
        // 0x1566a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566A4u;
        goto label_1566a4;
    }
    ctx->pc = 0x15669Cu;
    SET_GPR_U32(ctx, 31, 0x1566A4u);
    ctx->pc = 0x1566A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15669Cu;
    // 0x1566a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x15669Cu, 0x1566A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566A4u;
label_1566a4:
    // 0x1566a4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1566a8:
    if (ctx->pc == 0x1566A8u) {
        ctx->pc = 0x1566A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566A4u;
        // 0x1566a8: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566ACu;
        goto label_1566ac;
    }
    ctx->pc = 0x1566A4u;
    {
        const bool branch_taken_0x1566a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566A4u;
        // 0x1566a8: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566a4) {
            ctx->pc = 0x156764u;
            goto label_156764;
        }
    }
    ctx->pc = 0x1566ACu;
label_1566ac:
    // 0x1566ac: 0x0  nop
    ctx->pc = 0x1566acu;
    // NOP
label_1566b0:
    // 0x1566b0: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_1566b4:
    // 0x1566b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1566b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1566b8:
    // 0x1566b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1566bc:
    // 0x1566bc: 0x40f809  jalr        $v0
label_1566c0:
    if (ctx->pc == 0x1566C0u) {
        ctx->pc = 0x1566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566BCu;
        // 0x1566c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566C4u;
        goto label_1566c4;
    }
    ctx->pc = 0x1566BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1566C4u);
        ctx->pc = 0x1566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566BCu;
        // 0x1566c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1566BCu, 0x1566C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1566C4u;
label_1566c4:
    // 0x1566c4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1566c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1566c8:
    // 0x1566c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1566cc:
    if (ctx->pc == 0x1566CCu) {
        ctx->pc = 0x1566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C8u;
        // 0x1566cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566D0u;
        goto label_1566d0;
    }
    ctx->pc = 0x1566C8u;
    {
        const bool branch_taken_0x1566c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C8u;
        // 0x1566cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566c8) {
            ctx->pc = 0x1566E8u;
            goto label_1566e8;
        }
    }
    ctx->pc = 0x1566D0u;
label_1566d0:
    // 0x1566d0: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x1566d0u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1566d4:
    // 0x1566d4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_1566d8:
    // 0x1566d8: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x1566d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
label_1566dc:
    // 0x1566dc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1566e0:
    // 0x1566e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1566e4:
    // 0x1566e4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1566e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_1566e8:
    // 0x1566e8: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1566e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1566ec:
    // 0x1566ec: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1566ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1566f0:
    // 0x1566f0: 0x70003830  pmfhl.lw    $a3
    ctx->pc = 0x1566f0u;
    SET_GPR_VEC(ctx, 7, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_1566f4:
    // 0x1566f4: 0x73bfb  dsra        $a3, $a3, 15
    ctx->pc = 0x1566f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 15);
label_1566f8:
    // 0x1566f8: 0x28e300fa  slti        $v1, $a3, 0xFA
    ctx->pc = 0x1566f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)250) ? 1 : 0);
label_1566fc:
    // 0x1566fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156700:
    // 0x156700: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
label_156704:
    if (ctx->pc == 0x156704u) {
        ctx->pc = 0x156704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156700u;
        // 0x156704: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156708u;
        goto label_156708;
    }
    ctx->pc = 0x156700u;
    {
        const bool branch_taken_0x156700 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x156704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156700u;
        // 0x156704: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156700) {
            ctx->pc = 0x156714u;
            goto label_156714;
        }
    }
    ctx->pc = 0x156708u;
label_156708:
    // 0x156708: 0x71883  sra         $v1, $a3, 2
    ctx->pc = 0x156708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
label_15670c:
    // 0x15670c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_156710:
    // 0x156710: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x156710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_156714:
    // 0x156714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_156718:
    // 0x156718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15671c:
    // 0x15671c: 0xc05dfc4  jal         func_177F10
label_156720:
    if (ctx->pc == 0x156720u) {
        ctx->pc = 0x156720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15671Cu;
        // 0x156720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156724u;
        goto label_156724;
    }
    ctx->pc = 0x15671Cu;
    SET_GPR_U32(ctx, 31, 0x156724u);
    ctx->pc = 0x156720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15671Cu;
    // 0x156720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x15671Cu, 0x156724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156724u;
label_156724:
    // 0x156724: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x156724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_156728:
    // 0x156728: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x156728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_15672c:
    // 0x15672c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_156730:
    if (ctx->pc == 0x156730u) {
        ctx->pc = 0x156730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15672Cu;
        // 0x156730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156734u;
        goto label_156734;
    }
    ctx->pc = 0x15672Cu;
    {
        const bool branch_taken_0x15672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15672Cu;
        // 0x156730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15672c) {
            ctx->pc = 0x156750u;
            goto label_156750;
        }
    }
    ctx->pc = 0x156734u;
label_156734:
    // 0x156734: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_156738:
    // 0x156738: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15673c:
    // 0x15673c: 0xc05dfc4  jal         func_177F10
label_156740:
    if (ctx->pc == 0x156740u) {
        ctx->pc = 0x156740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15673Cu;
        // 0x156740: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156744u;
        goto label_156744;
    }
    ctx->pc = 0x15673Cu;
    SET_GPR_U32(ctx, 31, 0x156744u);
    ctx->pc = 0x156740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15673Cu;
    // 0x156740: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x15673Cu, 0x156744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156744u;
label_156744:
    // 0x156744: 0x10000007  b           . + 4 + (0x7 << 2)
label_156748:
    if (ctx->pc == 0x156748u) {
        ctx->pc = 0x156748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156744u;
        // 0x156748: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15674Cu;
        goto label_15674c;
    }
    ctx->pc = 0x156744u;
    {
        const bool branch_taken_0x156744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156744u;
        // 0x156748: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156744) {
            ctx->pc = 0x156764u;
            goto label_156764;
        }
    }
    ctx->pc = 0x15674Cu;
label_15674c:
    // 0x15674c: 0x0  nop
    ctx->pc = 0x15674cu;
    // NOP
label_156750:
    // 0x156750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_156754:
    // 0x156754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156758:
    // 0x156758: 0xc05dfc4  jal         func_177F10
label_15675c:
    if (ctx->pc == 0x15675Cu) {
        ctx->pc = 0x15675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156758u;
        // 0x15675c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156760u;
        goto label_156760;
    }
    ctx->pc = 0x156758u;
    SET_GPR_U32(ctx, 31, 0x156760u);
    ctx->pc = 0x15675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156758u;
    // 0x15675c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x156758u, 0x156760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156760u;
label_156760:
    // 0x156760: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_156764:
    // 0x156764: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_156768:
    // 0x156768: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x156768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15676c:
    // 0x15676c: 0x8ea4002c  lw          $a0, 0x2C($s5)
    ctx->pc = 0x15676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_156770:
    // 0x156770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_156774:
    // 0x156774: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x156774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
label_156778:
    // 0x156778: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x156778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_15677c:
    // 0x15677c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_156780:
    if (ctx->pc == 0x156780u) {
        ctx->pc = 0x156780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15677Cu;
        // 0x156780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156784u;
        goto label_156784;
    }
    ctx->pc = 0x15677Cu;
    {
        const bool branch_taken_0x15677c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15677Cu;
        // 0x156780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15677c) {
            ctx->pc = 0x156790u;
            goto label_156790;
        }
    }
    ctx->pc = 0x156784u;
label_156784:
    // 0x156784: 0xc055aa2  jal         func_156A88
label_156788:
    if (ctx->pc == 0x156788u) {
        ctx->pc = 0x156788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156784u;
        // 0x156788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15678Cu;
        goto label_15678c;
    }
    ctx->pc = 0x156784u;
    SET_GPR_U32(ctx, 31, 0x15678Cu);
    ctx->pc = 0x156788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156784u;
    // 0x156788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A88u, 0x156784u, 0x15678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15678Cu;
label_15678c:
    // 0x15678c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15678cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156790:
    // 0x156790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_156794:
    // 0x156794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156798:
    // 0x156798: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15679c:
    // 0x15679c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15679cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1567a0:
    // 0x1567a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1567a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1567a4:
    // 0x1567a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1567a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1567a8:
    // 0x1567a8: 0x3e00008  jr          $ra
label_1567ac:
    if (ctx->pc == 0x1567ACu) {
        ctx->pc = 0x1567ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567A8u;
        // 0x1567ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567B0u;
        goto label_fallthrough_0x1567a8;
    }
    ctx->pc = 0x1567A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1567ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567A8u;
        // 0x1567ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1567a8:
    ctx->pc = 0x1567B0u;
}
