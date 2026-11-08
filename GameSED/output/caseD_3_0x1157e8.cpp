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

// Function: caseD_3
// Address: 0x1157e8 - 0x1157f8
void caseD_3_0x1157e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1157e8");
#endif

    ctx->pc = 0x1157e8u;

    // 0x1157e8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1157e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1157ec: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1157ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1157f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1157F0u;
    {
        const bool branch_taken_0x1157f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157F0u;
        // 0x1157f4: 0x2444007c  addiu       $a0, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157f0) {
            ctx->pc = 0x115874u;
            return;
        }
    }
    ctx->pc = 0x1157F8u;
}
