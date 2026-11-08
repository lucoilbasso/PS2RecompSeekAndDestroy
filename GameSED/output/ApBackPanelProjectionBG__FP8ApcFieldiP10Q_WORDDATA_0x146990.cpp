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

// Function: ApBackPanelProjectionBG__FP8ApcFieldiP10Q_WORDDATA
// Address: 0x146990 - 0x146ed0
void ApBackPanelProjectionBG__FP8ApcFieldiP10Q_WORDDATA_0x146990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBackPanelProjectionBG__FP8ApcFieldiP10Q_WORDDATA_0x146990");
#endif

    switch (ctx->pc) {
        case 0x146a08u: goto label_146a08;
        case 0x146c90u: goto label_146c90;
        case 0x146d24u: goto label_146d24;
        case 0x146db0u: goto label_146db0;
        default: break;
    }

    ctx->pc = 0x146990u;

    // 0x146990: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x146994: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x146994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x146998: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x146998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x14699c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14699cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469a0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1469a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1469a4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x1469a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x1469a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1469a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1469ac: 0x247226c0  addiu       $s2, $v1, 0x26C0
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    // 0x1469b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1469b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1469b4: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1469b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x1469b8: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1469b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x1469bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1469bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1469c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1469c4: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1469c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x1469c8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1469c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1469cc: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1469d0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1469d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469d4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1469d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469d8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1469dc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1469dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469e0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1469e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1469e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1469e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1469e8: 0x31a43  sra         $v1, $v1, 9
    ctx->pc = 0x1469e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 9));
    // 0x1469ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1469ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1469f0: 0x1460012f  bnez        $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x1469F0u;
    {
        const bool branch_taken_0x1469f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1469F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469F0u;
        // 0x1469f4: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469f0) {
            ctx->pc = 0x146EB0u;
            goto label_146eb0;
        }
    }
    ctx->pc = 0x1469F8u;
    // 0x1469f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1469f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469fc: 0x264401b0  addiu       $a0, $s2, 0x1B0
    ctx->pc = 0x1469fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x146a00: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x146a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a04: 0x0  nop
    ctx->pc = 0x146a04u;
    // NOP
label_146a08:
    // 0x146a08: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x146a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146a0c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x146a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x146a10: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x146a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146a14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x146a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146a18: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x146a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a1c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x146a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x146a20: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x146a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x146a24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146a28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x146a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x146a2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x146A2Cu;
    {
        const bool branch_taken_0x146a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A2Cu;
        // 0x146a30: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a2c) {
            ctx->pc = 0x146A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a08;
        }
    }
    ctx->pc = 0x146A34u;
    // 0x146a34: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x146a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x146a38: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x146a3c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x146a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146a40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x146a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146a44: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x146a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146a48: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x146a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x146a4c: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x146a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146a50: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x146a50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x146a54: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x146a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x146a58: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x146a58u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x146a5c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x146a60: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x146a60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x146a64: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x146a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x146a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146a6c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x146a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x146a70: 0x24620fff  addiu       $v0, $v1, 0xFFF
    ctx->pc = 0x146a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x146a74: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x146a74u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x146a78: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x146a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x146a7c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x146a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x146a80: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x146a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x146a84: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x146a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x146a88: 0xc6260044  lwc1        $f6, 0x44($s1)
    ctx->pc = 0x146a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x146a8c: 0x460219c2  mul.s       $f7, $f3, $f2
    ctx->pc = 0x146a8cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x146a90: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x146a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x146a94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146a98: 0x460a1a02  mul.s       $f8, $f3, $f10
    ctx->pc = 0x146a98u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x146a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146aa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x146aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146aa4: 0xc7858194  lwc1        $f5, -0x7E6C($gp)
    ctx->pc = 0x146aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x146aa8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x146aa8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x146aac: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x146aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x146ab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146ab4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x146ab8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146abc: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x146abcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x146ac0: 0x46066181  sub.s       $f6, $f12, $f6
    ctx->pc = 0x146ac0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x146ac4: 0x0  nop
    ctx->pc = 0x146ac4u;
    // NOP
    // 0x146ac8: 0x0  nop
    ctx->pc = 0x146ac8u;
    // NOP
    // 0x146acc: 0x46080b43  div.s       $f13, $f1, $f8
    ctx->pc = 0x146accu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[8]); }
    // 0x146ad0: 0x0  nop
    ctx->pc = 0x146ad0u;
    // NOP
    // 0x146ad4: 0x0  nop
    ctx->pc = 0x146ad4u;
    // NOP
    // 0x146ad8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x146ad8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x146adc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146ADCu;
    {
        const bool branch_taken_0x146adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146ADCu;
        // 0x146ae0: 0x46051a42  mul.s       $f9, $f3, $f5 (Delay Slot)
        ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146adc) {
            ctx->pc = 0x146AECu;
            goto label_146aec;
        }
    }
    ctx->pc = 0x146AE4u;
    // 0x146ae4: 0x460a39c2  mul.s       $f7, $f7, $f10
    ctx->pc = 0x146ae4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x146ae8: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x146ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
