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

// Function: entry_0011e090
// Address: 0x11e090 - 0x11e098
void entry_0011e090_0x11e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e090_0x11e090");
#endif

    ctx->pc = 0x11e090u;

    // 0x11e090: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E090u;
    {
        const bool branch_taken_0x11e090 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e090) {
            ctx->pc = 0x11E094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E090u;
            // 0x11e094: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0A0u;
            return;
        }
    }
    ctx->pc = 0x11E098u;
}
