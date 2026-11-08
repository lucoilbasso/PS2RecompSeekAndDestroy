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

// Function: entry_00121fac
// Address: 0x121fac - 0x121fe8
void entry_00121fac_0x121fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121fac_0x121fac");
#endif

    ctx->pc = 0x121facu;

    // 0x121fac: 0xc60200ec  lwc1        $f2, 0xEC($s0)
    ctx->pc = 0x121facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121fb0: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x121fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121fb4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x121FB4u;
    {
        const bool branch_taken_0x121fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121fb4) {
            ctx->pc = 0x121FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121FB4u;
            // 0x121fb8: 0x8e0200e4  lw          $v0, 0xE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121FE8u;
            return;
        }
    }
    ctx->pc = 0x121FBCu;
    // 0x121fbc: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x121fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x121fc0: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x121fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x121fc4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x121fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121fc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121fcc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x121fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x121fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121fd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121fdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121FE0u;
    {
        const bool branch_taken_0x121fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FE0u;
        // 0x121fe4: 0xe60100d4  swc1        $f1, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fe0) {
            ctx->pc = 0x121FF4u;
            return;
        }
    }
    ctx->pc = 0x121FE8u;
}
