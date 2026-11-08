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

// Function: entry_0013d770
// Address: 0x13d770 - 0x13d790
void entry_0013d770_0x13d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d770_0x13d770");
#endif

    ctx->pc = 0x13d770u;

label_13d770:
    // 0x13d770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13d778: 0x0  nop
    ctx->pc = 0x13d778u;
    // NOP
    // 0x13d77c: 0x0  nop
    ctx->pc = 0x13d77cu;
    // NOP
    // 0x13d780: 0x0  nop
    ctx->pc = 0x13d780u;
    // NOP
    // 0x13d784: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D784u;
    {
        const bool branch_taken_0x13d784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d784) {
            ctx->pc = 0x13D770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d770;
        }
    }
    ctx->pc = 0x13D78Cu;
    // 0x13d78c: 0x0  nop
    ctx->pc = 0x13d78cu;
    // NOP
    ctx->pc = 0x13d790u;
}
