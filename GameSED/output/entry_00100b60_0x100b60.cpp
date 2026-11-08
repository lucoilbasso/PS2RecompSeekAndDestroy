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

// Function: entry_00100b60
// Address: 0x100b60 - 0x100b78
void entry_00100b60_0x100b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b60_0x100b60");
#endif

    ctx->pc = 0x100b60u;

    // 0x100b60: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x100b64: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x100B64u;
    {
        const bool branch_taken_0x100b64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B64u;
        // 0x100b68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b64) {
            ctx->pc = 0x100BF4u;
            return;
        }
    }
    ctx->pc = 0x100B6Cu;
    // 0x100b6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x100b70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x100b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b74: 0x0  nop
    ctx->pc = 0x100b74u;
    // NOP
    ctx->pc = 0x100b78u;
}
