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

// Function: entry_0013b604
// Address: 0x13b604 - 0x13b614
void entry_0013b604_0x13b604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b604_0x13b604");
#endif

    ctx->pc = 0x13b604u;

    // 0x13b604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b608: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13b608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b60c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13B60Cu;
    {
        const bool branch_taken_0x13b60c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b60c) {
            ctx->pc = 0x13B610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B60Cu;
            // 0x13b610: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B614u;
            return;
        }
    }
    ctx->pc = 0x13B614u;
}
