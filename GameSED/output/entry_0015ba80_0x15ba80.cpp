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

// Function: entry_0015ba80
// Address: 0x15ba80 - 0x15bacc
void entry_0015ba80_0x15ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ba80_0x15ba80");
#endif

    switch (ctx->pc) {
        case 0x15baa8u: goto label_15baa8;
        default: break;
    }

    ctx->pc = 0x15ba80u;

label_15ba80:
    // 0x15ba80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ba84:
    // 0x15ba84: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15ba88:
    if (ctx->pc == 0x15BA88u) {
        ctx->pc = 0x15BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA84u;
        // 0x15ba88: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA8Cu;
        goto label_15ba8c;
    }
    ctx->pc = 0x15BA84u;
    {
        const bool branch_taken_0x15ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba84) {
            ctx->pc = 0x15BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BA84u;
            // 0x15ba88: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BAD0u;
            return;
        }
    }
    ctx->pc = 0x15BA8Cu;
label_15ba8c:
    // 0x15ba8c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ba90:
    // 0x15ba90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ba94:
    // 0x15ba94: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ba98:
    // 0x15ba98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ba9c:
    // 0x15ba9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15baa0:
    // 0x15baa0: 0x60f809  jalr        $v1
label_15baa4:
    if (ctx->pc == 0x15BAA4u) {
        ctx->pc = 0x15BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA0u;
        // 0x15baa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAA8u;
        goto label_15baa8;
    }
    ctx->pc = 0x15BAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BAA8u);
        ctx->pc = 0x15BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA0u;
        // 0x15baa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAA0u, 0x15BAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BAA8u;
label_15baa8:
    // 0x15baa8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15baac:
    // 0x15baac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bab0:
    if (ctx->pc == 0x15BAB0u) {
        ctx->pc = 0x15BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAACu;
        // 0x15bab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAB4u;
        goto label_15bab4;
    }
    ctx->pc = 0x15BAACu;
    {
        const bool branch_taken_0x15baac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAACu;
        // 0x15bab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baac) {
            ctx->pc = 0x15BACCu;
            return;
        }
    }
    ctx->pc = 0x15BAB4u;
label_15bab4:
    // 0x15bab4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bab8:
    // 0x15bab8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15babc:
    // 0x15babc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15babcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bac0:
    // 0x15bac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bac4:
    // 0x15bac4: 0x60f809  jalr        $v1
label_15bac8:
    if (ctx->pc == 0x15BAC8u) {
        ctx->pc = 0x15BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAC4u;
        // 0x15bac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BACCu;
        goto label_fallthrough_0x15bac4;
    }
    ctx->pc = 0x15BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BACCu);
        ctx->pc = 0x15BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAC4u;
        // 0x15bac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAC4u, 0x15BACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15bac4:
    ctx->pc = 0x15BACCu;
}
