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

// Function: entry_0013afd8
// Address: 0x13afd8 - 0x13b004
void entry_0013afd8_0x13afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013afd8_0x13afd8");
#endif

    ctx->pc = 0x13afd8u;

label_13afd8:
    // 0x13afd8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13afdc:
    // 0x13afdc: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13afe0:
    // 0x13afe0: 0x8cc6020c  lw          $a2, 0x20C($a2)
    ctx->pc = 0x13afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_13afe4:
    // 0x13afe4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13afe8:
    if (ctx->pc == 0x13AFE8u) {
        ctx->pc = 0x13AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFE4u;
        // 0x13afe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFECu;
        goto label_13afec;
    }
    ctx->pc = 0x13AFE4u;
    {
        const bool branch_taken_0x13afe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFE4u;
        // 0x13afe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afe4) {
            ctx->pc = 0x13B004u;
            return;
        }
    }
    ctx->pc = 0x13AFECu;
label_13afec:
    // 0x13afec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13aff0:
    // 0x13aff0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13aff4:
    // 0x13aff4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13aff8:
    // 0x13aff8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13affc:
    // 0x13affc: 0x60f809  jalr        $v1
label_13b000:
    if (ctx->pc == 0x13B000u) {
        ctx->pc = 0x13B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFFCu;
        // 0x13b000: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B004u;
        goto label_fallthrough_0x13affc;
    }
    ctx->pc = 0x13AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13B004u);
        ctx->pc = 0x13B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFFCu;
        // 0x13b000: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFFCu, 0x13B004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13affc:
    ctx->pc = 0x13B004u;
}
