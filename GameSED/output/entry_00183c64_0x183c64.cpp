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

// Function: entry_00183c64
// Address: 0x183c64 - 0x183c88
void entry_00183c64_0x183c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183c64_0x183c64");
#endif

    ctx->pc = 0x183c64u;

    // 0x183c64: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x183c68: 0xaca60028  sw          $a2, 0x28($a1)
    ctx->pc = 0x183c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 6));
    // 0x183c6c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x183c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x183c70: 0x50660005  beql        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x183C70u;
    {
        const bool branch_taken_0x183c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x183c70) {
            ctx->pc = 0x183C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183C70u;
            // 0x183c74: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183C88u;
            return;
        }
    }
    ctx->pc = 0x183C78u;
    // 0x183c78: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183c80: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x183c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x183c84: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->pc = 0x183c88u;
}
