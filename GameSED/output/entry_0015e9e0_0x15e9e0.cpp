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

// Function: entry_0015e9e0
// Address: 0x15e9e0 - 0x15ea2c
void entry_0015e9e0_0x15e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e9e0_0x15e9e0");
#endif

    switch (ctx->pc) {
        case 0x15ea08u: goto label_15ea08;
        default: break;
    }

    ctx->pc = 0x15e9e0u;

label_15e9e0:
    // 0x15e9e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e9e4:
    // 0x15e9e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e9e8:
    if (ctx->pc == 0x15E9E8u) {
        ctx->pc = 0x15E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9E4u;
        // 0x15e9e8: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9ECu;
        goto label_15e9ec;
    }
    ctx->pc = 0x15E9E4u;
    {
        const bool branch_taken_0x15e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e9e4) {
            ctx->pc = 0x15E9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E9E4u;
            // 0x15e9e8: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA30u;
            return;
        }
    }
    ctx->pc = 0x15E9ECu;
label_15e9ec:
    // 0x15e9ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e9f0:
    // 0x15e9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9f4:
    // 0x15e9f4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e9f8:
    // 0x15e9f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9fc:
    // 0x15e9fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ea00:
    // 0x15ea00: 0x60f809  jalr        $v1
label_15ea04:
    if (ctx->pc == 0x15EA04u) {
        ctx->pc = 0x15EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA00u;
        // 0x15ea04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA08u;
        goto label_15ea08;
    }
    ctx->pc = 0x15EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EA08u);
        ctx->pc = 0x15EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA00u;
        // 0x15ea04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA00u, 0x15EA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EA08u;
label_15ea08:
    // 0x15ea08: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ea0c:
    // 0x15ea0c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ea10:
    if (ctx->pc == 0x15EA10u) {
        ctx->pc = 0x15EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA0Cu;
        // 0x15ea10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA14u;
        goto label_15ea14;
    }
    ctx->pc = 0x15EA0Cu;
    {
        const bool branch_taken_0x15ea0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA0Cu;
        // 0x15ea10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea0c) {
            ctx->pc = 0x15EA2Cu;
            return;
        }
    }
    ctx->pc = 0x15EA14u;
label_15ea14:
    // 0x15ea14: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ea18:
    // 0x15ea18: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ea1c:
    // 0x15ea1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ea1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ea20:
    // 0x15ea20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ea24:
    // 0x15ea24: 0x60f809  jalr        $v1
label_15ea28:
    if (ctx->pc == 0x15EA28u) {
        ctx->pc = 0x15EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA24u;
        // 0x15ea28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA2Cu;
        goto label_fallthrough_0x15ea24;
    }
    ctx->pc = 0x15EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EA2Cu);
        ctx->pc = 0x15EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA24u;
        // 0x15ea28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA24u, 0x15EA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ea24:
    ctx->pc = 0x15EA2Cu;
}
