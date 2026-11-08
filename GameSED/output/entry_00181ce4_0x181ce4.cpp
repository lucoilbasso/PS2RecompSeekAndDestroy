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

// Function: entry_00181ce4
// Address: 0x181ce4 - 0x181cf0
void entry_00181ce4_0x181ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181ce4_0x181ce4");
#endif

    ctx->pc = 0x181ce4u;

    // 0x181ce4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x181ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181ce8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CE8u;
    {
        const bool branch_taken_0x181ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181ce8) {
            ctx->pc = 0x181CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CE8u;
            // 0x181cec: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CF0u;
            return;
        }
    }
    ctx->pc = 0x181CF0u;
}
