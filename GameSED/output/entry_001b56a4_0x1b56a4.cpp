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

// Function: entry_001b56a4
// Address: 0x1b56a4 - 0x1b56b4
void entry_001b56a4_0x1b56a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b56a4_0x1b56a4");
#endif

    ctx->pc = 0x1b56a4u;

    // 0x1b56a4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B56A4u;
    {
        const bool branch_taken_0x1b56a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56A4u;
        // 0x1b56a8: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56a4) {
            ctx->pc = 0x1B5658u;
            return;
        }
    }
    ctx->pc = 0x1B56ACu;
    // 0x1b56ac: 0xac40aa1c  sw          $zero, -0x55E4($v0)
    ctx->pc = 0x1b56acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945308), GPR_U32(ctx, 0));
    // 0x1b56b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b56b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b56b4u;
}
