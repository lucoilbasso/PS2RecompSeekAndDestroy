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

// Function: entry_00174d28
// Address: 0x174d28 - 0x174d38
void entry_00174d28_0x174d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d28_0x174d28");
#endif

    ctx->pc = 0x174d28u;

    // 0x174d28: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x174d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x174d2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174D30u;
    {
        const bool branch_taken_0x174d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D30u;
        // 0x174d34: 0x24a5d4a8  addiu       $a1, $a1, -0x2B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d30) {
            ctx->pc = 0x174D48u;
            return;
        }
    }
    ctx->pc = 0x174D38u;
}
