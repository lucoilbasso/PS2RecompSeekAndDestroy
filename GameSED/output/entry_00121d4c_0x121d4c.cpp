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

// Function: entry_00121d4c
// Address: 0x121d4c - 0x121da0
void entry_00121d4c_0x121d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121d4c_0x121d4c");
#endif

    ctx->pc = 0x121d4cu;

    // 0x121d4c: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x121D4Cu;
    {
        const bool branch_taken_0x121d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d4c) {
            ctx->pc = 0x121D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121D4Cu;
            // 0x121d50: 0xc6010160  lwc1        $f1, 0x160($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EE8u;
            return;
        }
    }
    ctx->pc = 0x121D54u;
    // 0x121d54: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x121d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121d58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121d5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121d60: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x121D60u;
    {
        const bool branch_taken_0x121d60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x121d60) {
            ctx->pc = 0x121D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121D60u;
            // 0x121d64: 0x8e0200f8  lw          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121DA0u;
            return;
        }
    }
    ctx->pc = 0x121D68u;
    // 0x121d68: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x121d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121d6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121d70: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x121d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x121d74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121d78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x121d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121d80: 0xc6030100  lwc1        $f3, 0x100($s0)
    ctx->pc = 0x121d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x121d84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121d88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121d8c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x121d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x121d90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x121d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x121d94: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x121d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x121d98: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x121D98u;
    {
        const bool branch_taken_0x121d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D98u;
        // 0x121d9c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d98) {
            ctx->pc = 0x121F08u;
            return;
        }
    }
    ctx->pc = 0x121DA0u;
}
