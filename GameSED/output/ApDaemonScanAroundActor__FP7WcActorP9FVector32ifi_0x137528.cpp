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

// Function: ApDaemonScanAroundActor__FP7WcActorP9FVector32ifi
// Address: 0x137528 - 0x137888
void ApDaemonScanAroundActor__FP7WcActorP9FVector32ifi_0x137528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanAroundActor__FP7WcActorP9FVector32ifi_0x137528");
#endif

    switch (ctx->pc) {
        case 0x1375a8u: goto label_1375a8;
        case 0x137688u: goto label_137688;
        case 0x1376b4u: goto label_1376b4;
        case 0x1376bcu: goto label_1376bc;
        case 0x1377b4u: goto label_1377b4;
        case 0x1377bcu: goto label_1377bc;
        default: break;
    }

    ctx->pc = 0x137528u;

    // 0x137528: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13752c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13752cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137530: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x137530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x137534: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x137534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137538: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x137538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x13753c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x13753cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137540: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x137540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x137544: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x137544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x137548: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x137548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x13754c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137550: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x137550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x137554: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x137554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x137558: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x137558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x13755c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x13755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x137560: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x137560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x137564: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x137564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x137568: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x137568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13756c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x13756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x137570: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x137570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x137574: 0x146400b7  bne         $v1, $a0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x137574u;
    {
        const bool branch_taken_0x137574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x137578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137574u;
        // 0x137578: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137574) {
            ctx->pc = 0x137854u;
            goto label_137854;
        }
    }
    ctx->pc = 0x13757Cu;
    // 0x13757c: 0x8fc20170  lw          $v0, 0x170($fp)
    ctx->pc = 0x13757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 368)));
    // 0x137580: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x137580u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137584: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x137584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137588: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x137588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13758c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13758cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137590: 0x12a000b0  beqz        $s5, . + 4 + (0xB0 << 2)
    ctx->pc = 0x137590u;
    {
        const bool branch_taken_0x137590 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x137594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137590u;
        // 0x137594: 0x8c760200  lw          $s6, 0x200($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137590) {
            ctx->pc = 0x137854u;
            goto label_137854;
        }
    }
    ctx->pc = 0x137598u;
    // 0x137598: 0x12c000ab  beqz        $s6, . + 4 + (0xAB << 2)
    ctx->pc = 0x137598u;
    {
        const bool branch_taken_0x137598 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137598u;
        // 0x13759c: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137598) {
            ctx->pc = 0x137848u;
            goto label_137848;
        }
    }
    ctx->pc = 0x1375A0u;
    // 0x1375a0: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x1375a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1375a4: 0x0  nop
    ctx->pc = 0x1375a4u;
    // NOP
label_1375a8:
    // 0x1375a8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1375ac: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1375ACu;
    {
        const bool branch_taken_0x1375ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375ACu;
        // 0x1375b0: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375ac) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x1375B4u;
    // 0x1375b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1375b8: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1375B8u;
    {
        const bool branch_taken_0x1375b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375B8u;
        // 0x1375bc: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375b8) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x1375C0u;
    // 0x1375c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1375c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1375c4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1375c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1375c8: 0x1044009c  beq         $v0, $a0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1375C8u;
    {
        const bool branch_taken_0x1375c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1375CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375C8u;
        // 0x1375cc: 0x30620fff  andi        $v0, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375c8) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x1375D0u;
    // 0x1375d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1375d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375d4: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x1375d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x1375d8: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x1375d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x1375dc: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1375DCu;
    {
        const bool branch_taken_0x1375dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375dc) {
            ctx->pc = 0x1375E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1375DCu;
            // 0x1375e0: 0x8e6200d4  lw          $v0, 0xD4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137614u;
            goto label_137614;
        }
    }
    ctx->pc = 0x1375E4u;
    // 0x1375e4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1375e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1375e8: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x1375e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x1375ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1375ECu;
    {
        const bool branch_taken_0x1375ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1375F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375ECu;
        // 0x1375f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375ec) {
            ctx->pc = 0x137604u;
            goto label_137604;
        }
    }
    ctx->pc = 0x1375F4u;
    // 0x1375f4: 0x8ca20184  lw          $v0, 0x184($a1)
    ctx->pc = 0x1375f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 388)));
    // 0x1375f8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1375f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1375fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1375FCu;
    {
        const bool branch_taken_0x1375fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375fc) {
            ctx->pc = 0x137608u;
            goto label_137608;
        }
    }
    ctx->pc = 0x137604u;
