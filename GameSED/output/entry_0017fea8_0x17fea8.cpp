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

// Function: entry_0017fea8
// Address: 0x17fea8 - 0x17fed8
void entry_0017fea8_0x17fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fea8_0x17fea8");
#endif

    ctx->pc = 0x17fea8u;

    // 0x17fea8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x17fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17feac: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x17feacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x17feb0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17feb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17feb4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17feb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17feb8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17FEB8u;
    {
        const bool branch_taken_0x17feb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17feb8) {
            ctx->pc = 0x17FED8u;
            return;
        }
    }
    ctx->pc = 0x17FEC0u;
    // 0x17fec0: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x17fec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x17fec4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x17fec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x17fec8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x17fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fecc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17feccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17fed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17FED0u;
    {
        const bool branch_taken_0x17fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FED0u;
        // 0x17fed4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fed0) {
            ctx->pc = 0x17FEF4u;
            return;
        }
    }
    ctx->pc = 0x17FED8u;
}
