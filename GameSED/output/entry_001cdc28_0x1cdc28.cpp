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

// Function: entry_001cdc28
// Address: 0x1cdc28 - 0x1cdc70
void entry_001cdc28_0x1cdc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc28_0x1cdc28");
#endif

    switch (ctx->pc) {
        case 0x1cdc60u: goto label_1cdc60;
        default: break;
    }

    ctx->pc = 0x1cdc28u;

label_1cdc28:
    // 0x1cdc28: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_1cdc2c:
    if (ctx->pc == 0x1CDC2Cu) {
        ctx->pc = 0x1CDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC28u;
        // 0x1cdc2c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC30u;
        goto label_1cdc30;
    }
    ctx->pc = 0x1CDC28u;
    {
        const bool branch_taken_0x1cdc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc28) {
            ctx->pc = 0x1CDC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC28u;
            // 0x1cdc2c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC84u;
            return;
        }
    }
    ctx->pc = 0x1CDC30u;
label_1cdc30:
    // 0x1cdc30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cdc34:
    // 0x1cdc34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cdc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cdc38:
    // 0x1cdc38: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1cdc3c:
    if (ctx->pc == 0x1CDC3Cu) {
        ctx->pc = 0x1CDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC38u;
        // 0x1cdc3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC40u;
        goto label_1cdc40;
    }
    ctx->pc = 0x1CDC38u;
    {
        const bool branch_taken_0x1cdc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc38) {
            ctx->pc = 0x1CDC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC38u;
            // 0x1cdc3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC84u;
            return;
        }
    }
    ctx->pc = 0x1CDC40u;
label_1cdc40:
    // 0x1cdc40: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cdc44:
    // 0x1cdc44: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1cdc48:
    if (ctx->pc == 0x1CDC48u) {
        ctx->pc = 0x1CDC4Cu;
        goto label_1cdc4c;
    }
    ctx->pc = 0x1CDC44u;
    {
        const bool branch_taken_0x1cdc44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc44) {
            ctx->pc = 0x1CDC78u;
            return;
        }
    }
    ctx->pc = 0x1CDC4Cu;
label_1cdc4c:
    // 0x1cdc4c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cdc50:
    // 0x1cdc50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1cdc54:
    if (ctx->pc == 0x1CDC54u) {
        ctx->pc = 0x1CDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC50u;
        // 0x1cdc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC58u;
        goto label_1cdc58;
    }
    ctx->pc = 0x1CDC50u;
    {
        const bool branch_taken_0x1cdc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC50u;
        // 0x1cdc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc50) {
            ctx->pc = 0x1CDC80u;
            return;
        }
    }
    ctx->pc = 0x1CDC58u;
label_1cdc58:
    // 0x1cdc58: 0x40f809  jalr        $v0
label_1cdc5c:
    if (ctx->pc == 0x1CDC5Cu) {
        ctx->pc = 0x1CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC58u;
        // 0x1cdc5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC60u;
        goto label_1cdc60;
    }
    ctx->pc = 0x1CDC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDC60u);
        ctx->pc = 0x1CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC58u;
        // 0x1cdc5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC58u, 0x1CDC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDC60u;
label_1cdc60:
    // 0x1cdc60: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1cdc64:
    if (ctx->pc == 0x1CDC64u) {
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC60u;
        // 0x1cdc64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC68u;
        goto label_1cdc68;
    }
    ctx->pc = 0x1CDC60u;
    {
        const bool branch_taken_0x1cdc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc60) {
            ctx->pc = 0x1CDC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC60u;
            // 0x1cdc64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC84u;
            return;
        }
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_1cdc6c:
    if (ctx->pc == 0x1CDC6Cu) {
        ctx->pc = 0x1CDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC68u;
        // 0x1cdc6c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC70u;
        goto label_fallthrough_0x1cdc68;
    }
    ctx->pc = 0x1CDC68u;
    {
        const bool branch_taken_0x1cdc68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc68) {
            ctx->pc = 0x1CDC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC68u;
            // 0x1cdc6c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC70u;
            return;
        }
    }
label_fallthrough_0x1cdc68:
    ctx->pc = 0x1CDC70u;
}
