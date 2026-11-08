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

// Function: uncaught_exception__Fv
// Address: 0x1cd068 - 0x1cd09c
void uncaught_exception__Fv_0x1cd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("uncaught_exception__Fv_0x1cd068");
#endif

    switch (ctx->pc) {
        case 0x1cd078u: goto label_1cd078;
        default: break;
    }

    ctx->pc = 0x1cd068u;

    // 0x1cd068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd070: 0xc0734a6  jal         func_1CD298
    ctx->pc = 0x1CD070u;
    SET_GPR_U32(ctx, 31, 0x1CD078u);
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CD070u, 0x1CD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD078u;
label_1cd078:
    // 0x1cd078: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd07c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD07Cu;
    {
        const bool branch_taken_0x1cd07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD07Cu;
        // 0x1cd080: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd07c) {
            ctx->pc = 0x1CD08Cu;
            goto label_1cd08c;
        }
    }
    ctx->pc = 0x1CD084u;
    // 0x1cd084: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1cd084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1cd088: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1cd088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cd08c:
    // 0x1cd08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd090: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cd090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd094: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD094u;
        // 0x1cd098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD09Cu;
}
