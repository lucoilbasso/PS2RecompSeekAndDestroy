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

// Function: entry_0018ad9c
// Address: 0x18ad9c - 0x18ae30
void entry_0018ad9c_0x18ad9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ad9c_0x18ad9c");
#endif

    switch (ctx->pc) {
        case 0x18ada8u: goto label_18ada8;
        default: break;
    }

    ctx->pc = 0x18ad9cu;

    // 0x18ad9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ada0: 0xc061422  jal         func_185088
    ctx->pc = 0x18ADA0u;
    SET_GPR_U32(ctx, 31, 0x18ADA8u);
    ctx->pc = 0x18ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADA0u;
    // 0x18ada4: 0x24160010  addiu       $s6, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18ADA0u, 0x18ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ADA8u;
label_18ada8:
    // 0x18ada8: 0x26a300e0  addiu       $v1, $s5, 0xE0
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x18adac: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x18adb0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18adb4: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
    ctx->pc = 0x18ADB4u;
    {
        const bool branch_taken_0x18adb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADB4u;
        // 0x18adb8: 0x44b00b  movn        $s6, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adb4) {
            ctx->pc = 0x18AEB8u;
            return;
        }
    }
    ctx->pc = 0x18ADBCu;
    // 0x18adbc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x18adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18adc0: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x18adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x18adc4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18adc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18adc8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x18adc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18adcc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x18adccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18add0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x18add0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18add4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18add4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18add8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x18add8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18addc: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x18addcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x18ade0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18ade4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x18ade8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18ade8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18adec: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x18adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18adf0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18adf4: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x18adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18adf8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18adf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18adfc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x18adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x18ae00: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18ae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18ae04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18ae04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18ae08: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x18ae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x18ae0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18ae0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ae10: 0xc78385a8  lwc1        $f3, -0x7A58($gp)
    ctx->pc = 0x18ae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ae14: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x18ae18: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x18ae18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18ae1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x18ae1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x18ae20: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x18ae20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18ae24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18AE24u;
    {
        const bool branch_taken_0x18ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE24u;
        // 0x18ae28: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae24) {
            ctx->pc = 0x18AE30u;
            return;
        }
    }
    ctx->pc = 0x18AE2Cu;
    // 0x18ae2c: 0xc6220218  lwc1        $f2, 0x218($s1)
    ctx->pc = 0x18ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x18ae30u;
}
