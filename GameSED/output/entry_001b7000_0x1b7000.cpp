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

// Function: entry_001b7000
// Address: 0x1b7000 - 0x1b701c
void entry_001b7000_0x1b7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7000_0x1b7000");
#endif

    ctx->pc = 0x1b7000u;

label_1b7000:
    // 0x1b7000: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1b7000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7004: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b7004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b7008: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b700c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1b700cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b7010: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b7010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b7014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b7014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b7018: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B7018u;
    {
        const bool branch_taken_0x1b7018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7018) {
            ctx->pc = 0x1B7000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7000;
        }
    }
    ctx->pc = 0x1B7020u;
}
