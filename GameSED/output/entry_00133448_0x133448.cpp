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

// Function: entry_00133448
// Address: 0x133448 - 0x133460
void entry_00133448_0x133448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133448_0x133448");
#endif

    ctx->pc = 0x133448u;

    // 0x133448: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133448u;
    {
        const bool branch_taken_0x133448 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x13344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133448u;
        // 0x13344c: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133448) {
            ctx->pc = 0x133460u;
            return;
        }
    }
    ctx->pc = 0x133450u;
    // 0x133450: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x133450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x133454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133458u;
    {
        const bool branch_taken_0x133458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133458u;
        // 0x13345c: 0x8c443630  lw          $a0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133458) {
            ctx->pc = 0x133464u;
            return;
        }
    }
    ctx->pc = 0x133460u;
}
