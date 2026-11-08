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

// Function: Cmd_SET_SCALE_Entry__FP15BsSCDEntControl
// Address: 0x112c10 - 0x112c34
void Cmd_SET_SCALE_Entry__FP15BsSCDEntControl_0x112c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_SCALE_Entry__FP15BsSCDEntControl_0x112c10");
#endif

    switch (ctx->pc) {
        case 0x112c28u: goto label_112c28;
        default: break;
    }

    ctx->pc = 0x112c10u;

    // 0x112c10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112c14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112c18: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x112c18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112c20: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x112C20u;
    SET_GPR_U32(ctx, 31, 0x112C28u);
    ctx->pc = 0x112C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C20u;
    // 0x112c24: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x112C20u, 0x112C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C28u;
label_112c28:
    // 0x112c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x112C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C2Cu;
        // 0x112c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112C34u;
}
