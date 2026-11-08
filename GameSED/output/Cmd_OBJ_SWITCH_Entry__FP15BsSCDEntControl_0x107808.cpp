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

// Function: Cmd_OBJ_SWITCH_Entry__FP15BsSCDEntControl
// Address: 0x107808 - 0x107b4c
void Cmd_OBJ_SWITCH_Entry__FP15BsSCDEntControl_0x107808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_SWITCH_Entry__FP15BsSCDEntControl_0x107808");
#endif

    switch (ctx->pc) {
        case 0x107808u: goto label_107808;
        case 0x10780cu: goto label_10780c;
        case 0x107810u: goto label_107810;
        case 0x107814u: goto label_107814;
        case 0x107818u: goto label_107818;
        case 0x10781cu: goto label_10781c;
        case 0x107820u: goto label_107820;
        case 0x107824u: goto label_107824;
        case 0x107828u: goto label_107828;
        case 0x10782cu: goto label_10782c;
        case 0x107830u: goto label_107830;
        case 0x107834u: goto label_107834;
        case 0x107838u: goto label_107838;
        case 0x10783cu: goto label_10783c;
        case 0x107840u: goto label_107840;
        case 0x107844u: goto label_107844;
        case 0x107848u: goto label_107848;
        case 0x10784cu: goto label_10784c;
        case 0x107850u: goto label_107850;
        case 0x107854u: goto label_107854;
        case 0x107858u: goto label_107858;
        case 0x10785cu: goto label_10785c;
        case 0x107860u: goto label_107860;
        case 0x107864u: goto label_107864;
        case 0x107868u: goto label_107868;
        case 0x10786cu: goto label_10786c;
        case 0x107870u: goto label_107870;
        case 0x107874u: goto label_107874;
        case 0x107878u: goto label_107878;
        case 0x10787cu: goto label_10787c;
        case 0x107880u: goto label_107880;
        case 0x107884u: goto label_107884;
        case 0x107888u: goto label_107888;
        case 0x10788cu: goto label_10788c;
        case 0x107890u: goto label_107890;
        case 0x107894u: goto label_107894;
        case 0x107898u: goto label_107898;
        case 0x10789cu: goto label_10789c;
        case 0x1078a0u: goto label_1078a0;
        case 0x1078a4u: goto label_1078a4;
        case 0x1078a8u: goto label_1078a8;
        case 0x1078acu: goto label_1078ac;
        case 0x1078b0u: goto label_1078b0;
        case 0x1078b4u: goto label_1078b4;
        case 0x1078b8u: goto label_1078b8;
        case 0x1078bcu: goto label_1078bc;
        case 0x1078c0u: goto label_1078c0;
        case 0x1078c4u: goto label_1078c4;
        case 0x1078c8u: goto label_1078c8;
        case 0x1078ccu: goto label_1078cc;
        case 0x1078d0u: goto label_1078d0;
        case 0x1078d4u: goto label_1078d4;
        case 0x1078d8u: goto label_1078d8;
        case 0x1078dcu: goto label_1078dc;
        case 0x1078e0u: goto label_1078e0;
        case 0x1078e4u: goto label_1078e4;
        case 0x1078e8u: goto label_1078e8;
        case 0x1078ecu: goto label_1078ec;
        case 0x1078f0u: goto label_1078f0;
        case 0x1078f4u: goto label_1078f4;
        case 0x1078f8u: goto label_1078f8;
        case 0x1078fcu: goto label_1078fc;
        case 0x107900u: goto label_107900;
        case 0x107904u: goto label_107904;
        case 0x107908u: goto label_107908;
        case 0x10790cu: goto label_10790c;
        case 0x107910u: goto label_107910;
        case 0x107914u: goto label_107914;
        case 0x107918u: goto label_107918;
        case 0x10791cu: goto label_10791c;
        case 0x107920u: goto label_107920;
        case 0x107924u: goto label_107924;
        case 0x107928u: goto label_107928;
        case 0x10792cu: goto label_10792c;
        case 0x107930u: goto label_107930;
        case 0x107934u: goto label_107934;
        case 0x107938u: goto label_107938;
        case 0x10793cu: goto label_10793c;
        case 0x107940u: goto label_107940;
        case 0x107944u: goto label_107944;
        case 0x107948u: goto label_107948;
        case 0x10794cu: goto label_10794c;
        case 0x107950u: goto label_107950;
        case 0x107954u: goto label_107954;
        case 0x107958u: goto label_107958;
        case 0x10795cu: goto label_10795c;
        case 0x107960u: goto label_107960;
        case 0x107964u: goto label_107964;
        case 0x107968u: goto label_107968;
        case 0x10796cu: goto label_10796c;
        case 0x107970u: goto label_107970;
        case 0x107974u: goto label_107974;
        case 0x107978u: goto label_107978;
        case 0x10797cu: goto label_10797c;
        case 0x107980u: goto label_107980;
        case 0x107984u: goto label_107984;
        case 0x107988u: goto label_107988;
        case 0x10798cu: goto label_10798c;
        case 0x107990u: goto label_107990;
        case 0x107994u: goto label_107994;
        case 0x107998u: goto label_107998;
        case 0x10799cu: goto label_10799c;
        case 0x1079a0u: goto label_1079a0;
        case 0x1079a4u: goto label_1079a4;
        case 0x1079a8u: goto label_1079a8;
        case 0x1079acu: goto label_1079ac;
        case 0x1079b0u: goto label_1079b0;
        case 0x1079b4u: goto label_1079b4;
        case 0x1079b8u: goto label_1079b8;
        case 0x1079bcu: goto label_1079bc;
        case 0x1079c0u: goto label_1079c0;
        case 0x1079c4u: goto label_1079c4;
        case 0x1079c8u: goto label_1079c8;
        case 0x1079ccu: goto label_1079cc;
        case 0x1079d0u: goto label_1079d0;
        case 0x1079d4u: goto label_1079d4;
        case 0x1079d8u: goto label_1079d8;
        case 0x1079dcu: goto label_1079dc;
        case 0x1079e0u: goto label_1079e0;
        case 0x1079e4u: goto label_1079e4;
        case 0x1079e8u: goto label_1079e8;
        case 0x1079ecu: goto label_1079ec;
        case 0x1079f0u: goto label_1079f0;
        case 0x1079f4u: goto label_1079f4;
        case 0x1079f8u: goto label_1079f8;
        case 0x1079fcu: goto label_1079fc;
        case 0x107a00u: goto label_107a00;
        case 0x107a04u: goto label_107a04;
        case 0x107a08u: goto label_107a08;
        case 0x107a0cu: goto label_107a0c;
        case 0x107a10u: goto label_107a10;
        case 0x107a14u: goto label_107a14;
        case 0x107a18u: goto label_107a18;
        case 0x107a1cu: goto label_107a1c;
        case 0x107a20u: goto label_107a20;
        case 0x107a24u: goto label_107a24;
        case 0x107a28u: goto label_107a28;
        case 0x107a2cu: goto label_107a2c;
        case 0x107a30u: goto label_107a30;
        case 0x107a34u: goto label_107a34;
        case 0x107a38u: goto label_107a38;
        case 0x107a3cu: goto label_107a3c;
        case 0x107a40u: goto label_107a40;
        case 0x107a44u: goto label_107a44;
        case 0x107a48u: goto label_107a48;
        case 0x107a4cu: goto label_107a4c;
        case 0x107a50u: goto label_107a50;
        case 0x107a54u: goto label_107a54;
        case 0x107a58u: goto label_107a58;
        case 0x107a5cu: goto label_107a5c;
        case 0x107a60u: goto label_107a60;
        case 0x107a64u: goto label_107a64;
        case 0x107a68u: goto label_107a68;
        case 0x107a6cu: goto label_107a6c;
        case 0x107a70u: goto label_107a70;
        case 0x107a74u: goto label_107a74;
        case 0x107a78u: goto label_107a78;
        case 0x107a7cu: goto label_107a7c;
        case 0x107a80u: goto label_107a80;
        case 0x107a84u: goto label_107a84;
        case 0x107a88u: goto label_107a88;
        case 0x107a8cu: goto label_107a8c;
        case 0x107a90u: goto label_107a90;
        case 0x107a94u: goto label_107a94;
        case 0x107a98u: goto label_107a98;
        case 0x107a9cu: goto label_107a9c;
        case 0x107aa0u: goto label_107aa0;
        case 0x107aa4u: goto label_107aa4;
        case 0x107aa8u: goto label_107aa8;
        case 0x107aacu: goto label_107aac;
        case 0x107ab0u: goto label_107ab0;
        case 0x107ab4u: goto label_107ab4;
        case 0x107ab8u: goto label_107ab8;
        case 0x107abcu: goto label_107abc;
        case 0x107ac0u: goto label_107ac0;
        case 0x107ac4u: goto label_107ac4;
        case 0x107ac8u: goto label_107ac8;
        case 0x107accu: goto label_107acc;
        case 0x107ad0u: goto label_107ad0;
        case 0x107ad4u: goto label_107ad4;
        case 0x107ad8u: goto label_107ad8;
        case 0x107adcu: goto label_107adc;
        case 0x107ae0u: goto label_107ae0;
        case 0x107ae4u: goto label_107ae4;
        case 0x107ae8u: goto label_107ae8;
        case 0x107aecu: goto label_107aec;
        case 0x107af0u: goto label_107af0;
        case 0x107af4u: goto label_107af4;
        case 0x107af8u: goto label_107af8;
        case 0x107afcu: goto label_107afc;
        case 0x107b00u: goto label_107b00;
        case 0x107b04u: goto label_107b04;
        case 0x107b08u: goto label_107b08;
        case 0x107b0cu: goto label_107b0c;
        case 0x107b10u: goto label_107b10;
        case 0x107b14u: goto label_107b14;
        case 0x107b18u: goto label_107b18;
        case 0x107b1cu: goto label_107b1c;
        case 0x107b20u: goto label_107b20;
        case 0x107b24u: goto label_107b24;
        case 0x107b28u: goto label_107b28;
        case 0x107b2cu: goto label_107b2c;
        case 0x107b30u: goto label_107b30;
        case 0x107b34u: goto label_107b34;
        case 0x107b38u: goto label_107b38;
        case 0x107b3cu: goto label_107b3c;
        case 0x107b40u: goto label_107b40;
        case 0x107b44u: goto label_107b44;
        case 0x107b48u: goto label_107b48;
        default: break;
    }

    ctx->pc = 0x107808u;

