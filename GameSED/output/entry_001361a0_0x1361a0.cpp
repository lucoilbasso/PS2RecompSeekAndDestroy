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

// Function: entry_001361a0
// Address: 0x1361a0 - 0x1361b0
void entry_001361a0_0x1361a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001361a0_0x1361a0");
#endif

    ctx->pc = 0x1361a0u;

    // 0x1361a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1361a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1361a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1361a8: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x1361A8u;
    {
        const bool branch_taken_0x1361a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1361a8) {
            ctx->pc = 0x136000u;
            return;
        }
    }
    ctx->pc = 0x1361B0u;
}
