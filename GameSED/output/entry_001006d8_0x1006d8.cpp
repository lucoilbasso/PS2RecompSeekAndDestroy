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

// Function: entry_001006d8
// Address: 0x1006d8 - 0x1006f0
void entry_001006d8_0x1006d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001006d8_0x1006d8");
#endif

    ctx->pc = 0x1006d8u;

    // 0x1006d8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1006D8u;
    {
        const bool branch_taken_0x1006d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1006d8) {
            ctx->pc = 0x1006DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1006D8u;
            // 0x1006dc: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10074Cu;
            return;
        }
    }
    ctx->pc = 0x1006E0u;
    // 0x1006e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1006e4: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1006E4u;
    {
        const bool branch_taken_0x1006e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E4u;
        // 0x1006e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006e4) {
            ctx->pc = 0x10073Cu;
            return;
        }
    }
    ctx->pc = 0x1006ECu;
    // 0x1006ec: 0x0  nop
    ctx->pc = 0x1006ecu;
    // NOP
    ctx->pc = 0x1006f0u;
}
