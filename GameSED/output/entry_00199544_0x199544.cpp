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

// Function: entry_00199544
// Address: 0x199544 - 0x199558
void entry_00199544_0x199544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199544_0x199544");
#endif

    switch (ctx->pc) {
        case 0x19954cu: goto label_19954c;
        default: break;
    }

    ctx->pc = 0x199544u;

    // 0x199544: 0xc066556  jal         func_199558
    ctx->pc = 0x199544u;
    SET_GPR_U32(ctx, 31, 0x19954Cu);
    ctx->pc = 0x199548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199544u;
    // 0x199548: 0xac600078  sw          $zero, 0x78($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199558u, 0x199544u, 0x19954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19954Cu;
label_19954c:
    // 0x19954c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199550: 0x3e00008  jr          $ra
    ctx->pc = 0x199550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199550u;
        // 0x199554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199558u;
}
