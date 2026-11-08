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

// Function: entry_0019b594
// Address: 0x19b594 - 0x19b5b0
void entry_0019b594_0x19b594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b594_0x19b594");
#endif

    ctx->pc = 0x19b594u;

    // 0x19b594: 0x50e90006  beql        $a3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B594u;
    {
        const bool branch_taken_0x19b594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b594) {
            ctx->pc = 0x19B598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B594u;
            // 0x19b598: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B0u;
            return;
        }
    }
    ctx->pc = 0x19B59Cu;
    // 0x19b59c: 0x50ec0004  beql        $a3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B59Cu;
    {
        const bool branch_taken_0x19b59c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b59c) {
            ctx->pc = 0x19B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B59Cu;
            // 0x19b5a0: 0xa0c80000  sb          $t0, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B0u;
            return;
        }
    }
    ctx->pc = 0x19B5A4u;
    // 0x19b5a4: 0x54eb0004  bnel        $a3, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B5A4u;
    {
        const bool branch_taken_0x19b5a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b5a4) {
            ctx->pc = 0x19B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B5A4u;
            // 0x19b5a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5B8u;
            return;
        }
    }
    ctx->pc = 0x19B5ACu;
    // 0x19b5ac: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x19b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19b5b0u;
}
