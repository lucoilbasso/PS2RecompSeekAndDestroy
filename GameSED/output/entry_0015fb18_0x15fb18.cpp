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

// Function: entry_0015fb18
// Address: 0x15fb18 - 0x15fb28
void entry_0015fb18_0x15fb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fb18_0x15fb18");
#endif

    ctx->pc = 0x15fb18u;

    // 0x15fb18: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15FB18u;
    {
        const bool branch_taken_0x15fb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB18u;
        // 0x15fb1c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb18) {
            ctx->pc = 0x15FC00u;
            return;
        }
    }
    ctx->pc = 0x15FB20u;
    // 0x15fb20: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x15FB20u;
    {
        const bool branch_taken_0x15fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb20) {
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FB28u;
}
