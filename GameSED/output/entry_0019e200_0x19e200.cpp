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

// Function: entry_0019e200
// Address: 0x19e200 - 0x19e228
void entry_0019e200_0x19e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e200_0x19e200");
#endif

    ctx->pc = 0x19e200u;

    // 0x19e200: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19e200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19e204: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e208: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E208u;
    {
        const bool branch_taken_0x19e208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E208u;
        // 0x19e20c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e208) {
            ctx->pc = 0x19E228u;
            return;
        }
    }
    ctx->pc = 0x19E210u;
    // 0x19e210: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e21c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19e21cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x19e220: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19e220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e224: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x19e228u;
}
