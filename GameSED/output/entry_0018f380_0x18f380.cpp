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

// Function: entry_0018f380
// Address: 0x18f380 - 0x18f394
void entry_0018f380_0x18f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f380_0x18f380");
#endif

    ctx->pc = 0x18f380u;

    // 0x18f380: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x18f380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x18f384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f388: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F388u;
    {
        const bool branch_taken_0x18f388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F388u;
        // 0x18f38c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f388) {
            ctx->pc = 0x18F394u;
            return;
        }
    }
    ctx->pc = 0x18F390u;
    // 0x18f390: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18f394u;
}
