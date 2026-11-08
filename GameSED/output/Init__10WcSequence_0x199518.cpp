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

// Function: Init__10WcSequence
// Address: 0x199518 - 0x199558
void Init__10WcSequence_0x199518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__10WcSequence_0x199518");
#endif

    switch (ctx->pc) {
        case 0x19954cu: goto label_19954c;
        default: break;
    }

    ctx->pc = 0x199518u;

    // 0x199518: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x199518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x19951c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19951cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199524: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x199528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19952c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x19952cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x199530: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x199530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
    // 0x199534: 0xac430150  sw          $v1, 0x150($v0)
    ctx->pc = 0x199534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 3));
    // 0x199538: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x199538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x19953c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19953cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x199540: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x199540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x199544: 0xc066556  jal         func_199558
    ctx->pc = 0x199544u;
    SET_GPR_U32(ctx, 31, 0x19954Cu);
    ctx->pc = 0x199548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199544u;
    // 0x199548: 0xac600078  sw          $zero, 0x78($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199558u, 0x199544u, 0x19954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19954Cu;
label_19954c:
    // 0x19954c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199550: 0x3e00008  jr          $ra
    ctx->pc = 0x199550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199550u;
        // 0x199554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199558u;
}
