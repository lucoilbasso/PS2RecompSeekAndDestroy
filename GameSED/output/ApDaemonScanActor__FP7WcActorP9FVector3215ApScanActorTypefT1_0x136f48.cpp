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

// Function: ApDaemonScanActor__FP7WcActorP9FVector3215ApScanActorTypefT1
// Address: 0x136f48 - 0x137528
void ApDaemonScanActor__FP7WcActorP9FVector3215ApScanActorTypefT1_0x136f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanActor__FP7WcActorP9FVector3215ApScanActorTypefT1_0x136f48");
#endif

    switch (ctx->pc) {
        case 0x136fb0u: goto label_136fb0;
        case 0x137100u: goto label_137100;
        case 0x137220u: goto label_137220;
        case 0x137228u: goto label_137228;
        case 0x13722cu: goto label_13722c;
        case 0x137260u: goto label_137260;
        case 0x137268u: goto label_137268;
        case 0x1372b4u: goto label_1372b4;
        case 0x1372bcu: goto label_1372bc;
        case 0x137430u: goto label_137430;
        case 0x137488u: goto label_137488;
        default: break;
    }

    ctx->pc = 0x136f48u;

    // 0x136f48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x136f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x136f4c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x136f50: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x136f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x136f54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x136f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f58: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x136f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x136f5c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x136f5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f60: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x136f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x136f64: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x136f64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f68: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x136f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x136f6c: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x136f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x136f70: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x136f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x136f74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x136f74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x136f78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x136f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x136f7c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x136f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x136f80: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x136f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x136f84: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x136f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x136f88: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x136f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x136f8c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x136f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x136f90: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x136f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136f94: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x136f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x136f98: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x136f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x136f9c: 0x8c76007c  lw          $s6, 0x7C($v1)
    ctx->pc = 0x136f9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x136fa0: 0x12c00152  beqz        $s6, . + 4 + (0x152 << 2)
    ctx->pc = 0x136FA0u;
    {
        const bool branch_taken_0x136fa0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FA0u;
        // 0x136fa4: 0x251ebc50  addiu       $fp, $t0, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fa0) {
            ctx->pc = 0x1374ECu;
            goto label_1374ec;
        }
    }
    ctx->pc = 0x136FA8u;
    // 0x136fa8: 0x8ed20004  lw          $s2, 0x4($s6)
    ctx->pc = 0x136fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x136fac: 0x0  nop
    ctx->pc = 0x136facu;
    // NOP
label_136fb0:
    // 0x136fb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x136fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136fb4: 0x1242014b  beq         $s2, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x136FB4u;
    {
        const bool branch_taken_0x136fb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x136FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FB4u;
        // 0x136fb8: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fb4) {
            ctx->pc = 0x1374E4u;
            goto label_1374e4;
        }
    }
    ctx->pc = 0x136FBCu;
    // 0x136fbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x136fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x136fc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136fc8: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x136fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x136fcc: 0x242380a  movz        $a3, $s2, $v0
    ctx->pc = 0x136fccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x136fd0: 0x50e0000d  beql        $a3, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x136FD0u;
    {
        const bool branch_taken_0x136fd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fd0) {
            ctx->pc = 0x136FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136FD0u;
            // 0x136fd4: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137008u;
            goto label_137008;
        }
    }
    ctx->pc = 0x136FD8u;
    // 0x136fd8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x136fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x136fdc: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x136fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x136fe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136FE0u;
    {
        const bool branch_taken_0x136fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FE0u;
        // 0x136fe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fe0) {
            ctx->pc = 0x136FF8u;
            goto label_136ff8;
        }
    }
    ctx->pc = 0x136FE8u;
    // 0x136fe8: 0x8ce20184  lw          $v0, 0x184($a3)
    ctx->pc = 0x136fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x136fec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x136fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x136ff0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x136FF0u;
    {
        const bool branch_taken_0x136ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ff0) {
            ctx->pc = 0x136FFCu;
            goto label_136ffc;
        }
    }
    ctx->pc = 0x136FF8u;
