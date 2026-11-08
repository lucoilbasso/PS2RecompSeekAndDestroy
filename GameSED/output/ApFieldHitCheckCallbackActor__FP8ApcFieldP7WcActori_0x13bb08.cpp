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

// Function: ApFieldHitCheckCallbackActor__FP8ApcFieldP7WcActori
// Address: 0x13bb08 - 0x13bcf4
void ApFieldHitCheckCallbackActor__FP8ApcFieldP7WcActori_0x13bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApFieldHitCheckCallbackActor__FP8ApcFieldP7WcActori_0x13bb08");
#endif

    switch (ctx->pc) {
        case 0x13bb80u: goto label_13bb80;
        case 0x13bc38u: goto label_13bc38;
        case 0x13bc58u: goto label_13bc58;
        case 0x13bc84u: goto label_13bc84;
        default: break;
    }

    ctx->pc = 0x13bb08u;

    // 0x13bb08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13bb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13bb0c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x13bb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x13bb10: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x13bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x13bb14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13bb14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb18: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x13bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x13bb1c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x13bb1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x13bb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x13bb24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13bb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x13bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x13bb2c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x13bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x13bb30: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x13bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x13bb34: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x13bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x13bb38: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x13bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x13bb3c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13bb40: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x13bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x13bb44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bb48: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x13bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x13bb4c: 0x8c950200  lw          $s5, 0x200($a0)
    ctx->pc = 0x13bb4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x13bb50: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x13bb50u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13bb54: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x13bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x13bb58: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13bb58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bb5c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13bb60: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x13bb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13bb64: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13bb68: 0x38631118  xori        $v1, $v1, 0x1118
    ctx->pc = 0x13bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4376);
    // 0x13bb6c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x13bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x13bb70: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x13bb70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13bb74: 0x12a00053  beqz        $s5, . + 4 + (0x53 << 2)
    ctx->pc = 0x13BB74u;
    {
        const bool branch_taken_0x13bb74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB74u;
        // 0x13bb78: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb74) {
            ctx->pc = 0x13BCC4u;
            goto label_13bcc4;
        }
    }
    ctx->pc = 0x13BB7Cu;
    // 0x13bb7c: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x13bb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_13bb80:
    // 0x13bb80: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x13BB80u;
    {
        const bool branch_taken_0x13bb80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB80u;
        // 0x13bb84: 0x8eb50000  lw          $s5, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb80) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BB88u;
    // 0x13bb88: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13bb8c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x13BB8Cu;
    {
        const bool branch_taken_0x13bb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb8c) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BB94u;
    // 0x13bb94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bb98: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x13BB98u;
    {
        const bool branch_taken_0x13bb98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb98) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BBA0u;
    // 0x13bba0: 0x12320046  beq         $s1, $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x13BBA0u;
    {
        const bool branch_taken_0x13bba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x13bba0) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BBA8u;
    // 0x13bba8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x13bbac: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x13bbb0: 0x30421f00  andi        $v0, $v0, 0x1F00
    ctx->pc = 0x13bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7936);
    // 0x13bbb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x13bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x13bbb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13bbbc: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x13BBBCu;
    {
        const bool branch_taken_0x13bbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbbc) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BBC4u;
    // 0x13bbc4: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x13bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x13bbc8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BBC8u;
    {
        const bool branch_taken_0x13bbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbc8) {
            ctx->pc = 0x13BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BBC8u;
            // 0x13bbcc: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BBE8u;
            goto label_13bbe8;
        }
    }
    ctx->pc = 0x13BBD0u;
    // 0x13bbd0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x13bbd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bbd4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x13bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x13bbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bbdc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x13BBDCu;
    {
        const bool branch_taken_0x13bbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbdc) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BBE4u;
    // 0x13bbe4: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x13bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_13bbe8:
    // 0x13bbe8: 0xc62200e0  lwc1        $f2, 0xE0($s1)
    ctx->pc = 0x13bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13bbec: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x13bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bbf0: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x13bbf0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x13bbf4: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x13bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bbf8: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x13bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13bbfc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x13bbfcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x13bc00: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x13bc00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13bc04: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x13bc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x13bc08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13bc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bc0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bc10: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x13bc14: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13bc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13bc18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13bc18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13bc1c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13bc1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13bc20: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BC20u;
    {
        const bool branch_taken_0x13bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC20u;
        // 0x13bc24: 0xe6820020  swc1        $f2, 0x20($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc20) {
            ctx->pc = 0x13BC70u;
            goto label_13bc70;
        }
    }
    ctx->pc = 0x13BC28u;
    // 0x13bc28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13bc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc30: 0x8e6301b0  lw          $v1, 0x1B0($s3)
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x13bc34: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x13bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_13bc38:
    // 0x13bc38: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BC38u;
    {
        const bool branch_taken_0x13bc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC38u;
        // 0x13bc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc38) {
            ctx->pc = 0x13BC88u;
            goto label_13bc88;
        }
    }
    ctx->pc = 0x13BC40u;
    // 0x13bc40: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x13bc40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13bc44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bc48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13bc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc4c: 0xae6301c4  sw          $v1, 0x1C4($s3)
    ctx->pc = 0x13bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 3));
    // 0x13bc50: 0xc04ef3e  jal         func_13BCF8
    ctx->pc = 0x13BC50u;
    SET_GPR_U32(ctx, 31, 0x13BC58u);
    ctx->pc = 0x13BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC50u;
    // 0x13bc54: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BCF8u, 0x13BC50u, 0x13BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC58u;