label_107808:
    // 0x107808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10780c:
    // 0x10780c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107810:
    // 0x107810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_107814:
    // 0x107814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x107814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_107818:
    // 0x107818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10781c:
    // 0x10781c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_107820:
    // 0x107820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107824:
    // 0x107824: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x107824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_107828:
    // 0x107828: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x107828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_10782c:
    // 0x10782c: 0xc04110c  jal         func_104430
label_107830:
    if (ctx->pc == 0x107830u) {
        ctx->pc = 0x107830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10782Cu;
        // 0x107830: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107834u;
        goto label_107834;
    }
    ctx->pc = 0x10782Cu;
    SET_GPR_U32(ctx, 31, 0x107834u);
    ctx->pc = 0x107830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10782Cu;
    // 0x107830: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10782Cu, 0x107834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107834u;
label_107834:
    // 0x107834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107838:
    // 0x107838: 0xc06a26e  jal         func_1A89B8
label_10783c:
    if (ctx->pc == 0x10783Cu) {
        ctx->pc = 0x10783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107838u;
        // 0x10783c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107840u;
        goto label_107840;
    }
    ctx->pc = 0x107838u;
    SET_GPR_U32(ctx, 31, 0x107840u);
    ctx->pc = 0x10783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107838u;
    // 0x10783c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107838u, 0x107840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107840u;
