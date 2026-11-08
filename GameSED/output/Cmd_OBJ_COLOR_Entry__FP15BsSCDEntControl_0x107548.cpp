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

// Function: Cmd_OBJ_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x107548 - 0x10769c
void Cmd_OBJ_COLOR_Entry__FP15BsSCDEntControl_0x107548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_COLOR_Entry__FP15BsSCDEntControl_0x107548");
#endif

    switch (ctx->pc) {
        case 0x107548u: goto label_107548;
        case 0x10754cu: goto label_10754c;
        case 0x107550u: goto label_107550;
        case 0x107554u: goto label_107554;
        case 0x107558u: goto label_107558;
        case 0x10755cu: goto label_10755c;
        case 0x107560u: goto label_107560;
        case 0x107564u: goto label_107564;
        case 0x107568u: goto label_107568;
        case 0x10756cu: goto label_10756c;
        case 0x107570u: goto label_107570;
        case 0x107574u: goto label_107574;
        case 0x107578u: goto label_107578;
        case 0x10757cu: goto label_10757c;
        case 0x107580u: goto label_107580;
        case 0x107584u: goto label_107584;
        case 0x107588u: goto label_107588;
        case 0x10758cu: goto label_10758c;
        case 0x107590u: goto label_107590;
        case 0x107594u: goto label_107594;
        case 0x107598u: goto label_107598;
        case 0x10759cu: goto label_10759c;
        case 0x1075a0u: goto label_1075a0;
        case 0x1075a4u: goto label_1075a4;
        case 0x1075a8u: goto label_1075a8;
        case 0x1075acu: goto label_1075ac;
        case 0x1075b0u: goto label_1075b0;
        case 0x1075b4u: goto label_1075b4;
        case 0x1075b8u: goto label_1075b8;
        case 0x1075bcu: goto label_1075bc;
        case 0x1075c0u: goto label_1075c0;
        case 0x1075c4u: goto label_1075c4;
        case 0x1075c8u: goto label_1075c8;
        case 0x1075ccu: goto label_1075cc;
        case 0x1075d0u: goto label_1075d0;
        case 0x1075d4u: goto label_1075d4;
        case 0x1075d8u: goto label_1075d8;
        case 0x1075dcu: goto label_1075dc;
        case 0x1075e0u: goto label_1075e0;
        case 0x1075e4u: goto label_1075e4;
        case 0x1075e8u: goto label_1075e8;
        case 0x1075ecu: goto label_1075ec;
        case 0x1075f0u: goto label_1075f0;
        case 0x1075f4u: goto label_1075f4;
        case 0x1075f8u: goto label_1075f8;
        case 0x1075fcu: goto label_1075fc;
        case 0x107600u: goto label_107600;
        case 0x107604u: goto label_107604;
        case 0x107608u: goto label_107608;
        case 0x10760cu: goto label_10760c;
        case 0x107610u: goto label_107610;
        case 0x107614u: goto label_107614;
        case 0x107618u: goto label_107618;
        case 0x10761cu: goto label_10761c;
        case 0x107620u: goto label_107620;
        case 0x107624u: goto label_107624;
        case 0x107628u: goto label_107628;
        case 0x10762cu: goto label_10762c;
        case 0x107630u: goto label_107630;
        case 0x107634u: goto label_107634;
        case 0x107638u: goto label_107638;
        case 0x10763cu: goto label_10763c;
        case 0x107640u: goto label_107640;
        case 0x107644u: goto label_107644;
        case 0x107648u: goto label_107648;
        case 0x10764cu: goto label_10764c;
        case 0x107650u: goto label_107650;
        case 0x107654u: goto label_107654;
        case 0x107658u: goto label_107658;
        case 0x10765cu: goto label_10765c;
        case 0x107660u: goto label_107660;
        case 0x107664u: goto label_107664;
        case 0x107668u: goto label_107668;
        case 0x10766cu: goto label_10766c;
        case 0x107670u: goto label_107670;
        case 0x107674u: goto label_107674;
        case 0x107678u: goto label_107678;
        case 0x10767cu: goto label_10767c;
        case 0x107680u: goto label_107680;
        case 0x107684u: goto label_107684;
        case 0x107688u: goto label_107688;
        case 0x10768cu: goto label_10768c;
        case 0x107690u: goto label_107690;
        case 0x107694u: goto label_107694;
        case 0x107698u: goto label_107698;
        default: break;
    }

    ctx->pc = 0x107548u;

