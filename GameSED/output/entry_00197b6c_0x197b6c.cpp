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

// Function: entry_00197b6c
// Address: 0x197b6c - 0x197b88
void entry_00197b6c_0x197b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b6c_0x197b6c");
#endif

    ctx->pc = 0x197b6cu;

    // 0x197b6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x197b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x197b70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197b74: 0x2862003f  slti        $v0, $v1, 0x3F
    ctx->pc = 0x197b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x197b78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x197B78u;
    {
        const bool branch_taken_0x197b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B78u;
        // 0x197b7c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b78) {
            ctx->pc = 0x197B50u;
            return;
        }
    }
    ctx->pc = 0x197B80u;
    // 0x197b80: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x197b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x197b84: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->pc = 0x197b88u;
}