label_146aec:
    // 0x146aec: 0x46093281  sub.s       $f10, $f6, $f9
    ctx->pc = 0x146aecu;
    ctx->f[10] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x146af0: 0xc7808198  lwc1        $f0, -0x7E68($gp)
    ctx->pc = 0x146af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146af4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x146af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x146af8: 0x460032c2  mul.s       $f11, $f6, $f0
    ctx->pc = 0x146af8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x146afc: 0xc781819c  lwc1        $f1, -0x7E64($gp)
    ctx->pc = 0x146afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146b00: 0x460930c0  add.s       $f3, $f6, $f9
    ctx->pc = 0x146b00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x146b04: 0x46055034  c.lt.s      $f10, $f5
    ctx->pc = 0x146b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b08: 0x46072200  add.s       $f8, $f4, $f7
    ctx->pc = 0x146b08u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x146b0c: 0x46015a40  add.s       $f9, $f11, $f1
    ctx->pc = 0x146b0cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x146b10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146B10u;
    {
        const bool branch_taken_0x146b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B10u;
        // 0x146b14: 0x46072041  sub.s       $f1, $f4, $f7 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b10) {
            ctx->pc = 0x146B2Cu;
            goto label_146b2c;
        }
    }
    ctx->pc = 0x146B18u;
    // 0x146b18: 0x46062801  sub.s       $f0, $f5, $f6
    ctx->pc = 0x146b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x146b1c: 0x46002a86  mov.s       $f10, $f5
    ctx->pc = 0x146b1cu;
    ctx->f[10] = FPU_MOV_S(ctx->f[5]);
    // 0x146b20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146b24: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x146b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x146b28: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x146b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_146b2c:
    // 0x146b2c: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x146b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146B30u;
    {
        const bool branch_taken_0x146b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b30) {
            ctx->pc = 0x146B4Cu;
            goto label_146b4c;
        }
    }
    ctx->pc = 0x146B38u;
    // 0x146b38: 0x46066001  sub.s       $f0, $f12, $f6
    ctx->pc = 0x146b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x146b3c: 0x460060c6  mov.s       $f3, $f12
    ctx->pc = 0x146b3cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[12]);
    // 0x146b40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146b44: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x146b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x146b48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x146b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_146b4c:
    // 0x146b4c: 0x460a5834  c.lt.s      $f11, $f10
    ctx->pc = 0x146b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b50: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x146B50u;
    {
        const bool branch_taken_0x146b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b50) {
            ctx->pc = 0x146B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B50u;
            // 0x146b54: 0x46065801  sub.s       $f0, $f11, $f6 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x146B68u;
            goto label_146b68;
        }
    }
    ctx->pc = 0x146B58u;
    // 0x146b58: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x146b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146B5Cu;
    {
        const bool branch_taken_0x146b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B5Cu;
        // 0x146b60: 0x460052c6  mov.s       $f11, $f10 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b5c) {
            ctx->pc = 0x146B6Cu;
            goto label_146b6c;
        }
    }
    ctx->pc = 0x146B64u;
    // 0x146b64: 0x0  nop
    ctx->pc = 0x146b64u;
    // NOP
