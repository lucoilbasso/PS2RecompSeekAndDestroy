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

// Function: entry_00181d00
// Address: 0x181d00 - 0x181d0c
void entry_00181d00_0x181d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181d00_0x181d00");
#endif

    ctx->pc = 0x181d00u;

    // 0x181d00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x181d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181d04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181D04u;
    {
        const bool branch_taken_0x181d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181d04) {
            ctx->pc = 0x181D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D04u;
            // 0x181d08: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181D0Cu;
            return;
        }
    }
    ctx->pc = 0x181D0Cu;
}
