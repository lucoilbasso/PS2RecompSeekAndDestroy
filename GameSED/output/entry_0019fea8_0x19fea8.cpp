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

// Function: entry_0019fea8
// Address: 0x19fea8 - 0x19fecc
void entry_0019fea8_0x19fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fea8_0x19fea8");
#endif

    switch (ctx->pc) {
        case 0x19feb0u: goto label_19feb0;
        default: break;
    }

    ctx->pc = 0x19fea8u;

    // 0x19fea8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19FEA8u;
    SET_GPR_U32(ctx, 31, 0x19FEB0u);
    ctx->pc = 0x19FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FEA8u;
    // 0x19feac: 0x8f848e08  lw          $a0, -0x71F8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19FEA8u, 0x19FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEB0u;
label_19feb0:
    // 0x19feb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19feb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19feb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19feb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19feb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19feb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19febc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19febcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fec4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC4u;
        // 0x19fec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FECCu;
}
