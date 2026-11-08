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

// Function: entry_00101b78
// Address: 0x101b78 - 0x101bec
void entry_00101b78_0x101b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101b78_0x101b78");
#endif

    switch (ctx->pc) {
        case 0x101b80u: goto label_101b80;
        case 0x101b8cu: goto label_101b8c;
        case 0x101bacu: goto label_101bac;
        case 0x101bb4u: goto label_101bb4;
        default: break;
    }

    ctx->pc = 0x101b78u;

    // 0x101b78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B78u;
    SET_GPR_U32(ctx, 31, 0x101B80u);
    ctx->pc = 0x101B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B78u;
    // 0x101b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B78u, 0x101B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B80u;
label_101b80:
    // 0x101b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101B84u;
    SET_GPR_U32(ctx, 31, 0x101B8Cu);
    ctx->pc = 0x101B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B84u;
    // 0x101b88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101B84u, 0x101B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B8Cu;
label_101b8c:
    // 0x101b8c: 0x16200048  bnez        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x101B8Cu;
    {
        const bool branch_taken_0x101b8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x101B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B8Cu;
        // 0x101b90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b8c) {
            ctx->pc = 0x101CB0u;
            return;
        }
    }
    ctx->pc = 0x101B94u;
    // 0x101b94: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x101b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x101b98: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x101b98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b9c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x101b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ba0: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x101ba4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101BA4u;
    SET_GPR_U32(ctx, 31, 0x101BACu);
    ctx->pc = 0x101BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BA4u;
    // 0x101ba8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101BA4u, 0x101BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BACu;
label_101bac:
    // 0x101bac: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101BACu;
    SET_GPR_U32(ctx, 31, 0x101BB4u);
    ctx->pc = 0x101BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BACu;
    // 0x101bb0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101BACu, 0x101BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BB4u;
label_101bb4:
    // 0x101bb4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x101bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x101bb8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x101bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101bbc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x101bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x101bc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101bc4: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101bcc: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101BCCu;
    {
        const bool branch_taken_0x101bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x101BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BCCu;
        // 0x101bd0: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bcc) {
            ctx->pc = 0x101BECu;
            return;
        }
    }
    ctx->pc = 0x101BD4u;
    // 0x101bd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101bd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bdc: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101be0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x101be4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101BE4u;
    SET_GPR_U32(ctx, 31, 0x101BECu);
    ctx->pc = 0x101BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BE4u;
    // 0x101be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101BE4u, 0x101BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BECu;
}
