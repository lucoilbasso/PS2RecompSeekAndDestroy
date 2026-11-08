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

// Function: RefreshCoordinate__8WcEntity
// Address: 0x186510 - 0x186550
void RefreshCoordinate__8WcEntity_0x186510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshCoordinate__8WcEntity_0x186510");
#endif

    switch (ctx->pc) {
        case 0x186530u: goto label_186530;
        case 0x186538u: goto label_186538;
        default: break;
    }

    ctx->pc = 0x186510u;

    // 0x186510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18651c: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x18651cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x186520: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x186520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x186524: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186524u;
    {
        const bool branch_taken_0x186524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x186528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186524u;
        // 0x186528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186524) {
            ctx->pc = 0x186540u;
            goto label_186540;
        }
    }
    ctx->pc = 0x18652Cu;
    // 0x18652c: 0x0  nop
    ctx->pc = 0x18652cu;
    // NOP
label_186530:
    // 0x186530: 0xc061934  jal         func_1864D0
    ctx->pc = 0x186530u;
    SET_GPR_U32(ctx, 31, 0x186538u);
    ctx->pc = 0x186534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186530u;
    // 0x186534: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x186530u, 0x186538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186538u;
label_186538:
    // 0x186538: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x186538u;
    {
        const bool branch_taken_0x186538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186538u;
        // 0x18653c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186538) {
            ctx->pc = 0x186530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186530;
        }
    }
    ctx->pc = 0x186540u;
label_186540:
    // 0x186540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186544: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186548: 0x3e00008  jr          $ra
    ctx->pc = 0x186548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186548u;
        // 0x18654c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186550u;
}
