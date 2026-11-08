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

// Function: entry_0010601c
// Address: 0x10601c - 0x106030
void entry_0010601c_0x10601c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010601c_0x10601c");
#endif

    ctx->pc = 0x10601cu;

    // 0x10601c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x106020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x106024: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x106024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106028: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x106028u;
    {
        const bool branch_taken_0x106028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106028) {
            ctx->pc = 0x105FE0u;
            return;
        }
    }
    ctx->pc = 0x106030u;
}
