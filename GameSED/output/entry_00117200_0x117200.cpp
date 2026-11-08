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

// Function: entry_00117200
// Address: 0x117200 - 0x117218
void entry_00117200_0x117200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117200_0x117200");
#endif

    ctx->pc = 0x117200u;

    // 0x117200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117200u;
    {
        const bool branch_taken_0x117200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117200u;
        // 0x117204: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117200) {
            ctx->pc = 0x117218u;
            return;
        }
    }
    ctx->pc = 0x117208u;
    // 0x117208: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11720c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x11720cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x117210: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x117210u;
    {
        const bool branch_taken_0x117210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117210) {
            ctx->pc = 0x1171C8u;
            return;
        }
    }
    ctx->pc = 0x117218u;
}
