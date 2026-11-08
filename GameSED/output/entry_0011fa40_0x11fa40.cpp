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

// Function: entry_0011fa40
// Address: 0x11fa40 - 0x11fa60
void entry_0011fa40_0x11fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa40_0x11fa40");
#endif

    ctx->pc = 0x11fa40u;

    // 0x11fa40: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x11fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11fa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fa48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11fa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11fa4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11FA4Cu;
    {
        const bool branch_taken_0x11fa4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11fa4c) {
            ctx->pc = 0x11FA60u;
            return;
        }
    }
    ctx->pc = 0x11FA54u;
    // 0x11fa54: 0xc780808c  lwc1        $f0, -0x7F74($gp)
    ctx->pc = 0x11fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA58u;
    {
        const bool branch_taken_0x11fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA58u;
        // 0x11fa5c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa58) {
            ctx->pc = 0x11FA68u;
            return;
        }
    }
    ctx->pc = 0x11FA60u;
}