label_146b68:
    // 0x146b68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_146b6c:
    // 0x146b6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x146b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x146b70: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x146b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x146B74u;
    {
        const bool branch_taken_0x146b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B74u;
        // 0x146b78: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b74) {
            ctx->pc = 0x146B88u;
            goto label_146b88;
        }
    }
    ctx->pc = 0x146B7Cu;
    // 0x146b7c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x146b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146B80u;
    {
        const bool branch_taken_0x146b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B80u;
        // 0x146b84: 0x46001a46  mov.s       $f9, $f3 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b80) {
            ctx->pc = 0x146B90u;
            goto label_146b90;
        }
    }
    ctx->pc = 0x146B88u;
label_146b88:
    // 0x146b88: 0x46064801  sub.s       $f0, $f9, $f6
    ctx->pc = 0x146b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x146b8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_146b90:
    // 0x146b90: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x146b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x146b94: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x146b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x146b98: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146b9c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x146b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x146ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146ba4: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x146BA4u;
    {
        const bool branch_taken_0x146ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ba4) {
            ctx->pc = 0x146BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146BA4u;
            // 0x146ba8: 0xe7aa008c  swc1        $f10, 0x8C($sp) (Delay Slot)
            { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146C44u;
            goto label_146c44;
        }
    }
    ctx->pc = 0x146BACu;
    // 0x146bac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x146bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146bb0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x146bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146bb4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x146BB4u;
    {
        const bool branch_taken_0x146bb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146bb4) {
            ctx->pc = 0x146BF4u;
            goto label_146bf4;
        }
    }
    ctx->pc = 0x146BBCu;
    // 0x146bbc: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x146bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x146bc0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x146bc0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x146bc4: 0x46024034  c.lt.s      $f8, $f2
    ctx->pc = 0x146bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146bc8: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x146bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x146bcc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x146bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x146bd0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x146bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x146bd4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x146bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x146bd8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146BD8u;
    {
        const bool branch_taken_0x146bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BD8u;
        // 0x146bdc: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bd8) {
            ctx->pc = 0x146BF4u;
            goto label_146bf4;
        }
    }
    ctx->pc = 0x146BE0u;
    // 0x146be0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x146be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x146be4: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x146be4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
    // 0x146be8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x146be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x146bec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x146becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x146bf0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x146bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_146bf4:
    // 0x146bf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146bfc: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x146bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c00: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x146C00u;
    {
        const bool branch_taken_0x146c00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146c00) {
            ctx->pc = 0x146C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146C00u;
            // 0x146c04: 0xe7aa008c  swc1        $f10, 0x8C($sp) (Delay Slot)
            { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146C44u;
            goto label_146c44;
        }
    }
    ctx->pc = 0x146C08u;
    // 0x146c08: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x146c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x146c0c: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x146c0cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
    // 0x146c10: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x146c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c14: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x146c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x146c18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x146c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x146c1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x146c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x146c20: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x146c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x146c24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146C24u;
    {
        const bool branch_taken_0x146c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C24u;
        // 0x146c28: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c24) {
            ctx->pc = 0x146C40u;
            goto label_146c40;
        }
    }
    ctx->pc = 0x146C2Cu;
    // 0x146c2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x146c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x146c30: 0x46004046  mov.s       $f1, $f8
    ctx->pc = 0x146c30u;
    ctx->f[1] = FPU_MOV_S(ctx->f[8]);
    // 0x146c34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x146c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x146c38: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x146c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x146c3c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x146c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_146c40:
    // 0x146c40: 0xe7aa008c  swc1        $f10, 0x8C($sp)
    ctx->pc = 0x146c40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_146c44:
    // 0x146c44: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x146c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x146c48: 0xe7ab009c  swc1        $f11, 0x9C($sp)
    ctx->pc = 0x146c48u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x146c4c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x146c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c50: 0xe7a900ac  swc1        $f9, 0xAC($sp)
    ctx->pc = 0x146c50u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x146c54: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146c58: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x146c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x146c5c: 0xe7a800b8  swc1        $f8, 0xB8($sp)
    ctx->pc = 0x146c5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x146c60: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x146c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x146c64: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x146c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x146c68: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x146c68u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x146c6c: 0xe7a80088  swc1        $f8, 0x88($sp)
    ctx->pc = 0x146c6cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x146c70: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x146c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x146c74: 0xe7ab0094  swc1        $f11, 0x94($sp)
    ctx->pc = 0x146c74u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x146c78: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x146c78u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x146c7c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x146c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x146c80: 0xe7a900a4  swc1        $f9, 0xA4($sp)
    ctx->pc = 0x146c80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x146c84: 0xe7a800a8  swc1        $f8, 0xA8($sp)
    ctx->pc = 0x146c84u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x146c88: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x146c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x146c8c: 0x0  nop
    ctx->pc = 0x146c8cu;
    // NOP
