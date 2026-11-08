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

// Function: entry_00196358
// Address: 0x196358 - 0x196368
void entry_00196358_0x196358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196358_0x196358");
#endif

    ctx->pc = 0x196358u;

    // 0x196358: 0x1ac00098  blez        $s6, . + 4 + (0x98 << 2)
    ctx->pc = 0x196358u;
    {
        const bool branch_taken_0x196358 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x19635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196358u;
        // 0x19635c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196358) {
            ctx->pc = 0x1965BCu;
            return;
        }
    }
    ctx->pc = 0x196360u;
    // 0x196360: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x196360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x196364: 0x0  nop
    ctx->pc = 0x196364u;
    // NOP
    ctx->pc = 0x196368u;
}
