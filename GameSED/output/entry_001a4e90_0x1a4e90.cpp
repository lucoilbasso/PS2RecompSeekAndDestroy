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

// Function: entry_001a4e90
// Address: 0x1a4e90 - 0x1a4eb0
void entry_001a4e90_0x1a4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e90_0x1a4e90");
#endif

    ctx->pc = 0x1a4e90u;

    // 0x1a4e90: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A4EB8u;
            return;
        }
    }
    ctx->pc = 0x1A4E98u;
    // 0x1a4e98: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4E98u;
    {
        const bool branch_taken_0x1a4e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e98) {
            ctx->pc = 0x1A4EB0u;
            return;
        }
    }
    ctx->pc = 0x1A4EA0u;
    // 0x1a4ea0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4ea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EA8u;
    {
        const bool branch_taken_0x1a4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA8u;
        // 0x1a4eac: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea8) {
            ctx->pc = 0x1A4EB8u;
            return;
        }
    }
    ctx->pc = 0x1A4EB0u;
}
