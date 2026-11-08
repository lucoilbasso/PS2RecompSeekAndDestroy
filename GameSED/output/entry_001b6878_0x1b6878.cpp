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

// Function: entry_001b6878
// Address: 0x1b6878 - 0x1b688c
void entry_001b6878_0x1b6878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6878_0x1b6878");
#endif

    ctx->pc = 0x1b6878u;

    // 0x1b6878: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6878u;
            // 0x1b687c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B688Cu;
            return;
        }
    }
    ctx->pc = 0x1B6880u;
    // 0x1b6880: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6884: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6884u;
    {
        const bool branch_taken_0x1b6884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6884u;
        // 0x1b6888: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6884) {
            ctx->pc = 0x1B68D4u;
            return;
        }
    }
    ctx->pc = 0x1B688Cu;
}