label_137604:
    // 0x137604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137608:
    // 0x137608: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x137608u;
    {
        const bool branch_taken_0x137608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137608) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137610u;
    // 0x137610: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x137610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_137614:
    // 0x137614: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x137614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x137618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x137618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13761c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x13761Cu;
    {
        const bool branch_taken_0x13761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13761c) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137624u;
    // 0x137624: 0x127e0085  beq         $s3, $fp, . + 4 + (0x85 << 2)
    ctx->pc = 0x137624u;
    {
        const bool branch_taken_0x137624 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x137628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137624u;
        // 0x137628: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137624) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x13762Cu;
    // 0x13762c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x137630: 0x14800037  bnez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x137630u;
    {
        const bool branch_taken_0x137630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x137634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137630u;
        // 0x137634: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137630) {
            ctx->pc = 0x137710u;
            goto label_137710;
        }
    }
    ctx->pc = 0x137638u;
    // 0x137638: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13763c: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x137640: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x137640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x137644: 0x54430033  bnel        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x137644u;
    {
        const bool branch_taken_0x137644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x137644) {
            ctx->pc = 0x137648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137644u;
            // 0x137648: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137714u;
            goto label_137714;
        }
    }
    ctx->pc = 0x13764Cu;
    // 0x13764c: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x13764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x137650: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137650u;
    {
        const bool branch_taken_0x137650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137650u;
        // 0x137654: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137650) {
            ctx->pc = 0x13766Cu;
            goto label_13766c;
        }
    }
    ctx->pc = 0x137658u;
    // 0x137658: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x137658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13765c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x13765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x137660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x137660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x137664: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x137664u;
    {
        const bool branch_taken_0x137664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137664) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x13766Cu;
label_13766c:
    // 0x13766c: 0x8e9001b0  lw          $s0, 0x1B0($s4)
    ctx->pc = 0x13766cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x137670: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
    ctx->pc = 0x137670u;
    {
        const bool branch_taken_0x137670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137670) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137678u;
    // 0x137678: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x13767c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13767cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x137680: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x137680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137684: 0x0  nop
    ctx->pc = 0x137684u;
    // NOP
label_137688:
    // 0x137688: 0xae9001c4  sw          $s0, 0x1C4($s4)
    ctx->pc = 0x137688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 16));
    // 0x13768c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x13768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x137690: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x137690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x137694: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x137694u;
    {
        const bool branch_taken_0x137694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137694u;
        // 0x137698: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137694) {
            ctx->pc = 0x1376F4u;
            goto label_1376f4;
        }
    }
    ctx->pc = 0x13769Cu;
    // 0x13769c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x13769cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1376a0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1376a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1376a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1376A4u;
    {
        const bool branch_taken_0x1376a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376a4) {
            ctx->pc = 0x1376B4u;
            goto label_1376b4;
        }
    }
    ctx->pc = 0x1376ACu;
    // 0x1376ac: 0xc061920  jal         func_186480
    ctx->pc = 0x1376ACu;
    SET_GPR_U32(ctx, 31, 0x1376B4u);
    ctx->pc = 0x1376B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376ACu;
    // 0x1376b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1376ACu, 0x1376B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376B4u;
label_1376b4:
    // 0x1376b4: 0xc061422  jal         func_185088
    ctx->pc = 0x1376B4u;
    SET_GPR_U32(ctx, 31, 0x1376BCu);
    ctx->pc = 0x1376B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376B4u;
    // 0x1376b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1376B4u, 0x1376BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376BCu;
label_1376bc:
    // 0x1376bc: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x1376bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1376c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1376c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1376c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1376c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1376c8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1376c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1376cc: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1376ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1376d0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1376d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1376d4: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x1376d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1376d8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1376d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1376dc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1376dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1376e0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1376e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1376e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1376e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1376e8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1376e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1376ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1376ECu;
    {
        const bool branch_taken_0x1376ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1376ec) {
            ctx->pc = 0x137700u;
            goto label_137700;
        }
    }
    ctx->pc = 0x1376F4u;
label_1376f4:
    // 0x1376f4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1376f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1376f8: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1376F8u;
    {
        const bool branch_taken_0x1376f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376f8) {
            ctx->pc = 0x1376FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1376F8u;
            // 0x1376fc: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137688;
        }
    }
    ctx->pc = 0x137700u;
label_137700:
    // 0x137700: 0x1600003e  bnez        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x137700u;
    {
        const bool branch_taken_0x137700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x137704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137700u;
        // 0x137704: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137700) {
            ctx->pc = 0x1377FCu;
            goto label_1377fc;
        }
    }
    ctx->pc = 0x137708u;
    // 0x137708: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x137708u;
    {
        const bool branch_taken_0x137708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137708) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137710u;
label_137710:
    // 0x137710: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x137710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_137714:
    // 0x137714: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x137714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x137718: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x137718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13771c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x13771Cu;
    {
        const bool branch_taken_0x13771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13771c) {
            ctx->pc = 0x137720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13771Cu;
            // 0x137720: 0x8c840260  lw          $a0, 0x260($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137724u;
            goto label_137724;
        }
    }
    ctx->pc = 0x137724u;
