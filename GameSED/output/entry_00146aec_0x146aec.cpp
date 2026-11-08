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

// Function: entry_00146aec
// Address: 0x146aec - 0x146b2c
void entry_00146aec_0x146aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146aec_0x146aec");
#endif

    ctx->pc = 0x146aecu;

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
            return;
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
    ctx->pc = 0x146b2cu;
}
