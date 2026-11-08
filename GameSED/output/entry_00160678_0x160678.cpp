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

// Function: entry_00160678
// Address: 0x160678 - 0x160698
void entry_00160678_0x160678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160678_0x160678");
#endif

    ctx->pc = 0x160678u;

    // 0x160678: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16067c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x160680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160680u;
    {
        const bool branch_taken_0x160680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160680u;
        // 0x160684: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160680) {
            ctx->pc = 0x160698u;
            return;
        }
    }
    ctx->pc = 0x160688u;
    // 0x160688: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16068c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16068Cu;
    {
        const bool branch_taken_0x16068c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16068Cu;
        // 0x160690: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16068c) {
            ctx->pc = 0x160698u;
            return;
        }
    }
    ctx->pc = 0x160694u;
    // 0x160694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x160694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160698u;
}
