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

// Function: entry_001ad218
// Address: 0x1ad218 - 0x1ad220
void entry_001ad218_0x1ad218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad218_0x1ad218");
#endif

    ctx->pc = 0x1ad218u;

    // 0x1ad218: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AD218u;
    {
        const bool branch_taken_0x1ad218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD218u;
        // 0x1ad21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad218) {
            ctx->pc = 0x1AD24Cu;
            return;
        }
    }
    ctx->pc = 0x1AD220u;
}
