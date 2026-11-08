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

// Function: Cmd_ACTOR_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x136950 - 0x136a9c
void Cmd_ACTOR_PARTS_Entry__FP15BsSCDEntControl_0x136950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_PARTS_Entry__FP15BsSCDEntControl_0x136950");
#endif

    switch (ctx->pc) {
        case 0x136950u: goto label_136950;
        case 0x136954u: goto label_136954;
        case 0x136958u: goto label_136958;
        case 0x13695cu: goto label_13695c;
        case 0x136960u: goto label_136960;
        case 0x136964u: goto label_136964;
        case 0x136968u: goto label_136968;
        case 0x13696cu: goto label_13696c;
        case 0x136970u: goto label_136970;
        case 0x136974u: goto label_136974;
        case 0x136978u: goto label_136978;
        case 0x13697cu: goto label_13697c;
        case 0x136980u: goto label_136980;
        case 0x136984u: goto label_136984;
        case 0x136988u: goto label_136988;
        case 0x13698cu: goto label_13698c;
        case 0x136990u: goto label_136990;
        case 0x136994u: goto label_136994;
        case 0x136998u: goto label_136998;
        case 0x13699cu: goto label_13699c;
        case 0x1369a0u: goto label_1369a0;
        case 0x1369a4u: goto label_1369a4;
        case 0x1369a8u: goto label_1369a8;
        case 0x1369acu: goto label_1369ac;
        case 0x1369b0u: goto label_1369b0;
        case 0x1369b4u: goto label_1369b4;
        case 0x1369b8u: goto label_1369b8;
        case 0x1369bcu: goto label_1369bc;
        case 0x1369c0u: goto label_1369c0;
        case 0x1369c4u: goto label_1369c4;
        case 0x1369c8u: goto label_1369c8;
        case 0x1369ccu: goto label_1369cc;
        case 0x1369d0u: goto label_1369d0;
        case 0x1369d4u: goto label_1369d4;
        case 0x1369d8u: goto label_1369d8;
        case 0x1369dcu: goto label_1369dc;
        case 0x1369e0u: goto label_1369e0;
        case 0x1369e4u: goto label_1369e4;
        case 0x1369e8u: goto label_1369e8;
        case 0x1369ecu: goto label_1369ec;
        case 0x1369f0u: goto label_1369f0;
        case 0x1369f4u: goto label_1369f4;
        case 0x1369f8u: goto label_1369f8;
        case 0x1369fcu: goto label_1369fc;
        case 0x136a00u: goto label_136a00;
        case 0x136a04u: goto label_136a04;
        case 0x136a08u: goto label_136a08;
        case 0x136a0cu: goto label_136a0c;
        case 0x136a10u: goto label_136a10;
        case 0x136a14u: goto label_136a14;
        case 0x136a18u: goto label_136a18;
        case 0x136a1cu: goto label_136a1c;
        case 0x136a20u: goto label_136a20;
        case 0x136a24u: goto label_136a24;
        case 0x136a28u: goto label_136a28;
        case 0x136a2cu: goto label_136a2c;
        case 0x136a30u: goto label_136a30;
        case 0x136a34u: goto label_136a34;
        case 0x136a38u: goto label_136a38;
        case 0x136a3cu: goto label_136a3c;
        case 0x136a40u: goto label_136a40;
        case 0x136a44u: goto label_136a44;
        case 0x136a48u: goto label_136a48;
        case 0x136a4cu: goto label_136a4c;
        case 0x136a50u: goto label_136a50;
        case 0x136a54u: goto label_136a54;
        case 0x136a58u: goto label_136a58;
        case 0x136a5cu: goto label_136a5c;
        case 0x136a60u: goto label_136a60;
        case 0x136a64u: goto label_136a64;
        case 0x136a68u: goto label_136a68;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a70u: goto label_136a70;
        case 0x136a74u: goto label_136a74;
        case 0x136a78u: goto label_136a78;
        case 0x136a7cu: goto label_136a7c;
        case 0x136a80u: goto label_136a80;
        case 0x136a84u: goto label_136a84;
        case 0x136a88u: goto label_136a88;
        case 0x136a8cu: goto label_136a8c;
        case 0x136a90u: goto label_136a90;
        case 0x136a94u: goto label_136a94;
        case 0x136a98u: goto label_136a98;
        default: break;
    }

    ctx->pc = 0x136950u;

label_136950:
    // 0x136950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_136954:
    // 0x136954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_136958:
    // 0x136958: 0x3c100020  lui         $s0, 0x20
    ctx->pc = 0x136958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32 << 16));
label_13695c:
    // 0x13695c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_136960:
    // 0x136960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136964:
    // 0x136964: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_136968:
    // 0x136968: 0x2610a430  addiu       $s0, $s0, -0x5BD0
    ctx->pc = 0x136968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943792));
label_13696c:
    // 0x13696c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_136970:
    // 0x136970: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_136974:
    // 0x136974: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_136978:
    // 0x136978: 0x8e031400  lw          $v1, 0x1400($s0)
    ctx->pc = 0x136978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