label_146c90:
    // 0x146c90: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x146c90u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146c94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x146c94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146c98: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x146c98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x146c9c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x146c9cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x146ca0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x146ca0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x146ca4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x146ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x146ca8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x146ca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x146cac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x146cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x146cb0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x146cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x146cb4: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x146cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x146cb8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x146cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146cbc: 0x0  nop
    ctx->pc = 0x146cbcu;
    // NOP
    // 0x146cc0: 0x0  nop
    ctx->pc = 0x146cc0u;
    // NOP
    // 0x146cc4: 0x0  nop
    ctx->pc = 0x146cc4u;
    // NOP
    // 0x146cc8: 0x481fff1  bgez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x146CC8u;
    {
        const bool branch_taken_0x146cc8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x146CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CC8u;
        // 0x146ccc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cc8) {
            ctx->pc = 0x146C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c90;
        }
    }
    ctx->pc = 0x146CD0u;
    // 0x146cd0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146cd4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x146cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cd8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x146cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x146cdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146ce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146CE0u;
    {
        const bool branch_taken_0x146ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CE0u;
        // 0x146ce4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ce0) {
            ctx->pc = 0x146CF8u;
            goto label_146cf8;
        }
    }
    ctx->pc = 0x146CE8u;
    // 0x146ce8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x146ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cec: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146cf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146CF0u;
    {
        const bool branch_taken_0x146cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CF0u;
        // 0x146cf4: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cf0) {
            ctx->pc = 0x146D04u;
            goto label_146d04;
        }
    }
    ctx->pc = 0x146CF8u;
label_146cf8:
    // 0x146cf8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x146cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cfc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146d00: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x146d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_146d04:
    // 0x146d04: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x146d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x146d08: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x146d08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x146d0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x146d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x146d10: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x146d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x146d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x146d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d1c: 0xc061228  jal         func_1848A0
    ctx->pc = 0x146D1Cu;
    SET_GPR_U32(ctx, 31, 0x146D24u);
    ctx->pc = 0x146D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D1Cu;
    // 0x146d20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848A0u, 0x146D1Cu, 0x146D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D24u;
label_146d24:
    // 0x146d24: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x146d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146d28: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x146d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x146d2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x146d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d30: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x146d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x146d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x146d38: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x146d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x146d3c: 0x1101823  subu        $v1, $t0, $s0
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x146d40: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x146d44: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x146d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x146d48: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x146d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x146d4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x146d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x146d50: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x146d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146d54: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x146d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x146d58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146d5c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x146d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d60: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x146d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x146d64: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x146d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x146d68: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x146d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x146d6c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x146d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146d70: 0x240604e2  addiu       $a2, $zero, 0x4E2
    ctx->pc = 0x146d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x146d74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146d7c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x146d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x146d80: 0x55900  sll         $t3, $a1, 4
    ctx->pc = 0x146d80u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x146d84: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x146d84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x146d88: 0x264a0230  addiu       $t2, $s2, 0x230
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x146d8c: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x146d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x146d90: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146d94: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x146d94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x146d98: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x146d9c: 0x240fff80  addiu       $t7, $zero, -0x80
    ctx->pc = 0x146d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x146da0: 0x27ae00c0  addiu       $t6, $sp, 0xC0
    ctx->pc = 0x146da0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146da4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146da8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x146da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146dac: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_146db0:
    // 0x146db0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146db4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x146db8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x146dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146dc0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146DC0u;
    {
        const bool branch_taken_0x146dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DC0u;
        // 0x146dc4: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dc0) {
            ctx->pc = 0x146DCCu;
            goto label_146dcc;
        }
    }
    ctx->pc = 0x146DC8u;
    // 0x146dc8: 0xa3af00c3  sb          $t7, 0xC3($sp)
    ctx->pc = 0x146dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 15));
