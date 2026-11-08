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

// Function: entry_00199b60
// Address: 0x199b60 - 0x199b68
void entry_00199b60_0x199b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b60_0x199b60");
#endif

    ctx->pc = 0x199b60u;

    // 0x199b60: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x199B60u;
    {
        const bool branch_taken_0x199b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x199b60) {
            ctx->pc = 0x199B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199B60u;
            // 0x199b64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B20u;
            return;
        }
    }
    ctx->pc = 0x199B68u;
}
