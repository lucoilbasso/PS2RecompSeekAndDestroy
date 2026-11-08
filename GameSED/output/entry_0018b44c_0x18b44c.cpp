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

// Function: entry_0018b44c
// Address: 0x18b44c - 0x18b460
void entry_0018b44c_0x18b44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b44c_0x18b44c");
#endif

    switch (ctx->pc) {
        case 0x18b454u: goto label_18b454;
        default: break;
    }

    ctx->pc = 0x18b44cu;

    // 0x18b44c: 0xc062972  jal         func_18A5C8
    ctx->pc = 0x18B44Cu;
    SET_GPR_U32(ctx, 31, 0x18B454u);
    ctx->pc = 0x18B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B44Cu;
    // 0x18b450: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5C8u, 0x18B44Cu, 0x18B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B454u;
label_18b454:
    // 0x18b454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b458: 0x3e00008  jr          $ra
    ctx->pc = 0x18B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B458u;
        // 0x18b45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B460u;
}
