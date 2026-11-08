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
// Address: 0x118058 - 0x118068
void caseD_5_0x118058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x118058");
#endif

    ctx->pc = 0x118058u;

    // 0x118058: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11805c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118060: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x118060u;
    {
        const bool branch_taken_0x118060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118060u;
        // 0x118064: 0x244500e8  addiu       $a1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118060) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x118068u;
}
