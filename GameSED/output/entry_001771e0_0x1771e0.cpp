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

// Function: entry_001771e0
// Address: 0x1771e0 - 0x177204
void entry_001771e0_0x1771e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001771e0_0x1771e0");
#endif

    switch (ctx->pc) {
        case 0x1771e8u: goto label_1771e8;
        default: break;
    }

    ctx->pc = 0x1771e0u;

    // 0x1771e0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1771E0u;
    SET_GPR_U32(ctx, 31, 0x1771E8u);
    ctx->pc = 0x1771E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771E0u;
    // 0x1771e4: 0x8f848c98  lw          $a0, -0x7368($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1771E0u, 0x1771E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771E8u;
label_1771e8:
    // 0x1771e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1771e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1771ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1771ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1771f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1771f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1771f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1771f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1771f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1771f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1771fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1771FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771FCu;
        // 0x177200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1771FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177204u;
}
