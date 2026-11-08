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

// Function: ApCRefWorkRotOfs__FP10ApCRefWorkiP9DVAngle32
// Address: 0x142958 - 0x142994
void ApCRefWorkRotOfs__FP10ApCRefWorkiP9DVAngle32_0x142958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefWorkRotOfs__FP10ApCRefWorkiP9DVAngle32_0x142958");
#endif

    ctx->pc = 0x142958u;

    // 0x142958: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x142958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x14295c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14295Cu;
    {
        const bool branch_taken_0x14295c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14295Cu;
        // 0x142960: 0x34a51000  ori         $a1, $a1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14295c) {
            ctx->pc = 0x142980u;
            goto label_142980;
        }
    }
    ctx->pc = 0x142964u;
    // 0x142964: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142968: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x142968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14296c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14296cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x142970: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x142970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142974: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x142974u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x142978: 0x3e00008  jr          $ra
    ctx->pc = 0x142978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142980u;
label_142980:
    // 0x142980: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142984: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x142984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x142988: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14298c: 0x3e00008  jr          $ra
    ctx->pc = 0x14298Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14298Cu;
        // 0x142990: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14298Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142994u;
}
