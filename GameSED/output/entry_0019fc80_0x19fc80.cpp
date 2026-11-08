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

// Function: entry_0019fc80
// Address: 0x19fc80 - 0x19fc98
void entry_0019fc80_0x19fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc80_0x19fc80");
#endif

    ctx->pc = 0x19fc80u;

    // 0x19fc80: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x19fc80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19fc84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC84u;
        // 0x19fc88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FC98u;
            return;
        }
    }
    ctx->pc = 0x19FC8Cu;
    // 0x19fc8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x19fc90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19fc94: 0x242202b  sltu        $a0, $s2, $v0
    ctx->pc = 0x19fc94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x19fc98u;
}
