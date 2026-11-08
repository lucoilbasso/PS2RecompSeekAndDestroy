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

// Function: entry_0019b6cc
// Address: 0x19b6cc - 0x19b6e8
void entry_0019b6cc_0x19b6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6cc_0x19b6cc");
#endif

    ctx->pc = 0x19b6ccu;

    // 0x19b6cc: 0x50c90006  beql        $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B6CCu;
    {
        const bool branch_taken_0x19b6cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b6cc) {
            ctx->pc = 0x19B6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B6CCu;
            // 0x19b6d0: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B6E8u;
            return;
        }
    }
    ctx->pc = 0x19B6D4u;
    // 0x19b6d4: 0x50cc0004  beql        $a2, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B6D4u;
    {
        const bool branch_taken_0x19b6d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b6d4) {
            ctx->pc = 0x19B6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B6D4u;
            // 0x19b6d8: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B6E8u;
            return;
        }
    }
    ctx->pc = 0x19B6DCu;
    // 0x19b6dc: 0x54cb0004  bnel        $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B6DCu;
    {
        const bool branch_taken_0x19b6dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b6dc) {
            ctx->pc = 0x19B6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B6DCu;
            // 0x19b6e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B6E4u;
    // 0x19b6e4: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x19b6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19b6e8u;
}
