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

// Function: NameInit__20ApItemGameInfomation
// Address: 0x1184d8 - 0x11850c
void NameInit__20ApItemGameInfomation_0x1184d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NameInit__20ApItemGameInfomation_0x1184d8");
#endif

    switch (ctx->pc) {
        case 0x1184e8u: goto label_1184e8;
        default: break;
    }

    ctx->pc = 0x1184d8u;

    // 0x1184d8: 0xac800c0c  sw          $zero, 0xC0C($a0)
    ctx->pc = 0x1184d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3084), GPR_U32(ctx, 0));
    // 0x1184dc: 0x24840c28  addiu       $a0, $a0, 0xC28
    ctx->pc = 0x1184dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3112));
    // 0x1184e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1184e4: 0x0  nop
    ctx->pc = 0x1184e4u;
    // NOP
label_1184e8:
    // 0x1184e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1184e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1184ec: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1184ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1184f0: 0x0  nop
    ctx->pc = 0x1184f0u;
    // NOP
    // 0x1184f4: 0x0  nop
    ctx->pc = 0x1184f4u;
    // NOP
    // 0x1184f8: 0x0  nop
    ctx->pc = 0x1184f8u;
    // NOP
    // 0x1184fc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1184FCu;
    {
        const bool branch_taken_0x1184fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184FCu;
        // 0x118500: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184fc) {
            ctx->pc = 0x1184E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1184e8;
        }
    }
    ctx->pc = 0x118504u;
    // 0x118504: 0x3e00008  jr          $ra
    ctx->pc = 0x118504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11850Cu;
}
