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

// Function: entry_0019dcc8
// Address: 0x19dcc8 - 0x19dcd8
void entry_0019dcc8_0x19dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dcc8_0x19dcc8");
#endif

    ctx->pc = 0x19dcc8u;

    // 0x19dcc8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x19dcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19dccc: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dcccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dcd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DCD0u;
    {
        const bool branch_taken_0x19dcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dcd0) {
            ctx->pc = 0x19DCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DCD0u;
            // 0x19dcd4: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DCD8u;
            return;
        }
    }
    ctx->pc = 0x19DCD8u;
}
