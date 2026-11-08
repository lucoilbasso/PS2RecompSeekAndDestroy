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

// Function: WPadSetRecordingMode__F12WPadPlayMode
// Address: 0x156b68 - 0x156b98
void WPadSetRecordingMode__F12WPadPlayMode_0x156b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSetRecordingMode__F12WPadPlayMode_0x156b68");
#endif

    switch (ctx->pc) {
        case 0x156b8cu: goto label_156b8c;
        default: break;
    }

    ctx->pc = 0x156b68u;

    // 0x156b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156b6c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x156b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x156b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156b74: 0x246335e0  addiu       $v1, $v1, 0x35E0
    ctx->pc = 0x156b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13792));
    // 0x156b78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2635E4u));
    // 0x156b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156B7Cu;
    {
        const bool branch_taken_0x156b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B7Cu;
        // 0x156b80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b7c) {
            ctx->pc = 0x156B8Cu;
            goto label_156b8c;
        }
    }
    ctx->pc = 0x156B84u;
    // 0x156b84: 0xc055ae6  jal         func_156B98
    ctx->pc = 0x156B84u;
    SET_GPR_U32(ctx, 31, 0x156B8Cu);
    ctx->pc = 0x156B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B84u;
    // 0x156b88: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B98u, 0x156B84u, 0x156B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B8Cu;
label_156b8c:
    // 0x156b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156b90: 0x3e00008  jr          $ra
    ctx->pc = 0x156B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B90u;
        // 0x156b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156B98u;
}