label_13697c:
    // 0x13697c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x13697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_136980:
    // 0x136980: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x136980u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_136984:
    // 0x136984: 0xc06a26e  jal         func_1A89B8
label_136988:
    if (ctx->pc == 0x136988u) {
        ctx->pc = 0x136988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136984u;
        // 0x136988: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13698Cu;
        goto label_13698c;
    }
    ctx->pc = 0x136984u;
    SET_GPR_U32(ctx, 31, 0x13698Cu);
    ctx->pc = 0x136988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136984u;
    // 0x136988: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136984u, 0x13698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13698Cu;
label_13698c:
    // 0x13698c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13698cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136990:
    // 0x136990: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_136994:
    // 0x136994: 0x8e031400  lw          $v1, 0x1400($s0)
    ctx->pc = 0x136994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
label_136998:
    // 0x136998: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x136998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13699c:
    // 0x13699c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_1369a0:
    if (ctx->pc == 0x1369A0u) {
        ctx->pc = 0x1369A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13699Cu;
        // 0x1369a0: 0x8c700044  lw          $s0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369A4u;
        goto label_1369a4;
    }
    ctx->pc = 0x13699Cu;
    {
        const bool branch_taken_0x13699c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1369A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13699Cu;
        // 0x1369a0: 0x8c700044  lw          $s0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13699c) {
            ctx->pc = 0x1369C0u;
            goto label_1369c0;
        }
    }
    ctx->pc = 0x1369A4u;
label_1369a4:
    // 0x1369a4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1369a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1369a8:
    // 0x1369a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1369a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1369ac:
    // 0x1369ac: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1369b0:
    if (ctx->pc == 0x1369B0u) {
        ctx->pc = 0x1369B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369ACu;
        // 0x1369b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369B4u;
        goto label_1369b4;
    }
    ctx->pc = 0x1369ACu;
    {
        const bool branch_taken_0x1369ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1369ac) {
            ctx->pc = 0x1369B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1369ACu;
            // 0x1369b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1369C0u;
            goto label_1369c0;
        }
    }
    ctx->pc = 0x1369B4u;
label_1369b4:
    // 0x1369b4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1369b8:
    if (ctx->pc == 0x1369B8u) {
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B4u;
        // 0x1369b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369BCu;
        goto label_1369bc;
    }
    ctx->pc = 0x1369B4u;
    {
        const bool branch_taken_0x1369b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B4u;
        // 0x1369b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369b4) {
            ctx->pc = 0x1369E4u;
            goto label_1369e4;
        }
    }
    ctx->pc = 0x1369BCu;
label_1369bc:
    // 0x1369bc: 0x0  nop
    ctx->pc = 0x1369bcu;
    // NOP
label_1369c0:
    // 0x1369c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1369c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1369c4:
    // 0x1369c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1369c8:
    if (ctx->pc == 0x1369C8u) {
        ctx->pc = 0x1369C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369C4u;
        // 0x1369c8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369CCu;
        goto label_1369cc;
    }
    ctx->pc = 0x1369C4u;
    {
        const bool branch_taken_0x1369c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1369c4) {
            ctx->pc = 0x1369C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1369C4u;
            // 0x1369c8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1369E4u;
            goto label_1369e4;
        }
    }
    ctx->pc = 0x1369CCu;
label_1369cc:
    // 0x1369cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1369ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1369d0:
    // 0x1369d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1369d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1369d4:
    // 0x1369d4: 0xc04110c  jal         func_104430
label_1369d8:
    if (ctx->pc == 0x1369D8u) {
        ctx->pc = 0x1369D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369D4u;
        // 0x1369d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369DCu;
        goto label_1369dc;
    }
    ctx->pc = 0x1369D4u;
    SET_GPR_U32(ctx, 31, 0x1369DCu);
    ctx->pc = 0x1369D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369D4u;
    // 0x1369d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1369D4u, 0x1369DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369DCu;
label_1369dc:
    // 0x1369dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1369dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1369e0:
    // 0x1369e0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1369e4:
    // 0x1369e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1369e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1369e8:
    // 0x1369e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1369e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1369ec:
    // 0x1369ec: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
label_1369f0:
    if (ctx->pc == 0x1369F0u) {
        ctx->pc = 0x1369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369ECu;
        // 0x1369f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369F4u;
        goto label_1369f4;
    }
    ctx->pc = 0x1369ECu;
    {
        const bool branch_taken_0x1369ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369ECu;
        // 0x1369f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369ec) {
            ctx->pc = 0x136A70u;
            goto label_136a70;
        }
    }
    ctx->pc = 0x1369F4u;
label_1369f4:
    // 0x1369f4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1369f8:
    // 0x1369f8: 0x32910fff  andi        $s1, $s4, 0xFFF
    ctx->pc = 0x1369f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4095);
