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

// Function: entry_00118878
// Address: 0x118878 - 0x1188b0
void entry_00118878_0x118878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118878_0x118878");
#endif

    ctx->pc = 0x118878u;

label_118878:
    // 0x118878: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11887c: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x11887cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x118880: 0x0  nop
    ctx->pc = 0x118880u;
    // NOP
    // 0x118884: 0x0  nop
    ctx->pc = 0x118884u;
    // NOP
    // 0x118888: 0x0  nop
    ctx->pc = 0x118888u;
    // NOP
    // 0x11888c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11888Cu;
    {
        const bool branch_taken_0x11888c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11888Cu;
        // 0x118890: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11888c) {
            ctx->pc = 0x118878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118878;
        }
    }
    ctx->pc = 0x118894u;
    // 0x118894: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118898: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11889c: 0x28e2006e  slti        $v0, $a3, 0x6E
    ctx->pc = 0x11889cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1188a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1188A0u;
    {
        const bool branch_taken_0x1188a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1188A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188A0u;
        // 0x1188a4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188a0) {
            ctx->pc = 0x118868u;
            return;
        }
    }
    ctx->pc = 0x1188A8u;
    // 0x1188a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1188A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1188A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1188B0u;
}