label_136ff8:
    // 0x136ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136ffc:
    // 0x136ffc: 0x14600139  bnez        $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x136FFCu;
    {
        const bool branch_taken_0x136ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136ffc) {
            ctx->pc = 0x1374E4u;
            goto label_1374e4;
        }
    }
    ctx->pc = 0x137004u;
    // 0x137004: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x137004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_137008:
    // 0x137008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x137008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13700c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13700cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137010: 0x38421118  xori        $v0, $v0, 0x1118
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4376);
    // 0x137014: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x137014u;
    {
        const bool branch_taken_0x137014 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x137018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137014u;
        // 0x137018: 0x242980a  movz        $s3, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137014) {
            ctx->pc = 0x13702Cu;
            goto label_13702c;
        }
    }
    ctx->pc = 0x13701Cu;
    // 0x13701c: 0x8ce2017c  lw          $v0, 0x17C($a3)
    ctx->pc = 0x13701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 380)));
    // 0x137020: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x137020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x137024: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x137024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x137028: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x137028u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13702c:
    // 0x13702c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x137030: 0x34c50002  ori         $a1, $a2, 0x2
    ctx->pc = 0x137030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x137034: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x137034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x137038: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x137038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13703c: 0xa4300b  movn        $a2, $a1, $a0
    ctx->pc = 0x13703cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x137040: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x137040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x137044: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x137044u;
    {
        const bool branch_taken_0x137044 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x137048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137044u;
        // 0x137048: 0x43300b  movn        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137044) {
            ctx->pc = 0x137068u;
            goto label_137068;
        }
    }
    ctx->pc = 0x13704Cu;
    // 0x13704c: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x13704cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x137050: 0x8e640688  lw          $a0, 0x688($s3)
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1672)));
    // 0x137054: 0x34c30080  ori         $v1, $a2, 0x80
    ctx->pc = 0x137054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x137058: 0x8e65068c  lw          $a1, 0x68C($s3)
    ctx->pc = 0x137058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1676)));
    // 0x13705c: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x13705cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x137060: 0x34c20100  ori         $v0, $a2, 0x100
    ctx->pc = 0x137060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x137064: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x137064u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_137068:
    // 0x137068: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x137068u;
    {
        const bool branch_taken_0x137068 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137068u;
        // 0x13706c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137068) {
            ctx->pc = 0x1370CCu;
            goto label_1370cc;
        }
    }
    ctx->pc = 0x137070u;
    // 0x137070: 0x8ce30180  lw          $v1, 0x180($a3)
    ctx->pc = 0x137070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x137074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x137074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x137078: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x137078u;
    {
        const bool branch_taken_0x137078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137078u;
        // 0x13707c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137078) {
            ctx->pc = 0x1374E4u;
            goto label_1374e4;
        }
    }
    ctx->pc = 0x137080u;
    // 0x137080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x137080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x137084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137084u;
    {
        const bool branch_taken_0x137084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137084u;
        // 0x137088: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137084) {
            ctx->pc = 0x137098u;
            goto label_137098;
        }
    }
    ctx->pc = 0x13708Cu;
    // 0x13708c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13708Cu;
    {
        const bool branch_taken_0x13708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13708Cu;
        // 0x137090: 0x34c60020  ori         $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13708c) {
            ctx->pc = 0x1370CCu;
            goto label_1370cc;
        }
    }
    ctx->pc = 0x137094u;
    // 0x137094: 0x0  nop
    ctx->pc = 0x137094u;
    // NOP
label_137098:
    // 0x137098: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x137098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13709c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13709Cu;
    {
        const bool branch_taken_0x13709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13709Cu;
        // 0x1370a0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13709c) {
            ctx->pc = 0x1370B0u;
            goto label_1370b0;
        }
    }
    ctx->pc = 0x1370A4u;
    // 0x1370a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1370A4u;
    {
        const bool branch_taken_0x1370a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370A4u;
        // 0x1370a8: 0x34c60040  ori         $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370a4) {
            ctx->pc = 0x1370CCu;
            goto label_1370cc;
        }
    }
    ctx->pc = 0x1370ACu;
    // 0x1370ac: 0x0  nop
    ctx->pc = 0x1370acu;
    // NOP
