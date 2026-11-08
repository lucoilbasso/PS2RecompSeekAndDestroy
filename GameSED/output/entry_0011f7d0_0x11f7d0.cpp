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

// Function: entry_0011f7d0
// Address: 0x11f7d0 - 0x11f7e0
void entry_0011f7d0_0x11f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f7d0_0x11f7d0");
#endif

    ctx->pc = 0x11f7d0u;

    // 0x11f7d0: 0x4615a800  add.s       $f0, $f21, $f21
    ctx->pc = 0x11f7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x11f7d4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x11f7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f7d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x11F7D8u;
    {
        const bool branch_taken_0x11f7d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f7d8) {
            ctx->pc = 0x11F7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F7D8u;
            // 0x11f7dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F7E0u;
            return;
        }
    }
    ctx->pc = 0x11F7E0u;
}
