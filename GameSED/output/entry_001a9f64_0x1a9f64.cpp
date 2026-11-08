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

// Function: entry_001a9f64
// Address: 0x1a9f64 - 0x1a9fb0
void entry_001a9f64_0x1a9f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9f64_0x1a9f64");
#endif

    ctx->pc = 0x1a9f64u;

    // 0x1a9f64: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1a9f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9f68: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x1a9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a9f6c: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x1a9f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9f70: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x1a9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9f74: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x1a9f74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x1a9f78: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1a9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9f7c: 0x46002201  sub.s       $f8, $f4, $f0
    ctx->pc = 0x1a9f7cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1a9f80: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1a9f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9f84: 0x46020981  sub.s       $f6, $f1, $f2
    ctx->pc = 0x1a9f84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1a9f88: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x1a9f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1a9f8c: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x1a9f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x1a9f90: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x1a9f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1a9f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9f98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9f9c: 0x460001c4  c1          0x1C4
    ctx->pc = 0x1a9f9cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a9fa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a9fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9fa4: 0x46013832  c.eq.s      $f7, $f1
    ctx->pc = 0x1a9fa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9fa8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9FA8u;
    {
        const bool branch_taken_0x1a9fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9fa8) {
            ctx->pc = 0x1A9FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9FA8u;
            // 0x1a9fac: 0x46054882  mul.s       $f2, $f9, $f5 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9FD0u;
            return;
        }
    }
    ctx->pc = 0x1A9FB0u;
}