label_107840:
    // 0x107840: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x107840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_107844:
    // 0x107844: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x107844u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_107848:
    // 0x107848: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_10784c:
    // 0x10784c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107850:
    // 0x107850: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
label_107854:
    if (ctx->pc == 0x107854u) {
        ctx->pc = 0x107854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107850u;
        // 0x107854: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107858u;
        goto label_107858;
    }
    ctx->pc = 0x107850u;
    {
        const bool branch_taken_0x107850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107850u;
        // 0x107854: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107850) {
            ctx->pc = 0x1078D0u;
            goto label_1078d0;
        }
    }
    ctx->pc = 0x107858u;
label_107858:
    // 0x107858: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10785c:
    // 0x10785c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_107860:
    // 0x107860: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_107864:
    if (ctx->pc == 0x107864u) {
        ctx->pc = 0x107864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107860u;
        // 0x107864: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107868u;
        goto label_107868;
    }
    ctx->pc = 0x107860u;
    {
        const bool branch_taken_0x107860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107860) {
            ctx->pc = 0x107864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107860u;
            // 0x107864: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1078ACu;
            goto label_1078ac;
        }
    }
    ctx->pc = 0x107868u;
label_107868:
    // 0x107868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10786c:
    // 0x10786c: 0x24030346  addiu       $v1, $zero, 0x346
    ctx->pc = 0x10786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
label_107870:
    // 0x107870: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x107870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_107874:
    // 0x107874: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_107878:
    if (ctx->pc == 0x107878u) {
        ctx->pc = 0x107878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107874u;
        // 0x107878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10787Cu;
        goto label_10787c;
    }
    ctx->pc = 0x107874u;
    {
        const bool branch_taken_0x107874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x107878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107874u;
        // 0x107878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107874) {
            ctx->pc = 0x1078A8u;
            goto label_1078a8;
        }
    }
    ctx->pc = 0x10787Cu;