label_1369fc:
    // 0x1369fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1369fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_136a00:
    // 0x136a00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_136a04:
    if (ctx->pc == 0x136A04u) {
        ctx->pc = 0x136A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A00u;
        // 0x136a04: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A08u;
        goto label_136a08;
    }
    ctx->pc = 0x136A00u;
    {
        const bool branch_taken_0x136a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a00) {
            ctx->pc = 0x136A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A00u;
            // 0x136a04: 0x8e43001c  lw          $v1, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136A20u;
            goto label_136a20;
        }
    }
    ctx->pc = 0x136A08u;
label_136a08:
    // 0x136a08: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x136a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_136a0c:
    // 0x136a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136a10:
    // 0x136a10: 0x24a56780  addiu       $a1, $a1, 0x6780
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26496));
label_136a14:
    // 0x136a14: 0xc068186  jal         func_1A0618
label_136a18:
    if (ctx->pc == 0x136A18u) {
        ctx->pc = 0x136A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A14u;
        // 0x136a18: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A1Cu;
        goto label_136a1c;
    }
    ctx->pc = 0x136A14u;
    SET_GPR_U32(ctx, 31, 0x136A1Cu);
    ctx->pc = 0x136A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A14u;
    // 0x136a18: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x136A14u, 0x136A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A1Cu;
label_136a1c:
    // 0x136a1c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x136a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_136a20:
    // 0x136a20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_136a24:
    // 0x136a24: 0xae120144  sw          $s2, 0x144($s0)
    ctx->pc = 0x136a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 18));
label_136a28:
    // 0x136a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136a2c:
    // 0x136a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136a30:
    // 0x136a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a34:
    // 0x136a34: 0xc0684ee  jal         func_1A13B8
label_136a38:
    if (ctx->pc == 0x136A38u) {
        ctx->pc = 0x136A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A34u;
        // 0x136a38: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A3Cu;
        goto label_136a3c;
    }
    ctx->pc = 0x136A34u;
    SET_GPR_U32(ctx, 31, 0x136A3Cu);
    ctx->pc = 0x136A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A34u;
    // 0x136a38: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13B8u, 0x136A34u, 0x136A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A3Cu;
label_136a3c:
    // 0x136a3c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_136a40:
    if (ctx->pc == 0x136A40u) {
        ctx->pc = 0x136A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A3Cu;
        // 0x136a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A44u;
        goto label_136a44;
    }
    ctx->pc = 0x136A3Cu;
    {
        const bool branch_taken_0x136a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a3c) {
            ctx->pc = 0x136A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136A3Cu;
            // 0x136a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136A80u;
            goto label_136a80;
        }
    }
    ctx->pc = 0x136A44u;
label_136a44:
    // 0x136a44: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x136a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_136a48:
    // 0x136a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a4c:
    // 0x136a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136a50:
    // 0x136a50: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136a54:
    // 0x136a54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136a58:
    // 0x136a58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x136a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136a5c:
    // 0x136a5c: 0x60f809  jalr        $v1
label_136a60:
    if (ctx->pc == 0x136A60u) {
        ctx->pc = 0x136A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A5Cu;
        // 0x136a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A64u;
        goto label_136a64;
    }
    ctx->pc = 0x136A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136A64u);
        ctx->pc = 0x136A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A5Cu;
        // 0x136a60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A5Cu, 0x136A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136A64u;
label_136a64:
    // 0x136a64: 0x10000006  b           . + 4 + (0x6 << 2)
label_136a68:
    if (ctx->pc == 0x136A68u) {
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A6Cu;
        goto label_136a6c;
    }
    ctx->pc = 0x136A64u;
    {
        const bool branch_taken_0x136a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a64) {
            ctx->pc = 0x136A80u;
            goto label_136a80;
        }
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0x0  nop
    ctx->pc = 0x136a6cu;
    // NOP
label_136a70:
    // 0x136a70: 0x36851000  ori         $a1, $s4, 0x1000
    ctx->pc = 0x136a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4096);
label_136a74:
    // 0x136a74: 0xc040ce8  jal         func_1033A0
label_136a78:
    if (ctx->pc == 0x136A78u) {
        ctx->pc = 0x136A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A74u;
        // 0x136a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A7Cu;
        goto label_136a7c;
    }
    ctx->pc = 0x136A74u;
    SET_GPR_U32(ctx, 31, 0x136A7Cu);
    ctx->pc = 0x136A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A74u;
    // 0x136a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x136A74u, 0x136A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A7Cu;
label_136a7c:
    // 0x136a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136a80:
    // 0x136a80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_136a84:
    // 0x136a84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136a88:
    // 0x136a88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_136a8c:
    // 0x136a8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x136a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136a90:
    // 0x136a90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x136a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_136a94:
    // 0x136a94: 0x3e00008  jr          $ra
label_136a98:
    if (ctx->pc == 0x136A98u) {
        ctx->pc = 0x136A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A94u;
        // 0x136a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A9Cu;
        goto label_fallthrough_0x136a94;
    }
    ctx->pc = 0x136A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A94u;
        // 0x136a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136a94:
    ctx->pc = 0x136A9Cu;
}
