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

// Function: entry_001ad674
// Address: 0x1ad674 - 0x1ad684
void entry_001ad674_0x1ad674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad674_0x1ad674");
#endif

    ctx->pc = 0x1ad674u;

    // 0x1ad674: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1ad674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad678: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x1ad678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad67c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1AD67Cu;
    {
        const bool branch_taken_0x1ad67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD67Cu;
        // 0x1ad680: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad67c) {
            ctx->pc = 0x1AD5A0u;
            return;
        }
    }
    ctx->pc = 0x1AD684u;
}