label_10787c:
    // 0x10787c: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x10787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_107880:
    // 0x107880: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x107880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107884:
    // 0x107884: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x107884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_107888:
    // 0x107888: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_10788c:
    // 0x10788c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107890:
    // 0x107890: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107894:
    // 0x107894: 0x60f809  jalr        $v1
label_107898:
    if (ctx->pc == 0x107898u) {
        ctx->pc = 0x107898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107894u;
        // 0x107898: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10789Cu;
        goto label_10789c;
    }
    ctx->pc = 0x107894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10789Cu);
        ctx->pc = 0x107898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107894u;
        // 0x107898: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107894u, 0x10789Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10789Cu;
label_10789c:
    // 0x10789c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_1078a0:
    if (ctx->pc == 0x1078A0u) {
        ctx->pc = 0x1078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10789Cu;
        // 0x1078a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078A4u;
        goto label_1078a4;
    }
    ctx->pc = 0x10789Cu;
    {
        const bool branch_taken_0x10789c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10789Cu;
        // 0x1078a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10789c) {
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x1078A4u;
label_1078a4:
    // 0x1078a4: 0x0  nop
    ctx->pc = 0x1078a4u;
    // NOP
label_1078a8:
    // 0x1078a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1078a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1078ac:
    // 0x1078ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1078acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1078b0:
    // 0x1078b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1078b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1078b4:
    // 0x1078b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1078b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1078b8:
    // 0x1078b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1078bc:
    // 0x1078bc: 0x60f809  jalr        $v1
label_1078c0:
    if (ctx->pc == 0x1078C0u) {
        ctx->pc = 0x1078C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078BCu;
        // 0x1078c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078C4u;
        goto label_1078c4;
    }
    ctx->pc = 0x1078BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1078C4u);
        ctx->pc = 0x1078C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078BCu;
        // 0x1078c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1078BCu, 0x1078C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1078C4u;
label_1078c4:
    // 0x1078c4: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1078c8:
    if (ctx->pc == 0x1078C8u) {
        ctx->pc = 0x1078C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078C4u;
        // 0x1078c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078CCu;
        goto label_1078cc;
    }
    ctx->pc = 0x1078C4u;
    {
        const bool branch_taken_0x1078c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078C4u;
        // 0x1078c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078c4) {
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x1078CCu;
label_1078cc:
    // 0x1078cc: 0x0  nop
    ctx->pc = 0x1078ccu;
    // NOP
label_1078d0:
    // 0x1078d0: 0xc06a26e  jal         func_1A89B8
label_1078d4:
    if (ctx->pc == 0x1078D4u) {
        ctx->pc = 0x1078D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078D0u;
        // 0x1078d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078D8u;
        goto label_1078d8;
    }
    ctx->pc = 0x1078D0u;
    SET_GPR_U32(ctx, 31, 0x1078D8u);
    ctx->pc = 0x1078D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078D0u;
    // 0x1078d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1078D0u, 0x1078D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078D8u;
label_1078d8:
    // 0x1078d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1078d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1078dc:
    // 0x1078dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1078dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1078e0:
    // 0x1078e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1078e4:
    if (ctx->pc == 0x1078E4u) {
        ctx->pc = 0x1078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078E0u;
        // 0x1078e4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1078E8u;
        goto label_1078e8;
    }
    ctx->pc = 0x1078E0u;
    {
        const bool branch_taken_0x1078e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1078e0) {
            ctx->pc = 0x1078E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1078E0u;
            // 0x1078e4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107908u;
            goto label_107908;
        }
    }
    ctx->pc = 0x1078E8u;
label_1078e8:
    // 0x1078e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1078e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1078ec:
    // 0x1078ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1078ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1078f0:
    // 0x1078f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1078f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1078f4:
    // 0x1078f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1078f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1078f8:
    // 0x1078f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1078f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1078fc:
    // 0x1078fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1078fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_107900:
    // 0x107900: 0x8061906  j           func_186418
label_107904:
    if (ctx->pc == 0x107904u) {
        ctx->pc = 0x107904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107900u;
        // 0x107904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107908u;
        goto label_107908;
    }
    ctx->pc = 0x107900u;
    ctx->pc = 0x107904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107900u;
    // 0x107904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    WEntityAllSubVisibility__FP8WcEntityb_0x186418(rdram, ctx, runtime); return;
    ctx->pc = 0x107908u;
