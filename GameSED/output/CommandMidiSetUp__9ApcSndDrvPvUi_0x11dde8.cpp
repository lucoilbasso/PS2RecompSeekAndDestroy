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

// Function: CommandMidiSetUp__9ApcSndDrvPvUi
// Address: 0x11dde8 - 0x11de08
void CommandMidiSetUp__9ApcSndDrvPvUi_0x11dde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandMidiSetUp__9ApcSndDrvPvUi_0x11dde8");
#endif

    switch (ctx->pc) {
        case 0x11ddfcu: goto label_11ddfc;
        default: break;
    }

    ctx->pc = 0x11dde8u;

    // 0x11dde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ddec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11ddf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ddf4: 0xc05f03a  jal         func_17C0E8
    ctx->pc = 0x11DDF4u;
    SET_GPR_U32(ctx, 31, 0x11DDFCu);
    ctx->pc = 0x11DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDF4u;
    // 0x11ddf8: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C0E8u, 0x11DDF4u, 0x11DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDFCu;
label_11ddfc:
    // 0x11ddfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ddfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de00: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE00u;
        // 0x11de04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE08u;
}
