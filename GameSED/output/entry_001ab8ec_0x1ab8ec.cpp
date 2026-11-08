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

// Function: entry_001ab8ec
// Address: 0x1ab8ec - 0x1ab8f8
void entry_001ab8ec_0x1ab8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab8ec_0x1ab8ec");
#endif

    ctx->pc = 0x1ab8ecu;

    // 0x1ab8ec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab8f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB8F0u;
    {
        const bool branch_taken_0x1ab8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F0u;
        // 0x1ab8f4: 0x24849818  addiu       $a0, $a0, -0x67E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f0) {
            ctx->pc = 0x1AB900u;
            return;
        }
    }
    ctx->pc = 0x1AB8F8u;
}
