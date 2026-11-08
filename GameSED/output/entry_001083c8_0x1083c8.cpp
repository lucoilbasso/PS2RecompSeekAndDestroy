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

// Function: entry_001083c8
// Address: 0x1083c8 - 0x1083d8
void entry_001083c8_0x1083c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001083c8_0x1083c8");
#endif

    ctx->pc = 0x1083c8u;

    // 0x1083c8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1083C8u;
    {
        const bool branch_taken_0x1083c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083C8u;
        // 0x1083cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083c8) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x1083D0u;
    // 0x1083d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1083D0u;
    {
        const bool branch_taken_0x1083d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083D0u;
        // 0x1083d4: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083d0) {
            ctx->pc = 0x108410u;
            return;
        }
    }
    ctx->pc = 0x1083D8u;
}
