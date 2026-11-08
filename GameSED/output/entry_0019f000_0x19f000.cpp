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

// Function: entry_0019f000
// Address: 0x19f000 - 0x19f00c
void entry_0019f000_0x19f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f000_0x19f000");
#endif

    ctx->pc = 0x19f000u;

    // 0x19f000: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x19f000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f004: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x19F004u;
    {
        const bool branch_taken_0x19f004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f004) {
            ctx->pc = 0x19F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F004u;
            // 0x19f008: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F01Cu;
            return;
        }
    }
    ctx->pc = 0x19F00Cu;
}
