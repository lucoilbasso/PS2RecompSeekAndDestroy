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

// Function: entry_001ad7c0
// Address: 0x1ad7c0 - 0x1ad7dc
void entry_001ad7c0_0x1ad7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad7c0_0x1ad7c0");
#endif

    ctx->pc = 0x1ad7c0u;

    // 0x1ad7c0: 0x24022840  addiu       $v0, $zero, 0x2840
    ctx->pc = 0x1ad7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x1ad7c4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD7C4u;
    {
        const bool branch_taken_0x1ad7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C4u;
        // 0x1ad7c8: 0x24022842  addiu       $v0, $zero, 0x2842 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10306));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7c4) {
            ctx->pc = 0x1AD7E8u;
            return;
        }
    }
    ctx->pc = 0x1AD7CCu;
    // 0x1ad7cc: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD7CCu;
    {
        const bool branch_taken_0x1ad7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad7cc) {
            ctx->pc = 0x1AD7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD7CCu;
            // 0x1ad7d0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD7ECu;
            return;
        }
    }
    ctx->pc = 0x1AD7D4u;
    // 0x1ad7d4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AD7D4u;
    {
        const bool branch_taken_0x1ad7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7d4) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD7DCu;
}
