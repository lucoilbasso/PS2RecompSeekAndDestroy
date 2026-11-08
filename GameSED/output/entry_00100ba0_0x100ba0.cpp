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

// Function: entry_00100ba0
// Address: 0x100ba0 - 0x100bf0
void entry_00100ba0_0x100ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ba0_0x100ba0");
#endif

    switch (ctx->pc) {
        case 0x100ba8u: goto label_100ba8;
        case 0x100bb4u: goto label_100bb4;
        default: break;
    }

    ctx->pc = 0x100ba0u;

label_100ba0:
    // 0x100ba0: 0xc06a26e  jal         func_1A89B8
label_100ba4:
    if (ctx->pc == 0x100BA4u) {
        ctx->pc = 0x100BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA0u;
        // 0x100ba4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BA8u;
        goto label_100ba8;
    }
    ctx->pc = 0x100BA0u;
    SET_GPR_U32(ctx, 31, 0x100BA8u);
    ctx->pc = 0x100BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BA0u;
    // 0x100ba4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100BA0u, 0x100BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BA8u;
label_100ba8:
    // 0x100ba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100bac:
    // 0x100bac: 0xc06a26e  jal         func_1A89B8
label_100bb0:
    if (ctx->pc == 0x100BB0u) {
        ctx->pc = 0x100BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BACu;
        // 0x100bb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BB4u;
        goto label_100bb4;
    }
    ctx->pc = 0x100BACu;
    SET_GPR_U32(ctx, 31, 0x100BB4u);
    ctx->pc = 0x100BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BACu;
    // 0x100bb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100BACu, 0x100BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BB4u;
label_100bb4:
    // 0x100bb4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_100bb8:
    if (ctx->pc == 0x100BB8u) {
        ctx->pc = 0x100BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BB4u;
        // 0x100bb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BBCu;
        goto label_100bbc;
    }
    ctx->pc = 0x100BB4u;
    {
        const bool branch_taken_0x100bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100bb4) {
            ctx->pc = 0x100BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100BB4u;
            // 0x100bb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100BF8u;
            return;
        }
    }
    ctx->pc = 0x100BBCu;
label_100bbc:
    // 0x100bbc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_100bc0:
    // 0x100bc0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x100bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_100bc4:
    // 0x100bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100bc8:
    // 0x100bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100bcc:
    // 0x100bcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100bd0:
    // 0x100bd0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100bd4:
    if (ctx->pc == 0x100BD4u) {
        ctx->pc = 0x100BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD0u;
        // 0x100bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BD8u;
        goto label_100bd8;
    }
    ctx->pc = 0x100BD0u;
    {
        const bool branch_taken_0x100bd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD0u;
        // 0x100bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bd0) {
            ctx->pc = 0x100BF0u;
            return;
        }
    }
    ctx->pc = 0x100BD8u;
label_100bd8:
    // 0x100bd8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100bdc:
    // 0x100bdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100be0:
    // 0x100be0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100be4:
    // 0x100be4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100be8:
    // 0x100be8: 0x60f809  jalr        $v1
label_100bec:
    if (ctx->pc == 0x100BECu) {
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BF0u;
        goto label_fallthrough_0x100be8;
    }
    ctx->pc = 0x100BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100BF0u);
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BE8u, 0x100BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100be8:
    ctx->pc = 0x100BF0u;
}
