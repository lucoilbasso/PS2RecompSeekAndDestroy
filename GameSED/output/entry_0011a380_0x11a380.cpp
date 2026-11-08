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

// Function: entry_0011a380
// Address: 0x11a380 - 0x11a38c
void entry_0011a380_0x11a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a380_0x11a380");
#endif

    ctx->pc = 0x11a380u;

    // 0x11a380: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x11a384: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A384u;
    {
        const bool branch_taken_0x11a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a384) {
            ctx->pc = 0x11A388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A384u;
            // 0x11a388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A38Cu;
            return;
        }
    }
    ctx->pc = 0x11A38Cu;
}
