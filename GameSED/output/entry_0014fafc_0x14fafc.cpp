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

// Function: entry_0014fafc
// Address: 0x14fafc - 0x14fb08
void entry_0014fafc_0x14fafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fafc_0x14fafc");
#endif

    ctx->pc = 0x14fafcu;

    // 0x14fafc: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x14fafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14fb00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB00u;
    {
        const bool branch_taken_0x14fb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fb00) {
            ctx->pc = 0x14FB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FB00u;
            // 0x14fb04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            return;
        }
    }
    ctx->pc = 0x14FB08u;
}
