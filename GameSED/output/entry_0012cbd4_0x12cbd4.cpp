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

// Function: entry_0012cbd4
// Address: 0x12cbd4 - 0x12cbe4
void entry_0012cbd4_0x12cbd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cbd4_0x12cbd4");
#endif

    ctx->pc = 0x12cbd4u;

    // 0x12cbd4: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x12cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbd8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x12cbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cbdc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12CBDCu;
    {
        const bool branch_taken_0x12cbdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cbdc) {
            ctx->pc = 0x12CBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CBDCu;
            // 0x12cbe0: 0xe6040128  swc1        $f4, 0x128($s0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CBE4u;
            return;
        }
    }
    ctx->pc = 0x12CBE4u;
}
