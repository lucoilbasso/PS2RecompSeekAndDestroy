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

// Function: entry_00104690
// Address: 0x104690 - 0x1046ac
void entry_00104690_0x104690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104690_0x104690");
#endif

    switch (ctx->pc) {
        case 0x104698u: goto label_104698;
        default: break;
    }

    ctx->pc = 0x104690u;

    // 0x104690: 0xc05dd18  jal         func_177460
    ctx->pc = 0x104690u;
    SET_GPR_U32(ctx, 31, 0x104698u);
    ctx->pc = 0x104694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104690u;
    // 0x104694: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x104690u, 0x104698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104698u;
label_104698:
    // 0x104698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10469c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10469cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1046a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1046a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1046a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1046A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1046A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046A4u;
        // 0x1046a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1046ACu;
}
