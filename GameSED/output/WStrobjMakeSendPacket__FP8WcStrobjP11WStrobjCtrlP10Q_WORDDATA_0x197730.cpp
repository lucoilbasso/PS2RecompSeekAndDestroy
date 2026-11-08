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

// Function: WStrobjMakeSendPacket__FP8WcStrobjP11WStrobjCtrlP10Q_WORDDATA
// Address: 0x197730 - 0x197950
void WStrobjMakeSendPacket__FP8WcStrobjP11WStrobjCtrlP10Q_WORDDATA_0x197730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WStrobjMakeSendPacket__FP8WcStrobjP11WStrobjCtrlP10Q_WORDDATA_0x197730");
#endif

    switch (ctx->pc) {
        case 0x197770u: goto label_197770;
        case 0x19779cu: goto label_19779c;
        case 0x1977c8u: goto label_1977c8;
        case 0x1978c4u: goto label_1978c4;
        case 0x1978d0u: goto label_1978d0;
        default: break;
    }

    ctx->pc = 0x197730u;

    // 0x197730: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x197734: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x197734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x197738: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x197738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19773c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x19773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x197740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197744: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x197744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x197748: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x197748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19774c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x19774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x197750: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x197750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x197754: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x197754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x197758: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x197758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x19775c: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x19775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x197760: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x197760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x197764: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x197764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x197768: 0xc065d9e  jal         func_197678
    ctx->pc = 0x197768u;
    SET_GPR_U32(ctx, 31, 0x197770u);
    ctx->pc = 0x19776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197768u;
    // 0x19776c: 0xafb20060  sw          $s2, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197678u, 0x197768u, 0x197770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197770u;
label_197770:
    // 0x197770: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x197770u;
    {
        const bool branch_taken_0x197770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197770u;
        // 0x197774: 0x3416ffff  ori         $s6, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197770) {
            ctx->pc = 0x197914u;
            goto label_197914;
        }
    }
    ctx->pc = 0x197778u;
    // 0x197778: 0x96020150  lhu         $v0, 0x150($s0)
    ctx->pc = 0x197778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x19777c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197784: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x197784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x197788: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x197788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19778c: 0x8e710020  lw          $s1, 0x20($s3)
    ctx->pc = 0x19778cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x197790: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x197790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197794: 0xc066426  jal         func_199098
    ctx->pc = 0x197794u;
    SET_GPR_U32(ctx, 31, 0x19779Cu);
    ctx->pc = 0x197798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197794u;
    // 0x197798: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199098u, 0x197794u, 0x19779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19779Cu;
label_19779c:
    // 0x19779c: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x19779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1977a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1977a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977a4: 0x96150030  lhu         $s5, 0x30($s0)
    ctx->pc = 0x1977a4u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1977a8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1977a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1977ac: 0x8e1e0038  lw          $fp, 0x38($s0)
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1977b0: 0x12a00052  beqz        $s5, . + 4 + (0x52 << 2)
    ctx->pc = 0x1977B0u;
    {
        const bool branch_taken_0x1977b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977B0u;
        // 0x1977b4: 0x8e770028  lw          $s7, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977b0) {
            ctx->pc = 0x1978FCu;
            goto label_1978fc;
        }
    }
    ctx->pc = 0x1977B8u;
    // 0x1977b8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1977b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977bc: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1977bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1977c0: 0x139ff8  dsll        $s3, $s3, 31
    ctx->pc = 0x1977c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 31);
    // 0x1977c4: 0x0  nop
    ctx->pc = 0x1977c4u;
    // NOP
