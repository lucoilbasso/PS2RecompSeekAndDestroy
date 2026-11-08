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

// Function: entry_0019e294
// Address: 0x19e294 - 0x19e2b8
void entry_0019e294_0x19e294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e294_0x19e294");
#endif

    ctx->pc = 0x19e294u;

    // 0x19e294: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e298: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E298u;
    {
        const bool branch_taken_0x19e298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E298u;
        // 0x19e29c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e298) {
            ctx->pc = 0x19E2B8u;
            return;
        }
    }
    ctx->pc = 0x19E2A0u;
    // 0x19e2a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e2a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19e2a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e2ac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x19e2acu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x19e2b0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19e2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19e2b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x19e2b8u;
}
