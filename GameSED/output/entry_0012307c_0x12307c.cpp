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

// Function: entry_0012307c
// Address: 0x12307c - 0x123088
void entry_0012307c_0x12307c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012307c_0x12307c");
#endif

    ctx->pc = 0x12307cu;

    // 0x12307c: 0x1640fe3e  bnez        $s2, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x12307Cu;
    {
        const bool branch_taken_0x12307c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x123080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12307Cu;
        // 0x123080: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12307c) {
            ctx->pc = 0x122978u;
            return;
        }
    }
    ctx->pc = 0x123084u;
    // 0x123084: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x123084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x123088u;
}