label_1977c8:
    // 0x1977c8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1977cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1977ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1977d0: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x1977d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1977d4: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x1977d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1977d8: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x1977d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x1977dc: 0x82bc2  srl         $a1, $t0, 15
    ctx->pc = 0x1977dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x1977e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1977e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1977e4: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x1977e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1977e8: 0x2e23825  or          $a3, $s7, $v0
    ctx->pc = 0x1977e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1977ec: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x1977ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x1977f0: 0x34e20010  ori         $v0, $a3, 0x10
    ctx->pc = 0x1977f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x1977f4: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1977f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1977f8: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1977fc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1977FCu;
    {
        const bool branch_taken_0x1977fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977FCu;
        // 0x197800: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977fc) {
            ctx->pc = 0x197864u;
            goto label_197864;
        }
    }
    ctx->pc = 0x197804u;
    // 0x197804: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x197808: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x197808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19780c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x197810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x197814: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x197814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x197818: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197818u;
    {
        const bool branch_taken_0x197818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x19781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197818u;
        // 0x19781c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197818) {
            ctx->pc = 0x197840u;
            goto label_197840;
        }
    }
    ctx->pc = 0x197820u;
    // 0x197820: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x197824: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x197824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x197828: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x197828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x19782c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x197830: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x197830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x197834: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197834u;
    {
        const bool branch_taken_0x197834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197834u;
        // 0x197838: 0x213fc  dsll32      $v0, $v0, 15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197834) {
            ctx->pc = 0x197858u;
            goto label_197858;
        }
    }
    ctx->pc = 0x19783Cu;
    // 0x19783c: 0x0  nop
    ctx->pc = 0x19783cu;
    // NOP
label_197840:
    // 0x197840: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x197840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x197844: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x197844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x197848: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x197848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x19784c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x19784cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x197850: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x197850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x197854: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x197854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_197858:
    // 0x197858: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19785c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x19785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x197860: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x197860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_197864:
    // 0x197864: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x197864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x197868: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x197868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19786c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19786Cu;
    {
        const bool branch_taken_0x19786c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19786Cu;
        // 0x197870: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19786c) {
            ctx->pc = 0x1978A0u;
            goto label_1978a0;
        }
    }
    ctx->pc = 0x197874u;
    // 0x197874: 0x10760009  beq         $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x197874u;
    {
        const bool branch_taken_0x197874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x197878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197874u;
        // 0x197878: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197874) {
            ctx->pc = 0x19789Cu;
            goto label_19789c;
        }
    }
    ctx->pc = 0x19787Cu;
    // 0x19787c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x19787cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197880: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x197880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x197884: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x197884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197888: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x19788c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x19788cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x197890: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x197890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197894: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x197894u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x197898: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x197898u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_19789c:
    // 0x19789c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1978a0:
    // 0x1978a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1978a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978a4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1978a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1978a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1978a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978ac: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1978acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x1978b0: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x1978b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1978b4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1978b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1978b8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1978b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1978bc: 0xc066442  jal         func_199108
    ctx->pc = 0x1978BCu;
    SET_GPR_U32(ctx, 31, 0x1978C4u);
    ctx->pc = 0x1978C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978BCu;
    // 0x1978c0: 0x9627000a  lhu         $a3, 0xA($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x1978BCu, 0x1978C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978C4u;
label_1978c4:
    // 0x1978c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1978c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1978c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1978ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1978d0:
    // 0x1978d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1978d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1978d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1978d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1978d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1978dc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1978dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1978e0: 0x0  nop
    ctx->pc = 0x1978e0u;
    // NOP
    // 0x1978e4: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1978E4u;
    {
        const bool branch_taken_0x1978e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1978E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978E4u;
        // 0x1978e8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978e4) {
            ctx->pc = 0x1978D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1978d0;
        }
    }
    ctx->pc = 0x1978ECu;
    // 0x1978ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1978ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1978f0: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x1978f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1978f4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1978F4u;
    {
        const bool branch_taken_0x1978f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978F4u;
        // 0x1978f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978f4) {
            ctx->pc = 0x1977C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1977c8;
        }
    }
    ctx->pc = 0x1978FCu;
label_1978fc:
    // 0x1978fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x197900: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x197900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x197904: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x197904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x197908: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x197908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x19790c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x19790cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x197910: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_197914:
    // 0x197914: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197918: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x197918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19791c: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x19791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x197920: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x197920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197924: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x197924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x197928: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x197928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x19792c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x19792cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x197930: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x197930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x197934: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x197934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x197938: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x197938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19793c: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x19793cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x197940: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x197940u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x197944: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x197944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x197948: 0x3e00008  jr          $ra
    ctx->pc = 0x197948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197948u;
        // 0x19794c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197950u;
}
