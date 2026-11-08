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

// Function: caseD_1
// Address: 0x118018 - 0x118028
void caseD_1_0x118018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x118018");
#endif

    ctx->pc = 0x118018u;

    // 0x118018: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11801c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11801Cu;
    {
        const bool branch_taken_0x11801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11801Cu;
        // 0x118020: 0x2445c350  addiu       $a1, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11801c) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x118024u;
    // 0x118024: 0x0  nop
    ctx->pc = 0x118024u;
    // NOP
    ctx->pc = 0x118028u;
}
