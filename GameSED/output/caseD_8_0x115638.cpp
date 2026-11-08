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

// Function: caseD_8
// Address: 0x115638 - 0x115648
void caseD_8_0x115638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x115638");
#endif

    ctx->pc = 0x115638u;

    // 0x115638: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11563c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115640: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115640u;
    {
        const bool branch_taken_0x115640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115640u;
        // 0x115644: 0x2445015c  addiu       $a1, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115640) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x115648u;
}
