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

// Function: entry_0019e24c
// Address: 0x19e24c - 0x19e270
void entry_0019e24c_0x19e24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e24c_0x19e24c");
#endif

    ctx->pc = 0x19e24cu;

    // 0x19e24c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e250: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E250u;
    {
        const bool branch_taken_0x19e250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E250u;
        // 0x19e254: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e250) {
            ctx->pc = 0x19E270u;
            return;
        }
    }
    ctx->pc = 0x19E258u;
    // 0x19e258: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x19e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e25c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e264: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19e264u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x19e268: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e26c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x19e270u;
}