label_1370b0:
    // 0x1370b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1370b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1370b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1370B4u;
    {
        const bool branch_taken_0x1370b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370B4u;
        // 0x1370b8: 0x34c20010  ori         $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370b4) {
            ctx->pc = 0x1370C8u;
            goto label_1370c8;
        }
    }
    ctx->pc = 0x1370BCu;
    // 0x1370bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1370BCu;
    {
        const bool branch_taken_0x1370bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370BCu;
        // 0x1370c0: 0x34c60010  ori         $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370bc) {
            ctx->pc = 0x1370CCu;
            goto label_1370cc;
        }
    }
    ctx->pc = 0x1370C4u;
    // 0x1370c4: 0x0  nop
    ctx->pc = 0x1370c4u;
    // NOP
label_1370c8:
    // 0x1370c8: 0x46300b  movn        $a2, $v0, $a2
    ctx->pc = 0x1370c8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1370cc:
    // 0x1370cc: 0x2ee20009  sltiu       $v0, $s7, 0x9
    ctx->pc = 0x1370ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1370d0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1370D0u;
    {
        const bool branch_taken_0x1370d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370D0u;
        // 0x1370d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370d0) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x1370D8u;
    // 0x1370d8: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1370d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1370dc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1370dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1370e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1370e4: 0x8c6367c0  lw          $v1, 0x67C0($v1)
    ctx->pc = 0x1370e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26560)));
    // 0x1370e8: 0x600008  jr          $v1
    ctx->pc = 0x1370E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1370F0u: goto label_1370f0;
            case 0x137110u: goto label_137110;
            case 0x137138u: goto label_137138;
            case 0x137160u: goto label_137160;
            case 0x137188u: goto label_137188;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371E0u: goto label_1371e0;
            case 0x137208u: goto label_137208;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1370E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1370F0u;
label_1370f0:
    // 0x1370f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1370f4: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x1370f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x1370f8: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1370F8u;
    {
        const bool branch_taken_0x1370f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370F8u;
        // 0x1370fc: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370f8) {
            ctx->pc = 0x137220u;
            goto label_137220;
        }
    }
    ctx->pc = 0x137100u;
