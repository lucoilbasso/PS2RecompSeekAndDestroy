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

// Function: entry_00180e24
// Address: 0x180e24 - 0x180e30
void entry_00180e24_0x180e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180e24_0x180e24");
#endif

    ctx->pc = 0x180e24u;

    // 0x180e24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180e24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180e28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180E28u;
    {
        const bool branch_taken_0x180e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180e28) {
            ctx->pc = 0x180E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E28u;
            // 0x180e2c: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E30u;
            return;
        }
    }
    ctx->pc = 0x180E30u;
}
