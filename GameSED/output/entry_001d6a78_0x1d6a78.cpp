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

// Function: entry_001d6a78
// Address: 0x1d6a78 - 0x1d6a90
void entry_001d6a78_0x1d6a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6a78_0x1d6a78");
#endif

    ctx->pc = 0x1d6a78u;

    // 0x1d6a78: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D6A78u;
    {
        const bool branch_taken_0x1d6a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a78) {
            ctx->pc = 0x1D6A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6A78u;
            // 0x1d6a7c: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6B18u;
            return;
        }
    }
    ctx->pc = 0x1D6A80u;
    // 0x1d6a80: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1d6a84: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D6A84u;
    {
        const bool branch_taken_0x1d6a84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a84) {
            ctx->pc = 0x1D6B08u;
            return;
        }
    }
    ctx->pc = 0x1D6A8Cu;
    // 0x1d6a8c: 0x0  nop
    ctx->pc = 0x1d6a8cu;
    // NOP
    ctx->pc = 0x1d6a90u;
}
