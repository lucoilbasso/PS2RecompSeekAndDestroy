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

// Function: entry_001b6c68
// Address: 0x1b6c68 - 0x1b6c88
void entry_001b6c68_0x1b6c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c68_0x1b6c68");
#endif

    ctx->pc = 0x1b6c68u;

label_1b6c68:
    // 0x1b6c68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b6c6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b6c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b6c70: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b6c74: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1b6c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b6c78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b6c7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b6c80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6C80u;
    {
        const bool branch_taken_0x1b6c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c80) {
            ctx->pc = 0x1B6C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6c68;
        }
    }
    ctx->pc = 0x1B6C88u;
}
