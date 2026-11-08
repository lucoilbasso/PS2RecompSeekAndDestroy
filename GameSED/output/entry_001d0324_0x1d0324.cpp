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

// Function: entry_001d0324
// Address: 0x1d0324 - 0x1d0338
void entry_001d0324_0x1d0324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0324_0x1d0324");
#endif

    switch (ctx->pc) {
        case 0x1d032cu: goto label_1d032c;
        default: break;
    }

    ctx->pc = 0x1d0324u;

    // 0x1d0324: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D0324u;
    SET_GPR_U32(ctx, 31, 0x1D032Cu);
    ctx->pc = 0x1D0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0324u;
    // 0x1d0328: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D0324u, 0x1D032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D032Cu;
label_1d032c:
    // 0x1d032c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0330: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0330u;
        // 0x1d0334: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0338u;
}
