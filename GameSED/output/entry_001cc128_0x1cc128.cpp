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

// Function: entry_001cc128
// Address: 0x1cc128 - 0x1cc130
void entry_001cc128_0x1cc128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc128_0x1cc128");
#endif

    ctx->pc = 0x1cc128u;

    // 0x1cc128: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CC128u;
    {
        const bool branch_taken_0x1cc128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC128u;
        // 0x1cc12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc128) {
            ctx->pc = 0x1CC1BCu;
            return;
        }
    }
    ctx->pc = 0x1CC130u;
}
