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

// Function: entry_00146a08
// Address: 0x146a08 - 0x146aec
void entry_00146a08_0x146a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146a08_0x146a08");
#endif

    ctx->pc = 0x146a08u;

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
            return;
        }
    }
    ctx->pc = 0x146AE4u;
    // 0x146ae4: 0x460a39c2  mul.s       $f7, $f7, $f10
    ctx->pc = 0x146ae4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x146ae8: 0x460a2102  mul.s       $f4, $f4, $f10
    ctx->pc = 0x146ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[10]);
    ctx->pc = 0x146aecu;
}
