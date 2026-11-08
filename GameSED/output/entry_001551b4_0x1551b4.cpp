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

// Function: entry_001551b4
// Address: 0x1551b4 - 0x1551c0
void entry_001551b4_0x1551b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551b4_0x1551b4");
#endif

    ctx->pc = 0x1551b4u;

    // 0x1551b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551B4u;
        // 0x1551b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x1551CCu;
            return;
        }
    }
    ctx->pc = 0x1551BCu;
    // 0x1551bc: 0x0  nop
    ctx->pc = 0x1551bcu;
    // NOP
    ctx->pc = 0x1551c0u;
}
