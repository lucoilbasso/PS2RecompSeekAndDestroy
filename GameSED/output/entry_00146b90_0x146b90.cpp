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

// Function: entry_00146b90
// Address: 0x146b90 - 0x146bf4
void entry_00146b90_0x146b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146b90_0x146b90");
#endif

    ctx->pc = 0x146b90u;

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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x146bf4u;
}
