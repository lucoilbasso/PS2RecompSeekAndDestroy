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

// Function: entry_0019f070
// Address: 0x19f070 - 0x19f080
void entry_0019f070_0x19f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f070_0x19f070");
#endif

    ctx->pc = 0x19f070u;

    // 0x19f070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f074: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x19f074u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f078: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x19F078u;
    {
        const bool branch_taken_0x19f078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f078) {
            ctx->pc = 0x19F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F078u;
            // 0x19f07c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F084u;
            return;
        }
    }
    ctx->pc = 0x19F080u;
}
