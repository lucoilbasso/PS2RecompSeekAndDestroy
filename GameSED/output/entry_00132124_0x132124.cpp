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

// Function: entry_00132124
// Address: 0x132124 - 0x132130
void entry_00132124_0x132124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132124_0x132124");
#endif

    ctx->pc = 0x132124u;

    // 0x132124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132124u;
    {
        const bool branch_taken_0x132124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132124u;
        // 0x132128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132124) {
            ctx->pc = 0x132134u;
            return;
        }
    }
    ctx->pc = 0x13212Cu;
    // 0x13212c: 0x0  nop
    ctx->pc = 0x13212cu;
    // NOP
    ctx->pc = 0x132130u;
}
