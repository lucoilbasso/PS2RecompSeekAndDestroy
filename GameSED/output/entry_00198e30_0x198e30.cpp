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

// Function: entry_00198e30
// Address: 0x198e30 - 0x198e54
void entry_00198e30_0x198e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198e30_0x198e30");
#endif

    ctx->pc = 0x198e30u;

label_198e30:
    // 0x198e30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198e34:
    // 0x198e34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_198e38:
    if (ctx->pc == 0x198E38u) {
        ctx->pc = 0x198E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E34u;
        // 0x198e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E3Cu;
        goto label_198e3c;
    }
    ctx->pc = 0x198E34u;
    {
        const bool branch_taken_0x198e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E34u;
        // 0x198e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e34) {
            ctx->pc = 0x198E54u;
            return;
        }
    }
    ctx->pc = 0x198E3Cu;
label_198e3c:
    // 0x198e3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x198e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_198e40:
    // 0x198e40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_198e44:
    // 0x198e44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x198e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_198e48:
    // 0x198e48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_198e4c:
    // 0x198e4c: 0x60f809  jalr        $v1
label_198e50:
    if (ctx->pc == 0x198E50u) {
        ctx->pc = 0x198E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E4Cu;
        // 0x198e50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E54u;
        goto label_fallthrough_0x198e4c;
    }
    ctx->pc = 0x198E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198E54u);
        ctx->pc = 0x198E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E4Cu;
        // 0x198e50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198E4Cu, 0x198E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x198e4c:
    ctx->pc = 0x198E54u;
}
