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

// Function: B_FileName_HeadupSuffix__FPc
// Address: 0x19cd00 - 0x19cd3c
void B_FileName_HeadupSuffix__FPc_0x19cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_HeadupSuffix__FPc_0x19cd00");
#endif

    switch (ctx->pc) {
        case 0x19cd20u: goto label_19cd20;
        default: break;
    }

    ctx->pc = 0x19cd00u;

    // 0x19cd00: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cd04: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19CD04u;
    {
        const bool branch_taken_0x19cd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd04) {
            ctx->pc = 0x19CD34u;
            goto label_19cd34;
        }
    }
    ctx->pc = 0x19CD0Cu;
    // 0x19cd0c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cd10: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CD10u;
    {
        const bool branch_taken_0x19cd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19cd10) {
            ctx->pc = 0x19CD34u;
            goto label_19cd34;
        }
    }
    ctx->pc = 0x19CD18u;
    // 0x19cd18: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x19cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19cd1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19cd20:
    // 0x19cd20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cd24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CD24u;
    {
        const bool branch_taken_0x19cd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd24) {
            ctx->pc = 0x19CD34u;
            goto label_19cd34;
        }
    }
    ctx->pc = 0x19CD2Cu;
    // 0x19cd2c: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19CD2Cu;
    {
        const bool branch_taken_0x19cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19cd2c) {
            ctx->pc = 0x19CD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CD2Cu;
            // 0x19cd30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cd20;
        }
    }
    ctx->pc = 0x19CD34u;
label_19cd34:
    // 0x19cd34: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD34u;
        // 0x19cd38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD3Cu;
}
