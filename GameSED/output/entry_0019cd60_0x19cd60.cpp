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

// Function: entry_0019cd60
// Address: 0x19cd60 - 0x19cd74
void entry_0019cd60_0x19cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd60_0x19cd60");
#endif

    ctx->pc = 0x19cd60u;

label_19cd60:
    // 0x19cd60: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19cd60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cd64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CD64u;
    {
        const bool branch_taken_0x19cd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd64) {
            ctx->pc = 0x19CD74u;
            return;
        }
    }
    ctx->pc = 0x19CD6Cu;
    // 0x19cd6c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19CD6Cu;
    {
        const bool branch_taken_0x19cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19cd6c) {
            ctx->pc = 0x19CD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CD6Cu;
            // 0x19cd70: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cd60;
        }
    }
    ctx->pc = 0x19CD74u;
}