label_107548:
    // 0x107548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10754c:
    // 0x10754c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_107550:
    // 0x107550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_107554:
    // 0x107554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107558:
    // 0x107558: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x107558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_10755c:
    // 0x10755c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_107560:
    // 0x107560: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107564:
    // 0x107564: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_107568:
    if (ctx->pc == 0x107568u) {
        ctx->pc = 0x107568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107564u;
        // 0x107568: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10756Cu;
        goto label_10756c;
    }
    ctx->pc = 0x107564u;
    {
        const bool branch_taken_0x107564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x107564) {
            ctx->pc = 0x107568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107564u;
            // 0x107568: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1075A0u;
            goto label_1075a0;
        }
    }
    ctx->pc = 0x10756Cu;
label_10756c:
    // 0x10756c: 0xc06a26e  jal         func_1A89B8
label_107570:
    if (ctx->pc == 0x107570u) {
        ctx->pc = 0x107574u;
        goto label_107574;
    }
    ctx->pc = 0x10756Cu;
    SET_GPR_U32(ctx, 31, 0x107574u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10756Cu, 0x107574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107574u;
label_107574:
    // 0x107574: 0xc06a26e  jal         func_1A89B8
label_107578:
    if (ctx->pc == 0x107578u) {
        ctx->pc = 0x107578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107574u;
        // 0x107578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10757Cu;
        goto label_10757c;
    }
    ctx->pc = 0x107574u;
    SET_GPR_U32(ctx, 31, 0x10757Cu);
    ctx->pc = 0x107578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107574u;
    // 0x107578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107574u, 0x10757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10757Cu;
label_10757c:
    // 0x10757c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107580:
    // 0x107580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x107580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_107584:
    // 0x107584: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x107584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_107588:
    // 0x107588: 0x24a5f650  addiu       $a1, $a1, -0x9B0
    ctx->pc = 0x107588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964816));
label_10758c:
    // 0x10758c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_107590:
    // 0x107590: 0xc0416ee  jal         func_105BB8
label_107594:
    if (ctx->pc == 0x107594u) {
        ctx->pc = 0x107594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107590u;
        // 0x107594: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107598u;
        goto label_107598;
    }
    ctx->pc = 0x107590u;
    SET_GPR_U32(ctx, 31, 0x107598u);
    ctx->pc = 0x107594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107590u;
    // 0x107594: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x107590u, 0x107598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107598u;
label_107598:
    // 0x107598: 0x1000003c  b           . + 4 + (0x3C << 2)
label_10759c:
    if (ctx->pc == 0x10759Cu) {
        ctx->pc = 0x10759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107598u;
        // 0x10759c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075A0u;
        goto label_1075a0;
    }
    ctx->pc = 0x107598u;
    {
        const bool branch_taken_0x107598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107598u;
        // 0x10759c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107598) {
            ctx->pc = 0x10768Cu;
            goto label_10768c;
        }
    }
    ctx->pc = 0x1075A0u;
label_1075a0:
    // 0x1075a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1075a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1075a4:
    // 0x1075a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1075a8:
    // 0x1075a8: 0xc04110c  jal         func_104430
label_1075ac:
    if (ctx->pc == 0x1075ACu) {
        ctx->pc = 0x1075ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075A8u;
        // 0x1075ac: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075B0u;
        goto label_1075b0;
    }
    ctx->pc = 0x1075A8u;
    SET_GPR_U32(ctx, 31, 0x1075B0u);
    ctx->pc = 0x1075ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075A8u;
    // 0x1075ac: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1075A8u, 0x1075B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075B0u;
