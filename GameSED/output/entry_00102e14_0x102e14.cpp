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

// Function: entry_00102e14
// Address: 0x102e14 - 0x102e38
void entry_00102e14_0x102e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102e14_0x102e14");
#endif

    ctx->pc = 0x102e14u;

label_102e14:
    // 0x102e14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_102e18:
    // 0x102e18: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102e1c:
    if (ctx->pc == 0x102E1Cu) {
        ctx->pc = 0x102E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E18u;
        // 0x102e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E20u;
        goto label_102e20;
    }
    ctx->pc = 0x102E18u;
    {
        const bool branch_taken_0x102e18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E18u;
        // 0x102e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e18) {
            ctx->pc = 0x102E38u;
            return;
        }
    }
    ctx->pc = 0x102E20u;
label_102e20:
    // 0x102e20: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102e24:
    // 0x102e24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102e28:
    // 0x102e28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102e2c:
    // 0x102e2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102e30:
    // 0x102e30: 0x60f809  jalr        $v1
label_102e34:
    if (ctx->pc == 0x102E34u) {
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E38u;
        goto label_fallthrough_0x102e30;
    }
    ctx->pc = 0x102E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102E38u);
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E30u, 0x102E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x102e30:
    ctx->pc = 0x102E38u;
}
