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

// Function: entry_0015cb20
// Address: 0x15cb20 - 0x15cb6c
void entry_0015cb20_0x15cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb20_0x15cb20");
#endif

    switch (ctx->pc) {
        case 0x15cb48u: goto label_15cb48;
        default: break;
    }

    ctx->pc = 0x15cb20u;

label_15cb20:
    // 0x15cb20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cb24:
    // 0x15cb24: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cb28:
    if (ctx->pc == 0x15CB28u) {
        ctx->pc = 0x15CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB24u;
        // 0x15cb28: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB2Cu;
        goto label_15cb2c;
    }
    ctx->pc = 0x15CB24u;
    {
        const bool branch_taken_0x15cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb24) {
            ctx->pc = 0x15CB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB24u;
            // 0x15cb28: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB70u;
            return;
        }
    }
    ctx->pc = 0x15CB2Cu;
label_15cb2c:
    // 0x15cb2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cb30:
    // 0x15cb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb34:
    // 0x15cb34: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cb38:
    // 0x15cb38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cb3c:
    // 0x15cb3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cb40:
    // 0x15cb40: 0x60f809  jalr        $v1
label_15cb44:
    if (ctx->pc == 0x15CB44u) {
        ctx->pc = 0x15CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB40u;
        // 0x15cb44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB48u;
        goto label_15cb48;
    }
    ctx->pc = 0x15CB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CB48u);
        ctx->pc = 0x15CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB40u;
        // 0x15cb44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB40u, 0x15CB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CB48u;
label_15cb48:
    // 0x15cb48: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cb4c:
    // 0x15cb4c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cb50:
    if (ctx->pc == 0x15CB50u) {
        ctx->pc = 0x15CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB4Cu;
        // 0x15cb50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB54u;
        goto label_15cb54;
    }
    ctx->pc = 0x15CB4Cu;
    {
        const bool branch_taken_0x15cb4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB4Cu;
        // 0x15cb50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb4c) {
            ctx->pc = 0x15CB6Cu;
            return;
        }
    }
    ctx->pc = 0x15CB54u;
label_15cb54:
    // 0x15cb54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cb58:
    // 0x15cb58: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cb5c:
    // 0x15cb5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cb60:
    // 0x15cb60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cb64:
    // 0x15cb64: 0x60f809  jalr        $v1
label_15cb68:
    if (ctx->pc == 0x15CB68u) {
        ctx->pc = 0x15CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB64u;
        // 0x15cb68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB6Cu;
        goto label_fallthrough_0x15cb64;
    }
    ctx->pc = 0x15CB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CB6Cu);
        ctx->pc = 0x15CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB64u;
        // 0x15cb68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB64u, 0x15CB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cb64:
    ctx->pc = 0x15CB6Cu;
}
