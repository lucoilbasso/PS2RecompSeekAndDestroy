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

// Function: entry_0016cc0c
// Address: 0x16cc0c - 0x16cc2c
void entry_0016cc0c_0x16cc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cc0c_0x16cc0c");
#endif

    ctx->pc = 0x16cc0cu;

    // 0x16cc0c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16cc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cc10: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16CC10u;
    {
        const bool branch_taken_0x16cc10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cc10) {
            ctx->pc = 0x16CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CC10u;
            // 0x16cc14: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC2Cu;
            return;
        }
    }
    ctx->pc = 0x16CC18u;
    // 0x16cc18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16cc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16cc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cc20: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16cc20u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16cc24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16cc28: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16cc2cu;
}