label_137100:
    // 0x137100: 0x14c0004a  bnez        $a2, . + 4 + (0x4A << 2)
    ctx->pc = 0x137100u;
    {
        const bool branch_taken_0x137100 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x137100) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137108u;
    // 0x137108: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x137108u;
    {
        const bool branch_taken_0x137108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137108u;
        // 0x13710c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137108) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137110u;
label_137110:
    // 0x137110: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x137114: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137118: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137118u;
    {
        const bool branch_taken_0x137118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137118u;
        // 0x13711c: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137118) {
            ctx->pc = 0x137100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137100;
        }
    }
    ctx->pc = 0x137120u;
    // 0x137120: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x137120u;
    {
        const bool branch_taken_0x137120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137120u;
        // 0x137124: 0x30c20060  andi        $v0, $a2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137120) {
            ctx->pc = 0x137228u;
            goto label_137228;
        }
    }
    ctx->pc = 0x137128u;
    // 0x137128: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x137128u;
    {
        const bool branch_taken_0x137128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137128) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137130u;
    // 0x137130: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x137130u;
    {
        const bool branch_taken_0x137130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137130u;
        // 0x137134: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137130) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137138u;
label_137138:
    // 0x137138: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13713c: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x13713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137140: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137140u;
    {
        const bool branch_taken_0x137140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137140u;
        // 0x137144: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137140) {
            ctx->pc = 0x137100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137100;
        }
    }
    ctx->pc = 0x137148u;
    // 0x137148: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x137148u;
    {
        const bool branch_taken_0x137148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137148u;
        // 0x13714c: 0x30c20050  andi        $v0, $a2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)80);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137148) {
            ctx->pc = 0x137228u;
            goto label_137228;
        }
    }
    ctx->pc = 0x137150u;
    // 0x137150: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x137150u;
    {
        const bool branch_taken_0x137150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137150) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137158u;
    // 0x137158: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x137158u;
    {
        const bool branch_taken_0x137158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137158u;
        // 0x13715c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137158) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137160u;
label_137160:
    // 0x137160: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x137164: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137168: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x137168u;
    {
        const bool branch_taken_0x137168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137168u;
        // 0x13716c: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137168) {
            ctx->pc = 0x137100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137100;
        }
    }
    ctx->pc = 0x137170u;
    // 0x137170: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x137170u;
    {
        const bool branch_taken_0x137170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137170u;
        // 0x137174: 0x30c20030  andi        $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137170) {
            ctx->pc = 0x137228u;
            goto label_137228;
        }
    }
    ctx->pc = 0x137178u;
    // 0x137178: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x137178u;
    {
        const bool branch_taken_0x137178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137178) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137180u;
    // 0x137180: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x137180u;
    {
        const bool branch_taken_0x137180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137180u;
        // 0x137184: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137180) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137188u;
label_137188:
    // 0x137188: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x137188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x13718c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x13718Cu;
    {
        const bool branch_taken_0x13718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13718c) {
            ctx->pc = 0x137190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13718Cu;
            // 0x137190: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137194u;
    // 0x137194: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x137194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x137198: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x13719c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13719Cu;
    {
        const bool branch_taken_0x13719c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13719Cu;
        // 0x1371a0: 0x30c20004  andi        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13719c) {
            ctx->pc = 0x137100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137100;
        }
    }
    ctx->pc = 0x1371A4u;
    // 0x1371a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1371A4u;
    {
        const bool branch_taken_0x1371a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1371a4) {
            ctx->pc = 0x137220u;
            goto label_137220;
        }
    }
    ctx->pc = 0x1371ACu;
    // 0x1371ac: 0x0  nop
    ctx->pc = 0x1371acu;
    // NOP
label_1371b0:
    // 0x1371b0: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x1371b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x1371b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1371B4u;
    {
        const bool branch_taken_0x1371b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371B4u;
        // 0x1371b8: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371b4) {
            ctx->pc = 0x137220u;
            goto label_137220;
        }
    }
    ctx->pc = 0x1371BCu;
    // 0x1371bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1371BCu;
    {
        const bool branch_taken_0x1371bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371BCu;
        // 0x1371c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371bc) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x1371C4u;
    // 0x1371c4: 0x0  nop
    ctx->pc = 0x1371c4u;
    // NOP
label_1371c8:
    // 0x1371c8: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x1371c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x1371cc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1371CCu;
    {
        const bool branch_taken_0x1371cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1371cc) {
            ctx->pc = 0x1371D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1371CCu;
            // 0x1371d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x1371D4u;
    // 0x1371d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1371D4u;
    {
        const bool branch_taken_0x1371d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371D4u;
        // 0x1371d8: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d4) {
            ctx->pc = 0x137220u;
            goto label_137220;
        }
    }
    ctx->pc = 0x1371DCu;
    // 0x1371dc: 0x0  nop
    ctx->pc = 0x1371dcu;
    // NOP
label_1371e0:
    // 0x1371e0: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x1371e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x1371e4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1371E4u;
    {
        const bool branch_taken_0x1371e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1371e4) {
            ctx->pc = 0x1371E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1371E4u;
            // 0x1371e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x1371ECu;
    // 0x1371ec: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x1371ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x1371f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1371f4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1371F4u;
    {
        const bool branch_taken_0x1371f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1371f4) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x1371FCu;
    // 0x1371fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1371FCu;
    {
        const bool branch_taken_0x1371fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371FCu;
        // 0x137200: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371fc) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137204u;
    // 0x137204: 0x0  nop
    ctx->pc = 0x137204u;
    // NOP
label_137208:
    // 0x137208: 0x30c20180  andi        $v0, $a2, 0x180
    ctx->pc = 0x137208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)384);
    // 0x13720c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13720Cu;
    {
        const bool branch_taken_0x13720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13720c) {
            ctx->pc = 0x137210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13720Cu;
            // 0x137210: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137214u;
    // 0x137214: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x137214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x137218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137218u;
    {
        const bool branch_taken_0x137218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137218u;
        // 0x13721c: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137218) {
            ctx->pc = 0x137228u;
            goto label_137228;
        }
    }
    ctx->pc = 0x137220u;
label_137220:
    // 0x137220: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x137220u;
    {
        const bool branch_taken_0x137220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137220) {
            ctx->pc = 0x13722Cu;
            goto label_13722c;
        }
    }
    ctx->pc = 0x137228u;
