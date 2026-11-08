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
// Address: 0x1155e8 - 0x1155f8
void caseD_3_0x1155e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1155e8");
#endif

    ctx->pc = 0x1155e8u;

    // 0x1155e8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155ec: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1155ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1155f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1155F0u;
    {
        const bool branch_taken_0x1155f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155F0u;
        // 0x1155f4: 0x2445007c  addiu       $a1, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155f0) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x1155F8u;
}
