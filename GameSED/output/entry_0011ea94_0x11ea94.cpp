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

// Function: entry_0011ea94
// Address: 0x11ea94 - 0x11eac8
void entry_0011ea94_0x11ea94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea94_0x11ea94");
#endif

    ctx->pc = 0x11ea94u;

    // 0x11ea94: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x11ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ea98: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x11ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ea9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11ea9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11eaa0: 0xa203004b  sb          $v1, 0x4B($s0)
    ctx->pc = 0x11eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x11eaa4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x11eaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11eaa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11eaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11eaac: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x11eaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eab0: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x11eab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x11eab4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11EAB4u;
    {
        const bool branch_taken_0x11eab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAB4u;
        // 0x11eab8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eab4) {
            ctx->pc = 0x11EAC8u;
            return;
        }
    }
    ctx->pc = 0x11EABCu;
    // 0x11eabc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11EABCu;
    {
        const bool branch_taken_0x11eabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EABCu;
        // 0x11eac0: 0xe603004c  swc1        $f3, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eabc) {
            ctx->pc = 0x11EADCu;
            return;
        }
    }
    ctx->pc = 0x11EAC4u;
    // 0x11eac4: 0x0  nop
    ctx->pc = 0x11eac4u;
    // NOP
    ctx->pc = 0x11eac8u;
}