label_137724:
    // 0x137724: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x137724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x137728: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x13772c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137730: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x137730u;
    {
        const bool branch_taken_0x137730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137730u;
        // 0x137734: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137730) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137738u;
    // 0x137738: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x137738u;
    {
        const bool branch_taken_0x137738 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137738u;
        // 0x13773c: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137738) {
            ctx->pc = 0x13779Cu;
            goto label_13779c;
        }
    }
    ctx->pc = 0x137740u;
    // 0x137740: 0x1085003e  beq         $a0, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x137740u;
    {
        const bool branch_taken_0x137740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x137744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137740u;
        // 0x137744: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137740) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137748u;
    // 0x137748: 0x10460014  beq         $v0, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x137748u;
    {
        const bool branch_taken_0x137748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137748u;
        // 0x13774c: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137748) {
            ctx->pc = 0x13779Cu;
            goto label_13779c;
        }
    }
    ctx->pc = 0x137750u;
    // 0x137750: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137754: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x137754u;
    {
        const bool branch_taken_0x137754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137754) {
            ctx->pc = 0x137758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137754u;
            // 0x137758: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1377A0u;
            goto label_1377a0;
        }
    }
    ctx->pc = 0x13775Cu;
    // 0x13775c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x13775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x137760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137764: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x137764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x137768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137768u;
    {
        const bool branch_taken_0x137768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137768u;
        // 0x13776c: 0x661024  and         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137768) {
            ctx->pc = 0x137780u;
            goto label_137780;
        }
    }
    ctx->pc = 0x137770u;
    // 0x137770: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x137770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x137774: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x137774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x137778: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x137778u;
    {
        const bool branch_taken_0x137778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137778u;
        // 0x13777c: 0x661024  and         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137778) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137780u;
label_137780:
    // 0x137780: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x137780u;
    {
        const bool branch_taken_0x137780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137780) {
            ctx->pc = 0x137784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137780u;
            // 0x137784: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13779Cu;
            goto label_13779c;
        }
    }
    ctx->pc = 0x137788u;
    // 0x137788: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x137788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x13778c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x13778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x137790: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x137790u;
    {
        const bool branch_taken_0x137790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137790) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x137798u;
    // 0x137798: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x137798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_13779c:
    // 0x13779c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13779cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1377a0:
    // 0x1377a0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1377a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1377a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1377A4u;
    {
        const bool branch_taken_0x1377a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1377a4) {
            ctx->pc = 0x1377B4u;
            goto label_1377b4;
        }
    }
    ctx->pc = 0x1377ACu;
    // 0x1377ac: 0xc061920  jal         func_186480
    ctx->pc = 0x1377ACu;
    SET_GPR_U32(ctx, 31, 0x1377B4u);
    ctx->pc = 0x1377B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377ACu;
    // 0x1377b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1377ACu, 0x1377B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377B4u;
label_1377b4:
    // 0x1377b4: 0xc061422  jal         func_185088
    ctx->pc = 0x1377B4u;
    SET_GPR_U32(ctx, 31, 0x1377BCu);
    ctx->pc = 0x1377B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1377B4u;
    // 0x1377b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1377B4u, 0x1377BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1377BCu;
label_1377bc:
    // 0x1377bc: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x1377bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1377c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1377c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1377c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1377c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1377c8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1377c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1377cc: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1377ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1377d0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1377d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1377d4: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x1377d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1377d8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1377d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1377dc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1377dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1377e0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1377e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1377e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1377e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1377e8: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x1377e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x1377ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1377ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1377f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1377f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1377f4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1377F4u;
    {
        const bool branch_taken_0x1377f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1377F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377F4u;
        // 0x1377f8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377f4) {
            ctx->pc = 0x13783Cu;
            goto label_13783c;
        }
    }
    ctx->pc = 0x1377FCu;
label_1377fc:
    // 0x1377fc: 0x172140  sll         $a0, $s7, 5
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x137800: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x137800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x137804: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x137804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137808: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x137808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x13780c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x137810: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137814: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137814u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x137818: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x137818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13781c: 0x266300f0  addiu       $v1, $s3, 0xF0
    ctx->pc = 0x13781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x137820: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x137820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x137824: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137828: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13782c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13782cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x137830: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x137830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137834: 0x2ae2000f  slti        $v0, $s7, 0xF
    ctx->pc = 0x137834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x137838: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x137838u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_13783c:
    // 0x13783c: 0x56c0ff5a  bnel        $s6, $zero, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x13783Cu;
    {
        const bool branch_taken_0x13783c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13783c) {
            ctx->pc = 0x137840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13783Cu;
            // 0x137840: 0x8ed30004  lw          $s3, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1375A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1375a8;
        }
    }
    ctx->pc = 0x137844u;
    // 0x137844: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x137844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_137848:
    // 0x137848: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x137848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13784c: 0x2484bc50  addiu       $a0, $a0, -0x43B0
    ctx->pc = 0x13784cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
    // 0x137850: 0xac970400  sw          $s7, 0x400($a0)
    ctx->pc = 0x137850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 23));
label_137854:
    // 0x137854: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x137854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137858: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x137858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13785c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13785cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137860: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x137860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137864: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x137864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137868: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x137868u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13786c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x13786cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137870: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x137870u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x137874: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x137874u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137878: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x137878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13787c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x13787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137880: 0x3e00008  jr          $ra
    ctx->pc = 0x137880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137880u;
        // 0x137884: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137888u;
}