label_137228:
    // 0x137228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13722c:
    // 0x13722c: 0x148000ad  bnez        $a0, . + 4 + (0xAD << 2)
    ctx->pc = 0x13722Cu;
    {
        const bool branch_taken_0x13722c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13722c) {
            ctx->pc = 0x1374E4u;
            goto label_1374e4;
        }
    }
    ctx->pc = 0x137234u;
    // 0x137234: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137238: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x137238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13723c: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x13723cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x137240: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137244: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x137244u;
    {
        const bool branch_taken_0x137244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137244u;
        // 0x137248: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137244) {
            ctx->pc = 0x1372A0u;
            goto label_1372a0;
        }
    }
    ctx->pc = 0x13724Cu;
    // 0x13724c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x137250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137250u;
    {
        const bool branch_taken_0x137250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137250) {
            ctx->pc = 0x137260u;
            goto label_137260;
        }
    }
    ctx->pc = 0x137258u;
    // 0x137258: 0xc061920  jal         func_186480
    ctx->pc = 0x137258u;
    SET_GPR_U32(ctx, 31, 0x137260u);
    ctx->pc = 0x13725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137258u;
    // 0x13725c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137258u, 0x137260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137260u;
label_137260:
    // 0x137260: 0xc061422  jal         func_185088
    ctx->pc = 0x137260u;
    SET_GPR_U32(ctx, 31, 0x137268u);
    ctx->pc = 0x137264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137260u;
    // 0x137264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137260u, 0x137268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137268u;
label_137268:
    // 0x137268: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x137268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x13726c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13726cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137270: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137274: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x137274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x137278: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x13727c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x13727cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x137280: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x137280u;
    {
        const bool branch_taken_0x137280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137280u;
        // 0x137284: 0x264200a0  addiu       $v0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137280) {
            ctx->pc = 0x1372ECu;
            goto label_1372ec;
        }
    }
    ctx->pc = 0x137288u;
    // 0x137288: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137288u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13728c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x13728cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137290: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x137290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137294: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137298: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x137298u;
    {
        const bool branch_taken_0x137298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137298u;
        // 0x13729c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137298) {
            ctx->pc = 0x1372F0u;
            goto label_1372f0;
        }
    }
    ctx->pc = 0x1372A0u;
label_1372a0:
    // 0x1372a0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1372a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1372a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1372A4u;
    {
        const bool branch_taken_0x1372a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1372a4) {
            ctx->pc = 0x1372B4u;
            goto label_1372b4;
        }
    }
    ctx->pc = 0x1372ACu;
    // 0x1372ac: 0xc061920  jal         func_186480
    ctx->pc = 0x1372ACu;
    SET_GPR_U32(ctx, 31, 0x1372B4u);
    ctx->pc = 0x1372B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372ACu;
    // 0x1372b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1372ACu, 0x1372B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372B4u;
label_1372b4:
    // 0x1372b4: 0xc061422  jal         func_185088
    ctx->pc = 0x1372B4u;
    SET_GPR_U32(ctx, 31, 0x1372BCu);
    ctx->pc = 0x1372B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372B4u;
    // 0x1372b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1372B4u, 0x1372BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372BCu;