label_13bc58:
    // 0x13bc58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13bc58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc5c: 0x1100fff6  beqz        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13BC5Cu;
    {
        const bool branch_taken_0x13bc5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC5Cu;
        // 0x13bc60: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc5c) {
            ctx->pc = 0x13BC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bc38;
        }
    }
    ctx->pc = 0x13BC64u;
    // 0x13bc64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BC64u;
    {
        const bool branch_taken_0x13bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc64) {
            ctx->pc = 0x13BC88u;
            goto label_13bc88;
        }
    }
    ctx->pc = 0x13BC6Cu;
    // 0x13bc6c: 0x0  nop
    ctx->pc = 0x13bc6cu;
    // NOP
label_13bc70:
    // 0x13bc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13bc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc78: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13bc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc7c: 0xc04ef3e  jal         func_13BCF8
    ctx->pc = 0x13BC7Cu;
    SET_GPR_U32(ctx, 31, 0x13BC84u);
    ctx->pc = 0x13BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC7Cu;
    // 0x13bc80: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BCF8u, 0x13BC7Cu, 0x13BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC84u;
label_13bc84:
    // 0x13bc84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13bc84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bc88:
    // 0x13bc88: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x13BC88u;
    {
        const bool branch_taken_0x13bc88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bc88) {
            ctx->pc = 0x13BCBCu;
            goto label_13bcbc;
        }
    }
    ctx->pc = 0x13BC90u;
    // 0x13bc90: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x13bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x13bc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bc98: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x13BC98u;
    {
        const bool branch_taken_0x13bc98 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC98u;
        // 0x13bc9c: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc98) {
            ctx->pc = 0x13BCC4u;
            goto label_13bcc4;
        }
    }
    ctx->pc = 0x13BCA0u;
    // 0x13bca0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x13bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13bca4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BCA4u;
    {
        const bool branch_taken_0x13bca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bca4) {
            ctx->pc = 0x13BCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCA4u;
            // 0x13bca8: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BCC8u;
            goto label_13bcc8;
        }
    }
    ctx->pc = 0x13BCACu;
    // 0x13bcac: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x13bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x13bcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13bcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcb4: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x13bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
    // 0x13bcb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_13bcbc:
    // 0x13bcbc: 0x56a0ffb0  bnel        $s5, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x13BCBCu;
    {
        const bool branch_taken_0x13bcbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bcbc) {
            ctx->pc = 0x13BCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BCBCu;
            // 0x13bcc0: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bb80;
        }
    }
    ctx->pc = 0x13BCC4u;
label_13bcc4:
    // 0x13bcc4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_13bcc8:
    // 0x13bcc8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x13bcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bccc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x13bcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13bcd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13bcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13bcd4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x13bcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bcd8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x13bcd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13bcdc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x13bcdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bce0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x13bce0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13bce4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x13bce4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bce8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x13bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13bcec: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCECu;
        // 0x13bcf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BCF4u;
}
