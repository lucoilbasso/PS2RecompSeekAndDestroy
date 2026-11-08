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

// Function: entry_0019b8bc
// Address: 0x19b8bc - 0x19b8d8
void entry_0019b8bc_0x19b8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8bc_0x19b8bc");
#endif

    ctx->pc = 0x19b8bcu;

    // 0x19b8bc: 0x50c90006  beql        $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B8BCu;
    {
        const bool branch_taken_0x19b8bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b8bc) {
            ctx->pc = 0x19B8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8BCu;
            // 0x19b8c0: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8D8u;
            return;
        }
    }
    ctx->pc = 0x19B8C4u;
    // 0x19b8c4: 0x50cc0004  beql        $a2, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B8C4u;
    {
        const bool branch_taken_0x19b8c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b8c4) {
            ctx->pc = 0x19B8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8C4u;
            // 0x19b8c8: 0xa0880000  sb          $t0, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8D8u;
            return;
        }
    }
    ctx->pc = 0x19B8CCu;
    // 0x19b8cc: 0x54cb0004  bnel        $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B8CCu;
    {
        const bool branch_taken_0x19b8cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b8cc) {
            ctx->pc = 0x19B8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8CCu;
            // 0x19b8d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8E0u;
            return;
        }
    }
    ctx->pc = 0x19B8D4u;
    // 0x19b8d4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x19b8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19b8d8u;
}
