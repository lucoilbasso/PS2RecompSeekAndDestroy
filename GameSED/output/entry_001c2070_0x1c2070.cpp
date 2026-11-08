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

// Function: entry_001c2070
// Address: 0x1c2070 - 0x1c2088
void entry_001c2070_0x1c2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2070_0x1c2070");
#endif

    ctx->pc = 0x1c2070u;

    // 0x1c2070: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2070u;
    {
        const bool branch_taken_0x1c2070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2070u;
        // 0x1c2074: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2070) {
            ctx->pc = 0x1C2088u;
            return;
        }
    }
    ctx->pc = 0x1C2078u;
    // 0x1c2078: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x1c207c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c207cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c2080: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2080u;
    {
        const bool branch_taken_0x1c2080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2080u;
        // 0x1c2084: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2080) {
            ctx->pc = 0x1C20B4u;
            return;
        }
    }
    ctx->pc = 0x1C2088u;
}