label_107908:
    // 0x107908: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x107908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10790c:
    // 0x10790c: 0x5040008a  beql        $v0, $zero, . + 4 + (0x8A << 2)
label_107910:
    if (ctx->pc == 0x107910u) {
        ctx->pc = 0x107910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10790Cu;
        // 0x107910: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107914u;
        goto label_107914;
    }
    ctx->pc = 0x10790Cu;
    {
        const bool branch_taken_0x10790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10790c) {
            ctx->pc = 0x107910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10790Cu;
            // 0x107910: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107914u;
label_107914:
    // 0x107914: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x107914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_107918:
    // 0x107918: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x107918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_10791c:
    // 0x10791c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_107920:
    // 0x107920: 0x8c633b00  lw          $v1, 0x3B00($v1)
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15104)));
label_107924:
    // 0x107924: 0x600008  jr          $v1
label_107928:
    if (ctx->pc == 0x107928u) {
        ctx->pc = 0x10792Cu;
        goto label_10792c;
    }
    ctx->pc = 0x107924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107930u: goto label_107930;
            case 0x1079A8u: goto label_1079a8;
            case 0x107A48u: goto label_107a48;
            case 0x107A70u: goto label_107a70;
            case 0x107AA0u: goto label_107aa0;
            case 0x107AD0u: goto label_107ad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10792Cu;
label_10792c:
    // 0x10792c: 0x0  nop
    ctx->pc = 0x10792cu;
    // NOP
label_107930:
    // 0x107930: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_107934:
    // 0x107934: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x107934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_107938:
    // 0x107938: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_10793c:
    if (ctx->pc == 0x10793Cu) {
        ctx->pc = 0x10793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107938u;
        // 0x10793c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107940u;
        goto label_107940;
    }
    ctx->pc = 0x107938u;
    {
        const bool branch_taken_0x107938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107938u;
        // 0x10793c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107938) {
            ctx->pc = 0x107960u;
            goto label_107960;
        }
    }
    ctx->pc = 0x107940u;
label_107940:
    // 0x107940: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107944:
    // 0x107944: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107948:
    // 0x107948: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x107948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
label_10794c:
    // 0x10794c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x10794cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_107950:
    // 0x107950: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x107950u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_107954:
    // 0x107954: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x107954u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_107958:
    // 0x107958: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_10795c:
    // 0x10795c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x10795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_107960:
    // 0x107960: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_107964:
    if (ctx->pc == 0x107964u) {
        ctx->pc = 0x107964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107960u;
        // 0x107964: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107968u;
        goto label_107968;
    }
    ctx->pc = 0x107960u;
    {
        const bool branch_taken_0x107960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107960) {
            ctx->pc = 0x107964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107960u;
            // 0x107964: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107984u;
            goto label_107984;
        }
    }
    ctx->pc = 0x107968u;
label_107968:
    // 0x107968: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_10796c:
    // 0x10796c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10796cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107970:
    // 0x107970: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x107970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
label_107974:
    // 0x107974: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x107974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_107978:
    // 0x107978: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x107978u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_10797c:
    // 0x10797c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x10797cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_107980:
    // 0x107980: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_107984:
    // 0x107984: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x107984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_107988:
    // 0x107988: 0x5462006b  bnel        $v1, $v0, . + 4 + (0x6B << 2)
label_10798c:
    if (ctx->pc == 0x10798Cu) {
        ctx->pc = 0x10798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107988u;
        // 0x10798c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107990u;
        goto label_107990;
    }
    ctx->pc = 0x107988u;
    {
        const bool branch_taken_0x107988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107988) {
            ctx->pc = 0x10798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107988u;
            // 0x10798c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107990u;
label_107990:
    // 0x107990: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107994:
    // 0x107994: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107998:
    // 0x107998: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x107998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
label_10799c:
    // 0x10799c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1079a0:
    if (ctx->pc == 0x1079A0u) {
        ctx->pc = 0x1079A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10799Cu;
        // 0x1079a0: 0x34640040  ori         $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079A4u;
        goto label_1079a4;
    }
    ctx->pc = 0x10799Cu;
    {
        const bool branch_taken_0x10799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10799Cu;
        // 0x1079a0: 0x34640040  ori         $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10799c) {
            ctx->pc = 0x107A90u;
            goto label_107a90;
        }
    }
    ctx->pc = 0x1079A4u;
label_1079a4:
    // 0x1079a4: 0x0  nop
    ctx->pc = 0x1079a4u;
    // NOP
