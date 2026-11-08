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

// Function: caseD_5
// Address: 0x115608 - 0x115618
void caseD_5_0x115608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x115608");
#endif

    ctx->pc = 0x115608u;

    // 0x115608: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11560c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115610: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x115610u;
    {
        const bool branch_taken_0x115610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115610u;
        // 0x115614: 0x244500e8  addiu       $a1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115610) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x115618u;
}
