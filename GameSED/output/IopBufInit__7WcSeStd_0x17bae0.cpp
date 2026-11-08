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

// Function: IopBufInit__7WcSeStd
// Address: 0x17bae0 - 0x17bb18
void IopBufInit__7WcSeStd_0x17bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IopBufInit__7WcSeStd_0x17bae0");
#endif

    switch (ctx->pc) {
        case 0x17baf0u: goto label_17baf0;
        default: break;
    }

    ctx->pc = 0x17bae0u;

    // 0x17bae0: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x17bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x17bae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bae8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x17bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x17baec: 0x0  nop
    ctx->pc = 0x17baecu;
    // NOP
label_17baf0:
    // 0x17baf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17baf4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17baf8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x17baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x17bafc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x17bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x17bb00: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17bb04: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x17bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17bb08: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BB08u;
    {
        const bool branch_taken_0x17bb08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB08u;
        // 0x17bb0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb08) {
            ctx->pc = 0x17BAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17baf0;
        }
    }
    ctx->pc = 0x17BB10u;
    // 0x17bb10: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB18u;
}