label_1079a8:
    // 0x1079a8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1079a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1079ac:
    // 0x1079ac: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1079b0:
    // 0x1079b0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1079b4:
    if (ctx->pc == 0x1079B4u) {
        ctx->pc = 0x1079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B0u;
        // 0x1079b4: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079B8u;
        goto label_1079b8;
    }
    ctx->pc = 0x1079B0u;
    {
        const bool branch_taken_0x1079b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079B0u;
        // 0x1079b4: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079b0) {
            ctx->pc = 0x1079D8u;
            goto label_1079d8;
        }
    }
    ctx->pc = 0x1079B8u;
label_1079b8:
    // 0x1079b8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1079b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1079bc:
    // 0x1079bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1079bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1079c0:
    // 0x1079c0: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x1079c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_1079c4:
    // 0x1079c4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1079c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1079c8:
    // 0x1079c8: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x1079c8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1079cc:
    // 0x1079cc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1079ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1079d0:
    // 0x1079d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1079d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1079d4:
    // 0x1079d4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1079d8:
    // 0x1079d8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_1079dc:
    if (ctx->pc == 0x1079DCu) {
        ctx->pc = 0x1079DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079D8u;
        // 0x1079dc: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1079E0u;
        goto label_1079e0;
    }
    ctx->pc = 0x1079D8u;
    {
        const bool branch_taken_0x1079d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1079d8) {
            ctx->pc = 0x1079DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1079D8u;
            // 0x1079dc: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1079FCu;
            goto label_1079fc;
        }
    }
    ctx->pc = 0x1079E0u;
label_1079e0:
    // 0x1079e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1079e4:
    // 0x1079e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1079e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1079e8:
    // 0x1079e8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x1079e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_1079ec:
    // 0x1079ec: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1079ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1079f0:
    // 0x1079f0: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x1079f0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1079f4:
    // 0x1079f4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1079f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1079f8:
    // 0x1079f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1079f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1079fc:
    // 0x1079fc: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x1079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_107a00:
    // 0x107a00: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_107a04:
    if (ctx->pc == 0x107A04u) {
        ctx->pc = 0x107A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A00u;
        // 0x107a04: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A08u;
        goto label_107a08;
    }
    ctx->pc = 0x107A00u;
    {
        const bool branch_taken_0x107a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a00) {
            ctx->pc = 0x107A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A00u;
            // 0x107a04: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107A24u;
            goto label_107a24;
        }
    }
    ctx->pc = 0x107A08u;
label_107a08:
    // 0x107a08: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107a0c:
    // 0x107a0c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107a10:
    // 0x107a10: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x107a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_107a14:
    // 0x107a14: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x107a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_107a18:
    // 0x107a18: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x107a18u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_107a1c:
    // 0x107a1c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x107a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_107a20:
    // 0x107a20: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_107a24:
    // 0x107a24: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_107a28:
    // 0x107a28: 0x54620043  bnel        $v1, $v0, . + 4 + (0x43 << 2)
label_107a2c:
    if (ctx->pc == 0x107A2Cu) {
        ctx->pc = 0x107A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A28u;
        // 0x107a2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A30u;
        goto label_107a30;
    }
    ctx->pc = 0x107A28u;
    {
        const bool branch_taken_0x107a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a28) {
            ctx->pc = 0x107A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A28u;
            // 0x107a2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107A30u;
label_107a30:
    // 0x107a30: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107a34:
    // 0x107a34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107a38:
    // 0x107a38: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x107a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_107a3c:
    // 0x107a3c: 0x10000020  b           . + 4 + (0x20 << 2)
label_107a40:
    if (ctx->pc == 0x107A40u) {
        ctx->pc = 0x107A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A3Cu;
        // 0x107a40: 0x34640100  ori         $a0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A44u;
        goto label_107a44;
    }
    ctx->pc = 0x107A3Cu;
    {
        const bool branch_taken_0x107a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A3Cu;
        // 0x107a40: 0x34640100  ori         $a0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a3c) {
            ctx->pc = 0x107AC0u;
            goto label_107ac0;
        }
    }
    ctx->pc = 0x107A44u;
label_107a44:
    // 0x107a44: 0x0  nop
    ctx->pc = 0x107a44u;
    // NOP
label_107a48:
    // 0x107a48: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_107a4c:
    // 0x107a4c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_107a50:
    // 0x107a50: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
