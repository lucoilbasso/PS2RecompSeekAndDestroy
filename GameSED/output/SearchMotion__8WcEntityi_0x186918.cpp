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

// Function: SearchMotion__8WcEntityi
// Address: 0x186918 - 0x186964
void SearchMotion__8WcEntityi_0x186918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMotion__8WcEntityi_0x186918");
#endif

    switch (ctx->pc) {
        case 0x186928u: goto label_186928;
        default: break;
    }

    ctx->pc = 0x186918u;

    // 0x186918: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x186918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x18691c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18691Cu;
    {
        const bool branch_taken_0x18691c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18691Cu;
        // 0x186920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18691c) {
            ctx->pc = 0x186950u;
            goto label_186950;
        }
    }
    ctx->pc = 0x186924u;
    // 0x186924: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186928:
    // 0x186928: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x186928u;
    {
        const bool branch_taken_0x186928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186928u;
        // 0x18692c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186928) {
            ctx->pc = 0x186950u;
            goto label_186950;
        }
    }
    ctx->pc = 0x186930u;
    // 0x186930: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x186930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x186934: 0x0  nop
    ctx->pc = 0x186934u;
    // NOP
    // 0x186938: 0x0  nop
    ctx->pc = 0x186938u;
    // NOP
    // 0x18693c: 0x0  nop
    ctx->pc = 0x18693cu;
    // NOP
    // 0x186940: 0x0  nop
    ctx->pc = 0x186940u;
    // NOP
    // 0x186944: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186944) {
            ctx->pc = 0x186948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186944u;
            // 0x186948: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186928;
        }
    }
    ctx->pc = 0x18694Cu;
    // 0x18694c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186950:
    // 0x186950: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x186950u;
    {
        const bool branch_taken_0x186950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186950u;
        // 0x186954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186950) {
            ctx->pc = 0x18695Cu;
            goto label_18695c;
        }
    }
    ctx->pc = 0x186958u;
    // 0x186958: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x186958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18695c:
    // 0x18695c: 0x3e00008  jr          $ra
    ctx->pc = 0x18695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18695Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186964u;
}
