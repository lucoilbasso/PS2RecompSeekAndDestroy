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

// Function: entry_001b72b8
// Address: 0x1b72b8 - 0x1b72d8
void entry_001b72b8_0x1b72b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b72b8_0x1b72b8");
#endif

    ctx->pc = 0x1b72b8u;

label_1b72b8:
    // 0x1b72b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b72bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b72bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b72c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b72c4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1b72c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b72c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b72cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b72d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B72D0u;
    {
        const bool branch_taken_0x1b72d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72d0) {
            ctx->pc = 0x1B72B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b72b8;
        }
    }
    ctx->pc = 0x1B72D8u;
}