label_107a54:
    if (ctx->pc == 0x107A54u) {
        ctx->pc = 0x107A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A50u;
        // 0x107a54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A58u;
        goto label_107a58;
    }
    ctx->pc = 0x107A50u;
    {
        const bool branch_taken_0x107a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a50) {
            ctx->pc = 0x107A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A50u;
            // 0x107a54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107A58u;
label_107a58:
    // 0x107a58: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107a5c:
    // 0x107a5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107a60:
    // 0x107a60: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x107a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
label_107a64:
    // 0x107a64: 0x1000000a  b           . + 4 + (0xA << 2)
label_107a68:
    if (ctx->pc == 0x107A68u) {
        ctx->pc = 0x107A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A64u;
        // 0x107a68: 0x34640800  ori         $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A6Cu;
        goto label_107a6c;
    }
    ctx->pc = 0x107A64u;
    {
        const bool branch_taken_0x107a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A64u;
        // 0x107a68: 0x34640800  ori         $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a64) {
            ctx->pc = 0x107A90u;
            goto label_107a90;
        }
    }
    ctx->pc = 0x107A6Cu;
label_107a6c:
    // 0x107a6c: 0x0  nop
    ctx->pc = 0x107a6cu;
    // NOP
label_107a70:
    // 0x107a70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_107a74:
    // 0x107a74: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_107a78:
    // 0x107a78: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
label_107a7c:
    if (ctx->pc == 0x107A7Cu) {
        ctx->pc = 0x107A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A78u;
        // 0x107a7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A80u;
        goto label_107a80;
    }
    ctx->pc = 0x107A78u;
    {
        const bool branch_taken_0x107a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107a78) {
            ctx->pc = 0x107A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A78u;
            // 0x107a7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107A80u;
label_107a80:
    // 0x107a80: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107a84:
    // 0x107a84: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107a84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107a88:
    // 0x107a88: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x107a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
label_107a8c:
    // 0x107a8c: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x107a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_107a90:
    // 0x107a90: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x107a90u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_107a94:
    // 0x107a94: 0x10000027  b           . + 4 + (0x27 << 2)
label_107a98:
    if (ctx->pc == 0x107A98u) {
        ctx->pc = 0x107A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A94u;
        // 0x107a98: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107A9Cu;
        goto label_107a9c;
    }
    ctx->pc = 0x107A94u;
    {
        const bool branch_taken_0x107a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A94u;
        // 0x107a98: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a94) {
            ctx->pc = 0x107B34u;
            goto label_107b34;
        }
    }
    ctx->pc = 0x107A9Cu;
label_107a9c:
    // 0x107a9c: 0x0  nop
    ctx->pc = 0x107a9cu;
    // NOP
label_107aa0:
    // 0x107aa0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x107aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_107aa4:
    // 0x107aa4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x107aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_107aa8:
    // 0x107aa8: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
label_107aac:
    if (ctx->pc == 0x107AACu) {
        ctx->pc = 0x107AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AA8u;
        // 0x107aac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AB0u;
        goto label_107ab0;
    }
    ctx->pc = 0x107AA8u;
    {
        const bool branch_taken_0x107aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107aa8) {
            ctx->pc = 0x107AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107AA8u;
            // 0x107aac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107AB0u;
label_107ab0:
    // 0x107ab0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_107ab4:
    // 0x107ab4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x107ab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107ab8:
    // 0x107ab8: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x107ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
label_107abc:
    // 0x107abc: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x107abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_107ac0:
    // 0x107ac0: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x107ac0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_107ac4:
    // 0x107ac4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_107ac8:
    if (ctx->pc == 0x107AC8u) {
        ctx->pc = 0x107AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AC4u;
        // 0x107ac8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107ACCu;
        goto label_107acc;
    }
    ctx->pc = 0x107AC4u;
    {
        const bool branch_taken_0x107ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AC4u;
        // 0x107ac8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ac4) {
            ctx->pc = 0x107B34u;
            goto label_107b34;
        }
    }
    ctx->pc = 0x107ACCu;
label_107acc:
    // 0x107acc: 0x0  nop
    ctx->pc = 0x107accu;
    // NOP
label_107ad0:
    // 0x107ad0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x107ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107ad4:
    // 0x107ad4: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x107ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_107ad8:
    // 0x107ad8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x107ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_107adc:
    // 0x107adc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_107ae0:
    if (ctx->pc == 0x107AE0u) {
        ctx->pc = 0x107AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ADCu;
        // 0x107ae0: 0x30830fff  andi        $v1, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AE4u;
        goto label_107ae4;
    }
    ctx->pc = 0x107ADCu;
    {
        const bool branch_taken_0x107adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x107adc) {
            ctx->pc = 0x107AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107ADCu;
            // 0x107ae0: 0x30830fff  andi        $v1, $a0, 0xFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B08u;
            goto label_107b08;
        }
    }
    ctx->pc = 0x107AE4u;
