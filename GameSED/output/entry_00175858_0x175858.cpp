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

// Function: entry_00175858
// Address: 0x175858 - 0x175868
void entry_00175858_0x175858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175858_0x175858");
#endif

    ctx->pc = 0x175858u;

    // 0x175858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17585c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x175860: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x175860u;
    {
        const bool branch_taken_0x175860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175860u;
        // 0x175864: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175860) {
            ctx->pc = 0x175948u;
            return;
        }
    }
    ctx->pc = 0x175868u;
}
