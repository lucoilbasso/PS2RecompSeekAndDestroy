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

// Function: entry_0015cf10
// Address: 0x15cf10 - 0x15cf5c
void entry_0015cf10_0x15cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cf10_0x15cf10");
#endif

    switch (ctx->pc) {
        case 0x15cf38u: goto label_15cf38;
        default: break;
    }

    ctx->pc = 0x15cf10u;

label_15cf10:
    // 0x15cf10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cf14:
    // 0x15cf14: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cf18:
    if (ctx->pc == 0x15CF18u) {
        ctx->pc = 0x15CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF14u;
        // 0x15cf18: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF1Cu;
        goto label_15cf1c;
    }
    ctx->pc = 0x15CF14u;
    {
        const bool branch_taken_0x15cf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf14) {
            ctx->pc = 0x15CF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CF14u;
            // 0x15cf18: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF60u;
            return;
        }
    }
    ctx->pc = 0x15CF1Cu;
label_15cf1c:
    // 0x15cf1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cf20:
    // 0x15cf20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cf24:
    // 0x15cf24: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cf28:
    // 0x15cf28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cf2c:
    // 0x15cf2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cf30:
    // 0x15cf30: 0x60f809  jalr        $v1
label_15cf34:
    if (ctx->pc == 0x15CF34u) {
        ctx->pc = 0x15CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF30u;
        // 0x15cf34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF38u;
        goto label_15cf38;
    }
    ctx->pc = 0x15CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CF38u);
        ctx->pc = 0x15CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF30u;
        // 0x15cf34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF30u, 0x15CF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CF38u;
label_15cf38:
    // 0x15cf38: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cf3c:
    // 0x15cf3c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cf40:
    if (ctx->pc == 0x15CF40u) {
        ctx->pc = 0x15CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF3Cu;
        // 0x15cf40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF44u;
        goto label_15cf44;
    }
    ctx->pc = 0x15CF3Cu;
    {
        const bool branch_taken_0x15cf3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF3Cu;
        // 0x15cf40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf3c) {
            ctx->pc = 0x15CF5Cu;
            return;
        }
    }
    ctx->pc = 0x15CF44u;
label_15cf44:
    // 0x15cf44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cf48:
    // 0x15cf48: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cf4c:
    // 0x15cf4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cf50:
    // 0x15cf50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cf54:
    // 0x15cf54: 0x60f809  jalr        $v1
label_15cf58:
    if (ctx->pc == 0x15CF58u) {
        ctx->pc = 0x15CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF54u;
        // 0x15cf58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF5Cu;
        goto label_fallthrough_0x15cf54;
    }
    ctx->pc = 0x15CF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CF5Cu);
        ctx->pc = 0x15CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF54u;
        // 0x15cf58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF54u, 0x15CF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cf54:
    ctx->pc = 0x15CF5Cu;
}
