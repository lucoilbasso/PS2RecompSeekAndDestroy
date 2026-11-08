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

// Function: entry_0011d30c
// Address: 0x11d30c - 0x11d344
void entry_0011d30c_0x11d30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d30c_0x11d30c");
#endif

    switch (ctx->pc) {
        case 0x11d328u: goto label_11d328;
        default: break;
    }

    ctx->pc = 0x11d30cu;

    // 0x11d30c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d310: 0x2508f800  addiu       $t0, $t0, -0x800
    ctx->pc = 0x11d310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965248));
    // 0x11d314: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x11d314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x11d318: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x11d318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11d31c: 0x8ce770e8  lw          $a3, 0x70E8($a3)
    ctx->pc = 0x11d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28904)));
    // 0x11d320: 0xc047758  jal         func_11DD60
    ctx->pc = 0x11D320u;
    SET_GPR_U32(ctx, 31, 0x11D328u);
    ctx->pc = 0x11D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D320u;
    // 0x11d324: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD60u, 0x11D320u, 0x11D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D328u;
label_11d328:
    // 0x11d328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d33c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D33Cu;
        // 0x11d340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D344u;
}