label_1075b0:
    // 0x1075b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1075b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1075b4:
    // 0x1075b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1075b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1075b8:
    // 0x1075b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1075bc:
    // 0x1075bc: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_1075c0:
    if (ctx->pc == 0x1075C0u) {
        ctx->pc = 0x1075C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075BCu;
        // 0x1075c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075C4u;
        goto label_1075c4;
    }
    ctx->pc = 0x1075BCu;
    {
        const bool branch_taken_0x1075bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1075bc) {
            ctx->pc = 0x1075C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1075BCu;
            // 0x1075c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107608u;
            goto label_107608;
        }
    }
    ctx->pc = 0x1075C4u;
label_1075c4:
    // 0x1075c4: 0xc06a26e  jal         func_1A89B8
label_1075c8:
    if (ctx->pc == 0x1075C8u) {
        ctx->pc = 0x1075C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075C4u;
        // 0x1075c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075CCu;
        goto label_1075cc;
    }
    ctx->pc = 0x1075C4u;
    SET_GPR_U32(ctx, 31, 0x1075CCu);
    ctx->pc = 0x1075C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075C4u;
    // 0x1075c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1075C4u, 0x1075CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075CCu;
label_1075cc:
    // 0x1075cc: 0xc06a26e  jal         func_1A89B8
label_1075d0:
    if (ctx->pc == 0x1075D0u) {
        ctx->pc = 0x1075D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075CCu;
        // 0x1075d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075D4u;
        goto label_1075d4;
    }
    ctx->pc = 0x1075CCu;
    SET_GPR_U32(ctx, 31, 0x1075D4u);
    ctx->pc = 0x1075D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075CCu;
    // 0x1075d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1075CCu, 0x1075D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075D4u;
label_1075d4:
    // 0x1075d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1075d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1075d8:
    // 0x1075d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1075dc:
    // 0x1075dc: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_1075e0:
    // 0x1075e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1075e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1075e4:
    // 0x1075e4: 0x24a5f650  addiu       $a1, $a1, -0x9B0
    ctx->pc = 0x1075e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964816));
label_1075e8:
    // 0x1075e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1075e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1075ec:
    // 0x1075ec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1075ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1075f0:
    // 0x1075f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1075f4:
    // 0x1075f4: 0x40f809  jalr        $v0
label_1075f8:
    if (ctx->pc == 0x1075F8u) {
        ctx->pc = 0x1075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F4u;
        // 0x1075f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075FCu;
        goto label_1075fc;
    }
    ctx->pc = 0x1075F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1075FCu);
        ctx->pc = 0x1075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F4u;
        // 0x1075f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1075F4u, 0x1075FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1075FCu;
label_1075fc:
    // 0x1075fc: 0x10000023  b           . + 4 + (0x23 << 2)
label_107600:
    if (ctx->pc == 0x107600u) {
        ctx->pc = 0x107600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075FCu;
        // 0x107600: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107604u;
        goto label_107604;
    }
    ctx->pc = 0x1075FCu;
    {
        const bool branch_taken_0x1075fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075FCu;
        // 0x107600: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075fc) {
            ctx->pc = 0x10768Cu;
            goto label_10768c;
        }
    }
    ctx->pc = 0x107604u;
label_107604:
    // 0x107604: 0x0  nop
    ctx->pc = 0x107604u;
    // NOP
label_107608:
    // 0x107608: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x107608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956592)));
label_10760c:
    // 0x10760c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10760cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_107610:
    // 0x107610: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x107610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_107614:
    // 0x107614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_107618:
    // 0x107618: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_10761c:
    if (ctx->pc == 0x10761Cu) {
        ctx->pc = 0x10761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107618u;
        // 0x10761c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107620u;
        goto label_107620;
    }
    ctx->pc = 0x107618u;
    {
        const bool branch_taken_0x107618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107618) {
            ctx->pc = 0x10761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107618u;
            // 0x10761c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107660u;
            goto label_107660;
        }
    }
    ctx->pc = 0x107620u;
label_107620:
    // 0x107620: 0xc06a26e  jal         func_1A89B8
