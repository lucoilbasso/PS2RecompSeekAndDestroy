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

// Function: entry_0016cbcc
// Address: 0x16cbcc - 0x16cbec
void entry_0016cbcc_0x16cbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cbcc_0x16cbcc");
#endif

    ctx->pc = 0x16cbccu;

    // 0x16cbcc: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16cbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cbd0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16CBD0u;
    {
        const bool branch_taken_0x16cbd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cbd0) {
            ctx->pc = 0x16CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBD0u;
            // 0x16cbd4: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBECu;
            return;
        }
    }
    ctx->pc = 0x16CBD8u;
    // 0x16cbd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16cbdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cbe0: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16cbe0u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16cbe4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16cbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16cbe8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16cbecu;
}
