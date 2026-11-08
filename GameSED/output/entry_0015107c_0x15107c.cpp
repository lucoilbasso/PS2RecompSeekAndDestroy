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

// Function: entry_0015107c
// Address: 0x15107c - 0x1510cc
void entry_0015107c_0x15107c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015107c_0x15107c");
#endif

    ctx->pc = 0x15107cu;

    // 0x15107c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x15107cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x151080: 0xc6000684  lwc1        $f0, 0x684($s0)
    ctx->pc = 0x151080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151084: 0x46061832  c.eq.s      $f3, $f6
    ctx->pc = 0x151084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151088: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15108c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x15108cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x151090: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x151090u;
    {
        const bool branch_taken_0x151090 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151090u;
        // 0x151094: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151090) {
            ctx->pc = 0x151160u;
            return;
        }
    }
    ctx->pc = 0x151098u;
    // 0x151098: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x151098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15109c: 0xc60403b8  lwc1        $f4, 0x3B8($s0)
    ctx->pc = 0x15109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1510a0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1510F0u;
            return;
        }
    }
    ctx->pc = 0x1510A8u;
    // 0x1510a8: 0x460311e9  min.s       $f7, $f2, $f3
    ctx->pc = 0x1510a8u;
    ctx->f[7] = std::min(ctx->f[2], ctx->f[3]);
    // 0x1510ac: 0x460038c6  mov.s       $f3, $f7
    ctx->pc = 0x1510acu;
    ctx->f[3] = FPU_MOV_S(ctx->f[7]);
    // 0x1510b0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B0u;
        // 0x1510b4: 0x46003886  mov.s       $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x1510CCu;
            return;
        }
    }
    ctx->pc = 0x1510B8u;
    // 0x1510b8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1510b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1510bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1510bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510c0: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x1510c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1510c4: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x1510c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1510c8: 0x460601e8  max.s       $f7, $f0, $f6
    ctx->pc = 0x1510c8u;
    ctx->f[7] = std::max(ctx->f[0], ctx->f[6]);
    ctx->pc = 0x1510ccu;
}
