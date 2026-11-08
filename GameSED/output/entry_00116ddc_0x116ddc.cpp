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

// Function: entry_00116ddc
// Address: 0x116ddc - 0x116dfc
void entry_00116ddc_0x116ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ddc_0x116ddc");
#endif

    switch (ctx->pc) {
        case 0x116de4u: goto label_116de4;
        default: break;
    }

    ctx->pc = 0x116ddcu;

    // 0x116ddc: 0xc0458a4  jal         func_116290
    ctx->pc = 0x116DDCu;
    SET_GPR_U32(ctx, 31, 0x116DE4u);
    ctx->pc = 0x116DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DDCu;
    // 0x116de0: 0xace300b0  sw          $v1, 0xB0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116290u, 0x116DDCu, 0x116DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DE4u;
label_116de4:
    // 0x116de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116df0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x116df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116df4: 0x3e00008  jr          $ra
    ctx->pc = 0x116DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DF4u;
        // 0x116df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116DFCu;
}
