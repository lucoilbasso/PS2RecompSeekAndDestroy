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

// Function: entry_0013b004
// Address: 0x13b004 - 0x13b018
void entry_0013b004_0x13b004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b004_0x13b004");
#endif

    ctx->pc = 0x13b004u;

    // 0x13b004: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x13b008: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B008u;
    {
        const bool branch_taken_0x13b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b008) {
            ctx->pc = 0x13B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B008u;
            // 0x13b00c: 0x8e220200  lw          $v0, 0x200($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B030u;
            return;
        }
    }
    ctx->pc = 0x13B010u;
    // 0x13b010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b014: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13b014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x13b018u;
}
