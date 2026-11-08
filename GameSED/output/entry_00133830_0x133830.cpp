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

// Function: entry_00133830
// Address: 0x133830 - 0x13383c
void entry_00133830_0x133830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133830_0x133830");
#endif

    ctx->pc = 0x133830u;

    // 0x133830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133834: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x133834u;
    {
        const bool branch_taken_0x133834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x133834) {
            ctx->pc = 0x133838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133834u;
            // 0x133838: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13383Cu;
            return;
        }
    }
    ctx->pc = 0x13383Cu;
}
