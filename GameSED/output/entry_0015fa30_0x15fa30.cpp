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

// Function: entry_0015fa30
// Address: 0x15fa30 - 0x15fa54
void entry_0015fa30_0x15fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fa30_0x15fa30");
#endif

    ctx->pc = 0x15fa30u;

label_15fa30:
    // 0x15fa30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_15fa34:
    // 0x15fa34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15fa34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_15fa38:
    // 0x15fa38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fa3c:
    // 0x15fa3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15fa40:
    // 0x15fa40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15fa44:
    // 0x15fa44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15fa44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15fa48:
    // 0x15fa48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15fa4c:
    // 0x15fa4c: 0x60f809  jalr        $v1
label_15fa50:
    if (ctx->pc == 0x15FA50u) {
        ctx->pc = 0x15FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA4Cu;
        // 0x15fa50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA54u;
        goto label_fallthrough_0x15fa4c;
    }
    ctx->pc = 0x15FA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FA54u);
        ctx->pc = 0x15FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA4Cu;
        // 0x15fa50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA4Cu, 0x15FA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15fa4c:
    ctx->pc = 0x15FA54u;
}
