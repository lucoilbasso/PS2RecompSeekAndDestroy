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

// Function: entry_0019e270
// Address: 0x19e270 - 0x19e294
void entry_0019e270_0x19e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e270_0x19e270");
#endif

    ctx->pc = 0x19e270u;

    // 0x19e270: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19e270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e274: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E274u;
    {
        const bool branch_taken_0x19e274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E274u;
        // 0x19e278: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e274) {
            ctx->pc = 0x19E294u;
            return;
        }
    }
    ctx->pc = 0x19E27Cu;
    // 0x19e27c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x19e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e280: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19e284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e288: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x19e288u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x19e28c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19e28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19e290: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x19e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x19e294u;
}