label_107624:
    if (ctx->pc == 0x107624u) {
        ctx->pc = 0x107624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107620u;
        // 0x107624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107628u;
        goto label_107628;
    }
    ctx->pc = 0x107620u;
    SET_GPR_U32(ctx, 31, 0x107628u);
    ctx->pc = 0x107624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107620u;
    // 0x107624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107620u, 0x107628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107628u;
label_107628:
    // 0x107628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10762c:
    // 0x10762c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x10762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_107630:
    // 0x107630: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_107634:
    if (ctx->pc == 0x107634u) {
        ctx->pc = 0x107634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107630u;
        // 0x107634: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107638u;
        goto label_107638;
    }
    ctx->pc = 0x107630u;
    {
        const bool branch_taken_0x107630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107630) {
            ctx->pc = 0x107634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107630u;
            // 0x107634: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107650u;
            goto label_107650;
        }
    }
    ctx->pc = 0x107638u;
label_107638:
    // 0x107638: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x107638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_10763c:
    // 0x10763c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_107640:
    // 0x107640: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x107640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_107644:
    // 0x107644: 0x10000009  b           . + 4 + (0x9 << 2)
label_107648:
    if (ctx->pc == 0x107648u) {
        ctx->pc = 0x107648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107644u;
        // 0x107648: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10764Cu;
        goto label_10764c;
    }
    ctx->pc = 0x107644u;
    {
        const bool branch_taken_0x107644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107644u;
        // 0x107648: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107644) {
            ctx->pc = 0x10766Cu;
            goto label_10766c;
        }
    }
    ctx->pc = 0x10764Cu;
label_10764c:
    // 0x10764c: 0x0  nop
    ctx->pc = 0x10764cu;
    // NOP
label_107650:
    // 0x107650: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x107650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
label_107654:
    // 0x107654: 0x10000005  b           . + 4 + (0x5 << 2)
label_107658:
    if (ctx->pc == 0x107658u) {
        ctx->pc = 0x107658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107654u;
        // 0x107658: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10765Cu;
        goto label_10765c;
    }
    ctx->pc = 0x107654u;
    {
        const bool branch_taken_0x107654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107654u;
        // 0x107658: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107654) {
            ctx->pc = 0x10766Cu;
            goto label_10766c;
        }
    }
    ctx->pc = 0x10765Cu;
label_10765c:
    // 0x10765c: 0x0  nop
    ctx->pc = 0x10765cu;
    // NOP
label_107660:
    // 0x107660: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_107664:
    // 0x107664: 0xc0416ee  jal         func_105BB8
label_107668:
    if (ctx->pc == 0x107668u) {
        ctx->pc = 0x107668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107664u;
        // 0x107668: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10766Cu;
        goto label_10766c;
    }
    ctx->pc = 0x107664u;
    SET_GPR_U32(ctx, 31, 0x10766Cu);
    ctx->pc = 0x107668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107664u;
    // 0x107668: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x107664u, 0x10766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10766Cu;
label_10766c:
    // 0x10766c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_107670:
    // 0x107670: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_107674:
    // 0x107674: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x107674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_107678:
    // 0x107678: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10767c:
    // 0x10767c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107680:
    // 0x107680: 0x60f809  jalr        $v1
label_107684:
    if (ctx->pc == 0x107684u) {
        ctx->pc = 0x107684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107680u;
        // 0x107684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107688u;
        goto label_107688;
    }
    ctx->pc = 0x107680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107688u);
        ctx->pc = 0x107684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107680u;
        // 0x107684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107680u, 0x107688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107688u;
label_107688:
    // 0x107688: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10768c:
    // 0x10768c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10768cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_107690:
    // 0x107690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x107690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107694:
    // 0x107694: 0x3e00008  jr          $ra
label_107698:
    if (ctx->pc == 0x107698u) {
        ctx->pc = 0x107698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107694u;
        // 0x107698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10769Cu;
        goto label_fallthrough_0x107694;
    }
    ctx->pc = 0x107694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107694u;
        // 0x107698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107694:
    ctx->pc = 0x10769Cu;
}
