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

// Function: entry_001bf0e4
// Address: 0x1bf0e4 - 0x1bf0f8
void entry_001bf0e4_0x1bf0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf0e4_0x1bf0e4");
#endif

    ctx->pc = 0x1bf0e4u;

    // 0x1bf0e4: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF0E4u;
    {
        const bool branch_taken_0x1bf0e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf0e4) {
            ctx->pc = 0x1BF0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF0E4u;
            // 0x1bf0e8: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF0F8u;
            return;
        }
    }
    ctx->pc = 0x1BF0ECu;
    // 0x1bf0ec: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BF0ECu;
    {
        const bool branch_taken_0x1bf0ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0ECu;
        // 0x1bf0f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0ec) {
            ctx->pc = 0x1BF134u;
            return;
        }
    }
    ctx->pc = 0x1BF0F4u;
    // 0x1bf0f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1bf0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->pc = 0x1bf0f8u;
}
