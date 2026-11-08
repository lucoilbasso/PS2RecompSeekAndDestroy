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

// Function: entry_00175c10
// Address: 0x175c10 - 0x175c1c
void entry_00175c10_0x175c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c10_0x175c10");
#endif

    ctx->pc = 0x175c10u;

    // 0x175c10: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x175c14: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175C14u;
    {
        const bool branch_taken_0x175c14 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c14) {
            ctx->pc = 0x175C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C14u;
            // 0x175c18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C1Cu;
            return;
        }
    }
    ctx->pc = 0x175C1Cu;
}
