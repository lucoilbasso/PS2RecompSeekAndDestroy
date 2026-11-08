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

// Function: entry_001c2e20
// Address: 0x1c2e20 - 0x1c2e34
void entry_001c2e20_0x1c2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2e20_0x1c2e20");
#endif

    ctx->pc = 0x1c2e20u;

    // 0x1c2e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2e24: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2E24u;
    {
        const bool branch_taken_0x1c2e24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2e24) {
            ctx->pc = 0x1C2E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E24u;
            // 0x1c2e28: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2E38u;
            return;
        }
    }
    ctx->pc = 0x1C2E2Cu;
    // 0x1c2e2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2E2Cu;
    {
        const bool branch_taken_0x1c2e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E2Cu;
        // 0x1c2e30: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e2c) {
            ctx->pc = 0x1C2E3Cu;
            return;
        }
    }
    ctx->pc = 0x1C2E34u;
}