label_146dcc:
    // 0x146dcc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146dd0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x146dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x146dd4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x146dd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146ddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x146DDCu;
    {
        const bool branch_taken_0x146ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DDCu;
        // 0x146de0: 0x38630003  xori        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ddc) {
            ctx->pc = 0x146E0Cu;
            goto label_146e0c;
        }
    }
    ctx->pc = 0x146DE4u;
    // 0x146de4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x146DE4u;
    {
        const bool branch_taken_0x146de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146de4) {
            ctx->pc = 0x146DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146DE4u;
            // 0x146de8: 0xc4e1fff8  lwc1        $f1, -0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E10u;
            goto label_146e10;
        }
    }
    ctx->pc = 0x146DECu;
    // 0x146dec: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x146decu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x146df0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x146df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x146df4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x146df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x146df8: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x146dfc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x146dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x146e00: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x146e00u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x146e04: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x146e04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x146e08: 0xa3a300c3  sb          $v1, 0xC3($sp)
    ctx->pc = 0x146e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 3));
label_146e0c:
    // 0x146e0c: 0xc4e1fff8  lwc1        $f1, -0x8($a3)
    ctx->pc = 0x146e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_146e10:
    // 0x146e10: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146e14: 0xc4e0fffc  lwc1        $f0, -0x4($a3)
    ctx->pc = 0x146e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e18: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x146e1c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x146e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x146e20: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x146e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x146e24: 0xe5020008  swc1        $f2, 0x8($t0)
    ctx->pc = 0x146e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x146e28: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x146e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x146e2c: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x146e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x146e30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146e34: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x146e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x146e38: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x146e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x146e3c: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x146e3cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146e40: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x146e40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x146e44: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x146e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x146e48: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x146e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x146e4c: 0xac6b0008  sw          $t3, 0x8($v1)
    ctx->pc = 0x146e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 11));
    // 0x146e50: 0x25030050  addiu       $v1, $t0, 0x50
    ctx->pc = 0x146e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x146e54: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x146e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x146e58: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x146e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x146e5c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x146e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146e60: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x146e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146e64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x146e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x146e68: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x146e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x146e6c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x146e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x146e70: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x146e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x146e74: 0xfcad0008  sd          $t5, 0x8($a1)
    ctx->pc = 0x146e74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 13));
    // 0x146e78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x146e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x146e7c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x146e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x146e80: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x146e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x146e84: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x146e84u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x146e88: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x146e88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x146e8c: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x146e90: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x146e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x146e94: 0xac6b0008  sw          $t3, 0x8($v1)
    ctx->pc = 0x146e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 11));
    // 0x146e98: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x146e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x146e9c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x146e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x146ea0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x146ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x146ea4: 0x581ffc2  bgez        $t4, . + 4 + (-0x3E << 2)
    ctx->pc = 0x146EA4u;
    {
        const bool branch_taken_0x146ea4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x146EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EA4u;
        // 0x146ea8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ea4) {
            ctx->pc = 0x146DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146db0;
        }
    }
    ctx->pc = 0x146EACu;
    // 0x146eac: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x146eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_146eb0:
    // 0x146eb0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x146eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146eb4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x146eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x146eb8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x146eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x146ebc: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x146ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x146ec0: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x146ec0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x146ec4: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x146ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x146ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x146EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EC8u;
        // 0x146ecc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146ED0u;
}
