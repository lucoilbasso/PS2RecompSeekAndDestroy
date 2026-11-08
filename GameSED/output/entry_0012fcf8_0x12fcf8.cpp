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

// Function: entry_0012fcf8
// Address: 0x12fcf8 - 0x12fd00
void entry_0012fcf8_0x12fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fcf8_0x12fcf8");
#endif

    ctx->pc = 0x12fcf8u;

    // 0x12fcf8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x12FCF8u;
    {
        const bool branch_taken_0x12fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCF8u;
        // 0x12fcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcf8) {
            ctx->pc = 0x12FF14u;
            return;
        }
    }
    ctx->pc = 0x12FD00u;
}
