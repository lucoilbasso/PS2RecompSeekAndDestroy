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

// Function: entry_00102b60
// Address: 0x102b60 - 0x102bb8
void entry_00102b60_0x102b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102b60_0x102b60");
#endif

    switch (ctx->pc) {
        case 0x102b78u: goto label_102b78;
        case 0x102b80u: goto label_102b80;
        case 0x102b88u: goto label_102b88;
        case 0x102b90u: goto label_102b90;
        case 0x102b98u: goto label_102b98;
        case 0x102ba8u: goto label_102ba8;
        default: break;
    }

    ctx->pc = 0x102b60u;

    // 0x102b60: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x102b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x102b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x102b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b70: 0xc04095a  jal         func_102568
    ctx->pc = 0x102B70u;
    SET_GPR_U32(ctx, 31, 0x102B78u);
    ctx->pc = 0x102B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B70u;
    // 0x102b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102568u, 0x102B70u, 0x102B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B78u;
label_102b78:
    // 0x102b78: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102B78u;
    SET_GPR_U32(ctx, 31, 0x102B80u);
    ctx->pc = 0x102B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B78u;
    // 0x102b7c: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102B78u, 0x102B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B80u;
label_102b80:
    // 0x102b80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102B80u;
    SET_GPR_U32(ctx, 31, 0x102B88u);
    ctx->pc = 0x102B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B80u;
    // 0x102b84: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102B80u, 0x102B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B88u;
label_102b88:
    // 0x102b88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102B88u;
    SET_GPR_U32(ctx, 31, 0x102B90u);
    ctx->pc = 0x102B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B88u;
    // 0x102b8c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102B88u, 0x102B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B90u;
label_102b90:
    // 0x102b90: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102B90u;
    SET_GPR_U32(ctx, 31, 0x102B98u);
    ctx->pc = 0x102B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B90u;
    // 0x102b94: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102B90u, 0x102B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102B98u;
label_102b98:
    // 0x102b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ba0: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x102BA0u;
    SET_GPR_U32(ctx, 31, 0x102BA8u);
    ctx->pc = 0x102BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BA0u;
    // 0x102ba4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x102BA0u, 0x102BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BA8u;
label_102ba8:
    // 0x102ba8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x102bac: 0x58400010  blezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x102BACu;
    {
        const bool branch_taken_0x102bac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102bac) {
            ctx->pc = 0x102BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102BACu;
            // 0x102bb0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102BF0u;
            return;
        }
    }
    ctx->pc = 0x102BB4u;
    // 0x102bb4: 0x0  nop
    ctx->pc = 0x102bb4u;
    // NOP
    ctx->pc = 0x102bb8u;
}