label_1372bc:
    // 0x1372bc: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x1372bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x1372c0: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1372c4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1372c4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1372c8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1372c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1372cc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1372ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1372d0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1372d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1372d4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1372d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1372d8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1372d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1372dc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1372dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1372e0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1372e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1372e4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1372e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1372e8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1372e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_1372ec:
    // 0x1372ec: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1372ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1372f0:
    // 0x1372f0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1372f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1372f4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1372f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1372f8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1372f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1372fc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1372fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137300: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x137300u;
    {
        const bool branch_taken_0x137300 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x137304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137300u;
        // 0x137304: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137300) {
            ctx->pc = 0x137334u;
            goto label_137334;
        }
    }
    ctx->pc = 0x137308u;
    // 0x137308: 0x8e620264  lw          $v0, 0x264($s3)
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x13730c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137310: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137310u;
    {
        const bool branch_taken_0x137310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137310) {
            ctx->pc = 0x137334u;
            goto label_137334;
        }
    }
    ctx->pc = 0x137318u;
    // 0x137318: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x13731c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13731cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137320: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x137320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137324: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x137324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137328: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x137328u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13732c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13732cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137330: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x137330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_137334:
    // 0x137334: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137334u;
    {
        const bool branch_taken_0x137334 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x137334) {
            ctx->pc = 0x137338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137334u;
            // 0x137338: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13733Cu;
            goto label_13733c;
        }
    }
    ctx->pc = 0x13733Cu;
label_13733c:
    // 0x13733c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13733cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137340: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x137340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137344: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x137344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137348: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x137348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13734c: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13734cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x137350: 0x4a0003bf  vwaitq
    ctx->pc = 0x137350u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x137354: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x137354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137358: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x137358u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13735c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x137364: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x137364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13736c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x13736cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137370: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x137370u;
    {
        const bool branch_taken_0x137370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137370) {
            ctx->pc = 0x137390u;
            goto label_137390;
        }
    }
    ctx->pc = 0x137378u;
    // 0x137378: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x13737c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13737cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137380: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x137380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137384: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x137384u;
    {
        const bool branch_taken_0x137384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137384) {
            ctx->pc = 0x1373A0u;
            goto label_1373a0;
        }
    }
    ctx->pc = 0x13738Cu;
    // 0x13738c: 0x0  nop
    ctx->pc = 0x13738cu;
    // NOP
label_137390:
    // 0x137390: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x137390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137394: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137394u;
    {
        const bool branch_taken_0x137394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137394) {
            ctx->pc = 0x1373A8u;
            goto label_1373a8;
        }
    }
    ctx->pc = 0x13739Cu;
    // 0x13739c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x13739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1373a0:
    // 0x1373a0: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x1373A0u;
    {
        const bool branch_taken_0x1373a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1373a0) {
            ctx->pc = 0x1374E4u;
            goto label_1374e4;
        }
    }
    ctx->pc = 0x1373A8u;
label_1373a8:
    // 0x1373a8: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1373A8u;
    {
        const bool branch_taken_0x1373a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1373ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373A8u;
        // 0x1373ac: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373a8) {
            ctx->pc = 0x137400u;
            goto label_137400;
        }
    }
    ctx->pc = 0x1373B0u;
    // 0x1373b0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1373b4: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1373b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1373b8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1373b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1373bc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1373bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1373c0: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x1373c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1373c4: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x1373c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1373c8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x1373c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1373cc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1373ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1373d0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1373d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1373d4: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1373d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1373d8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1373d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1373dc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1373dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1373e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1373e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1373e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1373e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1373e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1373e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1373ec: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1373ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1373f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1373F0u;
    {
        const bool branch_taken_0x1373f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1373f0) {
            ctx->pc = 0x137404u;
            goto label_137404;
        }
    }
    ctx->pc = 0x1373F8u;
    // 0x1373f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1373f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1373fc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1373fcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_137400:
    // 0x137400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137404:
    // 0x137404: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x137404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137408: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x137408u;
    {
        const bool branch_taken_0x137408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137408u;
        // 0x13740c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137408) {
            ctx->pc = 0x137420u;
            goto label_137420;
        }
    }
    ctx->pc = 0x137410u;
    // 0x137410: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x137410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x137414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137418: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x137418u;
    {
        const bool branch_taken_0x137418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137418) {
            ctx->pc = 0x1374E4u;
            goto label_1374e4;
        }
    }
    ctx->pc = 0x137420u;
