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

// Function: entry_0016e974
// Address: 0x16e974 - 0x16e994
void entry_0016e974_0x16e974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e974_0x16e974");
#endif

    ctx->pc = 0x16e974u;

    // 0x16e974: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16e974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e978: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E978u;
    {
        const bool branch_taken_0x16e978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e978) {
            ctx->pc = 0x16E97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E978u;
            // 0x16e97c: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E994u;
            return;
        }
    }
    ctx->pc = 0x16E980u;
    // 0x16e980: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16e980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16e984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e988: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16e988u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16e98c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16e98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16e990: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16e994u;
}
