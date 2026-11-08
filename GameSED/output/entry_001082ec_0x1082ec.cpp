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

// Function: entry_001082ec
// Address: 0x1082ec - 0x1082f8
void entry_001082ec_0x1082ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001082ec_0x1082ec");
#endif

    ctx->pc = 0x1082ecu;

    // 0x1082ec: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1082ECu;
    {
        const bool branch_taken_0x1082ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082ECu;
        // 0x1082f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082ec) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x1082F4u;
    // 0x1082f4: 0x0  nop
    ctx->pc = 0x1082f4u;
    // NOP
    ctx->pc = 0x1082f8u;
}
