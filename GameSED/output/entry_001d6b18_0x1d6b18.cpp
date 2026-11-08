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

// Function: entry_001d6b18
// Address: 0x1d6b18 - 0x1d6b30
void entry_001d6b18_0x1d6b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6b18_0x1d6b18");
#endif

    ctx->pc = 0x1d6b18u;

    // 0x1d6b18: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D6B18u;
    {
        const bool branch_taken_0x1d6b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b18) {
            ctx->pc = 0x1D6B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6B18u;
            // 0x1d6b1c: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6BB8u;
            return;
        }
    }
    ctx->pc = 0x1D6B20u;
    // 0x1d6b20: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1d6b24: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D6B24u;
    {
        const bool branch_taken_0x1d6b24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B24u;
        // 0x1d6b28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b24) {
            ctx->pc = 0x1D6BA8u;
            return;
        }
    }
    ctx->pc = 0x1D6B2Cu;
    // 0x1d6b2c: 0x0  nop
    ctx->pc = 0x1d6b2cu;
    // NOP
    ctx->pc = 0x1d6b30u;
}
