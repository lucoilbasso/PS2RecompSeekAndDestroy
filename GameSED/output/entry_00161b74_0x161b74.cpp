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

// Function: entry_00161b74
// Address: 0x161b74 - 0x161b7c
void entry_00161b74_0x161b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b74_0x161b74");
#endif

    ctx->pc = 0x161b74u;

    // 0x161b74: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x161B74u;
    {
        const bool branch_taken_0x161b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B74u;
        // 0x161b78: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b74) {
            ctx->pc = 0x161AF8u;
            return;
        }
    }
    ctx->pc = 0x161B7Cu;
}
