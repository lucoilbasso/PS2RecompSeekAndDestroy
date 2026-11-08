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

// Function: entry_001007d8
// Address: 0x1007d8 - 0x1007f0
void entry_001007d8_0x1007d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007d8_0x1007d8");
#endif

    ctx->pc = 0x1007d8u;

    // 0x1007d8: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1007D8u;
    {
        const bool branch_taken_0x1007d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007d8) {
            ctx->pc = 0x1007DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1007D8u;
            // 0x1007dc: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100878u;
            return;
        }
    }
    ctx->pc = 0x1007E0u;
    // 0x1007e0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1007e4: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1007E4u;
    {
        const bool branch_taken_0x1007e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007E4u;
        // 0x1007e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007e4) {
            ctx->pc = 0x100868u;
            return;
        }
    }
    ctx->pc = 0x1007ECu;
    // 0x1007ec: 0x0  nop
    ctx->pc = 0x1007ecu;
    // NOP
    ctx->pc = 0x1007f0u;
}
