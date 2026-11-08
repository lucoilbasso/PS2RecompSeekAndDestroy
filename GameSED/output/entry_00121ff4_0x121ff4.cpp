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

// Function: entry_00121ff4
// Address: 0x121ff4 - 0x122008
void entry_00121ff4_0x121ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ff4_0x121ff4");
#endif

    ctx->pc = 0x121ff4u;

    // 0x121ff4: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x121ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121ffc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x121ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122000: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x122000u;
    {
        const bool branch_taken_0x122000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122000) {
            ctx->pc = 0x122004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122000u;
            // 0x122004: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x122008u;
            return;
        }
    }
    ctx->pc = 0x122008u;
}
