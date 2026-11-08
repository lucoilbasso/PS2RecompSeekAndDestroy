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

// Function: entry_0010c0e4
// Address: 0x10c0e4 - 0x10c100
void entry_0010c0e4_0x10c0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c0e4_0x10c0e4");
#endif

    switch (ctx->pc) {
        case 0x10c0ecu: goto label_10c0ec;
        default: break;
    }

    ctx->pc = 0x10c0e4u;

    // 0x10c0e4: 0xc041bc0  jal         func_106F00
    ctx->pc = 0x10C0E4u;
    SET_GPR_U32(ctx, 31, 0x10C0ECu);
    ctx->pc = 0x10C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0E4u;
    // 0x10c0e8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F00u, 0x10C0E4u, 0x10C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0ECu;
label_10c0ec:
    // 0x10c0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c0f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c0f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0F8u;
        // 0x10c0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C100u;
}