label_137420:
    // 0x137420: 0x1a800010  blez        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x137420u;
    {
        const bool branch_taken_0x137420 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x137424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137420u;
        // 0x137424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137420) {
            ctx->pc = 0x137464u;
            goto label_137464;
        }
    }
    ctx->pc = 0x137428u;
    // 0x137428: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x137428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13742c: 0x0  nop
    ctx->pc = 0x13742cu;
    // NOP
label_137430:
    // 0x137430: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x137434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x137434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137438: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x137438u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13743c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x13743cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x137440: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x137440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x137444: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x137444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137448: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13744c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x13744Cu;
    {
        const bool branch_taken_0x13744c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13744c) {
            ctx->pc = 0x137450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13744Cu;
            // 0x137450: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137458u;
            goto label_137458;
        }
    }
    ctx->pc = 0x137454u;
    // 0x137454: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_137458:
    // 0x137458: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x137458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13745c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13745Cu;
    {
        const bool branch_taken_0x13745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13745Cu;
        // 0x137460: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13745c) {
            ctx->pc = 0x137430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137430;
        }
    }
    ctx->pc = 0x137464u;
label_137464:
    // 0x137464: 0x5a800013  blezl       $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x137464u;
    {
        const bool branch_taken_0x137464 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x137464) {
            ctx->pc = 0x137468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137464u;
            // 0x137468: 0x42140  sll         $a0, $a0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1374B4u;
            goto label_1374b4;
        }
    }
    ctx->pc = 0x13746Cu;
    // 0x13746c: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x13746cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x137470: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x137470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x137474: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x137478: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x137478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13747c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13747Cu;
    {
        const bool branch_taken_0x13747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x137480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13747Cu;
        // 0x137480: 0x24a6ffe0  addiu       $a2, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13747c) {
            ctx->pc = 0x1374B0u;
            goto label_1374b0;
        }
    }
    ctx->pc = 0x137484u;
    // 0x137484: 0x0  nop
    ctx->pc = 0x137484u;
    // NOP
label_137488:
    // 0x137488: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x137488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13748c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x13748cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x137490: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x137490u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x137494: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x137494u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x137498: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x137498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x13749c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x13749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1374a0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x1374a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1374a4: 0x0  nop
    ctx->pc = 0x1374a4u;
    // NOP
    // 0x1374a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1374A8u;
    {
        const bool branch_taken_0x1374a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1374ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374A8u;
        // 0x1374ac: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374a8) {
            ctx->pc = 0x137488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137488;
        }
    }
    ctx->pc = 0x1374B0u;
label_1374b0:
    // 0x1374b0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1374b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1374b4:
    // 0x1374b4: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x1374b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1374b8: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1374b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x1374bc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1374bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1374c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1374c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1374c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1374c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1374c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1374cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1374ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1374d0: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1374d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1374d4: 0x2a82000f  slti        $v0, $s4, 0xF
    ctx->pc = 0x1374d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1374d8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1374d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1374dc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1374dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1374e0: 0xa2a00a  movz        $s4, $a1, $v0
    ctx->pc = 0x1374e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 5));
label_1374e4:
    // 0x1374e4: 0x56c0feb2  bnel        $s6, $zero, . + 4 + (-0x14E << 2)
    ctx->pc = 0x1374E4u;
    {
        const bool branch_taken_0x1374e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1374e4) {
            ctx->pc = 0x1374E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1374E4u;
            // 0x1374e8: 0x8ed20004  lw          $s2, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136fb0;
        }
    }
    ctx->pc = 0x1374ECu;
label_1374ec:
    // 0x1374ec: 0xafd40400  sw          $s4, 0x400($fp)
    ctx->pc = 0x1374ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 20));
    // 0x1374f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1374f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1374f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1374f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1374f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1374f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1374fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1374fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137500: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x137500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137504: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x137504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137508: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x137508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13750c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13750cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137510: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x137510u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x137514: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x137514u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137518: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x137518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13751c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x13751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137520: 0x3e00008  jr          $ra
    ctx->pc = 0x137520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137520u;
        // 0x137524: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137528u;
}
