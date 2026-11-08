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

// Function: caseD_4
// Address: 0x108858 - 0x108868
void caseD_4_0x108858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x108858");
#endif

    ctx->pc = 0x108858u;

    // 0x108858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10885c: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x10885Cu;
    {
        const bool branch_taken_0x10885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10885Cu;
        // 0x108860: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10885c) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x108864u;
    // 0x108864: 0x0  nop
    ctx->pc = 0x108864u;
    // NOP
    ctx->pc = 0x108868u;
}