label_107ae4:
    // 0x107ae4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_107ae8:
    if (ctx->pc == 0x107AE8u) {
        ctx->pc = 0x107AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE4u;
        // 0x107ae8: 0x96020200  lhu         $v0, 0x200($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AECu;
        goto label_107aec;
    }
    ctx->pc = 0x107AE4u;
    {
        const bool branch_taken_0x107ae4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE4u;
        // 0x107ae8: 0x96020200  lhu         $v0, 0x200($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ae4) {
            ctx->pc = 0x107AF8u;
            goto label_107af8;
        }
    }
    ctx->pc = 0x107AECu;
label_107aec:
    // 0x107aec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x107aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_107af0:
    // 0x107af0: 0x10000010  b           . + 4 + (0x10 << 2)
label_107af4:
    if (ctx->pc == 0x107AF4u) {
        ctx->pc = 0x107AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF0u;
        // 0x107af4: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107AF8u;
        goto label_107af8;
    }
    ctx->pc = 0x107AF0u;
    {
        const bool branch_taken_0x107af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF0u;
        // 0x107af4: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107af0) {
            ctx->pc = 0x107B34u;
            goto label_107b34;
        }
    }
    ctx->pc = 0x107AF8u;
label_107af8:
    // 0x107af8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x107af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_107afc:
    // 0x107afc: 0x1000000d  b           . + 4 + (0xD << 2)
label_107b00:
    if (ctx->pc == 0x107B00u) {
        ctx->pc = 0x107B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AFCu;
        // 0x107b00: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B04u;
        goto label_107b04;
    }
    ctx->pc = 0x107AFCu;
    {
        const bool branch_taken_0x107afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AFCu;
        // 0x107b00: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107afc) {
            ctx->pc = 0x107B34u;
            goto label_107b34;
        }
    }
    ctx->pc = 0x107B04u;
label_107b04:
    // 0x107b04: 0x0  nop
    ctx->pc = 0x107b04u;
    // NOP
label_107b08:
    // 0x107b08: 0x24020166  addiu       $v0, $zero, 0x166
    ctx->pc = 0x107b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
label_107b0c:
    // 0x107b0c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_107b10:
    if (ctx->pc == 0x107B10u) {
        ctx->pc = 0x107B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B0Cu;
        // 0x107b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B14u;
        goto label_107b14;
    }
    ctx->pc = 0x107B0Cu;
    {
        const bool branch_taken_0x107b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107b0c) {
            ctx->pc = 0x107B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107B0Cu;
            // 0x107b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B38u;
            goto label_107b38;
        }
    }
    ctx->pc = 0x107B14u;
label_107b14:
    // 0x107b14: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_107b18:
    if (ctx->pc == 0x107B18u) {
        ctx->pc = 0x107B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B14u;
        // 0x107b18: 0x8e020200  lw          $v0, 0x200($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B1Cu;
        goto label_107b1c;
    }
    ctx->pc = 0x107B14u;
    {
        const bool branch_taken_0x107b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B14u;
        // 0x107b18: 0x8e020200  lw          $v0, 0x200($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b14) {
            ctx->pc = 0x107B28u;
            goto label_107b28;
        }
    }
    ctx->pc = 0x107B1Cu;
label_107b1c:
    // 0x107b1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_107b20:
    if (ctx->pc == 0x107B20u) {
        ctx->pc = 0x107B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B1Cu;
        // 0x107b20: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B24u;
        goto label_107b24;
    }
    ctx->pc = 0x107B1Cu;
    {
        const bool branch_taken_0x107b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B1Cu;
        // 0x107b20: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b1c) {
            ctx->pc = 0x107B30u;
            goto label_107b30;
        }
    }
    ctx->pc = 0x107B24u;
label_107b24:
    // 0x107b24: 0x0  nop
    ctx->pc = 0x107b24u;
    // NOP
label_107b28:
    // 0x107b28: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x107b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_107b2c:
    // 0x107b2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x107b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_107b30:
    // 0x107b30: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x107b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_107b34:
    // 0x107b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107b38:
    // 0x107b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x107b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_107b3c:
    // 0x107b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x107b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_107b40:
    // 0x107b40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x107b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_107b44:
    // 0x107b44: 0x3e00008  jr          $ra
label_107b48:
    if (ctx->pc == 0x107B48u) {
        ctx->pc = 0x107B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B44u;
        // 0x107b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B4Cu;
        goto label_fallthrough_0x107b44;
    }
    ctx->pc = 0x107B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B44u;
        // 0x107b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107b44:
    ctx->pc = 0x107B4Cu;
}
