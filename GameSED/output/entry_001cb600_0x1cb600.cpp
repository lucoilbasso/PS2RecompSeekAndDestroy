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

// Function: entry_001cb600
// Address: 0x1cb600 - 0x1cb618
void entry_001cb600_0x1cb600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb600_0x1cb600");
#endif

    switch (ctx->pc) {
        case 0x1cb608u: goto label_1cb608;
        default: break;
    }

    ctx->pc = 0x1cb600u;

    // 0x1cb600: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB600u;
    SET_GPR_U32(ctx, 31, 0x1CB608u);
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB600u, 0x1CB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB608u;
label_1cb608:
    // 0x1cb608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb60c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb610: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB610u;
        // 0x1cb614: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB648u;
            return;
        }
    }
    ctx->pc = 0x1CB618u;
}
