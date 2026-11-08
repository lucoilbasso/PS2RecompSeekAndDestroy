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

// Function: entry_0014b588
// Address: 0x14b588 - 0x14b59c
void entry_0014b588_0x14b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b588_0x14b588");
#endif

    ctx->pc = 0x14b588u;

label_14b588:
    // 0x14b588: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B588u;
    {
        const bool branch_taken_0x14b588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b588) {
            ctx->pc = 0x14B59Cu;
            return;
        }
    }
    ctx->pc = 0x14B590u;
    // 0x14b590: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14b594: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14B594u;
    {
        const bool branch_taken_0x14b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14b594) {
            ctx->pc = 0x14B598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B594u;
            // 0x14b598: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b588;
        }
    }
    ctx->pc = 0x14B59Cu;
}
