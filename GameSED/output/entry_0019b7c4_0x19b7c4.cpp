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

// Function: entry_0019b7c4
// Address: 0x19b7c4 - 0x19b7e0
void entry_0019b7c4_0x19b7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7c4_0x19b7c4");
#endif

    ctx->pc = 0x19b7c4u;

    // 0x19b7c4: 0x50e90006  beql        $a3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B7C4u;
    {
        const bool branch_taken_0x19b7c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b7c4) {
            ctx->pc = 0x19B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7C4u;
            // 0x19b7c8: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7E0u;
            return;
        }
    }
    ctx->pc = 0x19B7CCu;
    // 0x19b7cc: 0x50ec0004  beql        $a3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B7CCu;
    {
        const bool branch_taken_0x19b7cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b7cc) {
            ctx->pc = 0x19B7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7CCu;
            // 0x19b7d0: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7E0u;
            return;
        }
    }
    ctx->pc = 0x19B7D4u;
    // 0x19b7d4: 0x54eb0004  bnel        $a3, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B7D4u;
    {
        const bool branch_taken_0x19b7d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b7d4) {
            ctx->pc = 0x19B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7D4u;
            // 0x19b7d8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7E8u;
            return;
        }
    }
    ctx->pc = 0x19B7DCu;
    // 0x19b7dc: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x19b7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19b7e0u;
}
