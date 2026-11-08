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

// Function: entry_0017ea9c
// Address: 0x17ea9c - 0x17eab0
void entry_0017ea9c_0x17ea9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea9c_0x17ea9c");
#endif

    ctx->pc = 0x17ea9cu;

    // 0x17ea9c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x17ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17eaa0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17eaa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17eaa4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17eaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17eaa8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17EAA8u;
    {
        const bool branch_taken_0x17eaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eaa8) {
            ctx->pc = 0x17EAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAA8u;
            // 0x17eaac: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EA88u;
            return;
        }
    }
    ctx->pc = 0x17EAB0u;
}
