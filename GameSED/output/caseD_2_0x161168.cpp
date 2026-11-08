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

// Function: caseD_2
// Address: 0x161168 - 0x161178
void caseD_2_0x161168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x161168");
#endif

    ctx->pc = 0x161168u;

    // 0x161168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16116c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x16116Cu;
    {
        const bool branch_taken_0x16116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16116Cu;
        // 0x161170: 0xae021a60  sw          $v0, 0x1A60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16116c) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x161174u;
    // 0x161174: 0x0  nop
    ctx->pc = 0x161174u;
    // NOP
    ctx->pc = 0x161178u;
}
