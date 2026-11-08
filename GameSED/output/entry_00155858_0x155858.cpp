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

// Function: entry_00155858
// Address: 0x155858 - 0x15586c
void entry_00155858_0x155858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155858_0x155858");
#endif

    switch (ctx->pc) {
        case 0x155868u: goto label_155868;
        default: break;
    }

    ctx->pc = 0x155858u;

    // 0x155858: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x155858u;
    {
        const bool branch_taken_0x155858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155858) {
            ctx->pc = 0x15585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155858u;
            // 0x15585c: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15586Cu;
            return;
        }
    }
    ctx->pc = 0x155860u;
    // 0x155860: 0xc061944  jal         func_186510
    ctx->pc = 0x155860u;
    SET_GPR_U32(ctx, 31, 0x155868u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x155860u, 0x155868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    ctx->pc = 0x15586cu;
}
