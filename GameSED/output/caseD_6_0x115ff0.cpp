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

// Function: caseD_6
// Address: 0x115ff0 - 0x116000
void caseD_6_0x115ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x115ff0");
#endif

    ctx->pc = 0x115ff0u;

    // 0x115ff0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115ff4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115ff8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115FF8u;
    {
        const bool branch_taken_0x115ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FF8u;
        // 0x115ffc: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ff8) {
            ctx->pc = 0x11604Cu;
            return;
        }
    }
    ctx->pc = 0x116000u;
}
