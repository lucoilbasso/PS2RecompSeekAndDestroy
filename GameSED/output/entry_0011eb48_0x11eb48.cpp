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

// Function: entry_0011eb48
// Address: 0x11eb48 - 0x11eb6c
void entry_0011eb48_0x11eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb48_0x11eb48");
#endif

    ctx->pc = 0x11eb48u;

    // 0x11eb48: 0xc4c10060  lwc1        $f1, 0x60($a2)
    ctx->pc = 0x11eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11eb4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11eb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11eb50: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x11eb50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb54: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB54u;
    {
        const bool branch_taken_0x11eb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11eb54) {
            ctx->pc = 0x11EB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EB54u;
            // 0x11eb58: 0xc4c1005c  lwc1        $f1, 0x5C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EB6Cu;
            return;
        }
    }
    ctx->pc = 0x11EB5Cu;
    // 0x11eb5c: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x11eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eb60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11eb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11eb64: 0xe4c0005c  swc1        $f0, 0x5C($a2)
    ctx->pc = 0x11eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x11eb68: 0xc4c1005c  lwc1        $f1, 0x5C($a2)
    ctx->pc = 0x11eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x11eb6cu;
}
