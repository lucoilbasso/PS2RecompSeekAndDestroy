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

// Function: entry_00140c74
// Address: 0x140c74 - 0x140cb8
void entry_00140c74_0x140c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c74_0x140c74");
#endif

    switch (ctx->pc) {
        case 0x140c88u: goto label_140c88;
        case 0x140cb4u: goto label_140cb4;
        default: break;
    }

    ctx->pc = 0x140c74u;

label_140c74:
    // 0x140c74: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_140c78:
    // 0x140c78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_140c7c:
    // 0x140c7c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x140c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_140c80:
    // 0x140c80: 0xc061a46  jal         func_186918
label_140c84:
    if (ctx->pc == 0x140C84u) {
        ctx->pc = 0x140C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C80u;
        // 0x140c84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C88u;
        goto label_140c88;
    }
    ctx->pc = 0x140C80u;
    SET_GPR_U32(ctx, 31, 0x140C88u);
    ctx->pc = 0x140C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C80u;
    // 0x140c84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x140C80u, 0x140C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C88u;
label_140c88:
    // 0x140c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140c8c:
    // 0x140c8c: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
label_140c90:
    if (ctx->pc == 0x140C90u) {
        ctx->pc = 0x140C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C8Cu;
        // 0x140c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C94u;
        goto label_140c94;
    }
    ctx->pc = 0x140C8Cu;
    {
        const bool branch_taken_0x140c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c8c) {
            ctx->pc = 0x140C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C8Cu;
            // 0x140c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D20u;
            return;
        }
    }
    ctx->pc = 0x140C94u;
label_140c94:
    // 0x140c94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_140c98:
    // 0x140c98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_140c9c:
    if (ctx->pc == 0x140C9Cu) {
        ctx->pc = 0x140C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C98u;
        // 0x140c9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CA0u;
        goto label_140ca0;
    }
    ctx->pc = 0x140C98u;
    {
        const bool branch_taken_0x140c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C98u;
        // 0x140c9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c98) {
            ctx->pc = 0x140D1Cu;
            return;
        }
    }
    ctx->pc = 0x140CA0u;
label_140ca0:
    // 0x140ca0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_140ca4:
    // 0x140ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140ca8:
    if (ctx->pc == 0x140CA8u) {
        ctx->pc = 0x140CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CA4u;
        // 0x140ca8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CACu;
        goto label_140cac;
    }
    ctx->pc = 0x140CA4u;
    {
        const bool branch_taken_0x140ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ca4) {
            ctx->pc = 0x140CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140CA4u;
            // 0x140ca8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140CB8u;
            return;
        }
    }
    ctx->pc = 0x140CACu;
label_140cac:
    // 0x140cac: 0x40f809  jalr        $v0
label_140cb0:
    if (ctx->pc == 0x140CB0u) {
        ctx->pc = 0x140CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CACu;
        // 0x140cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CB4u;
        goto label_140cb4;
    }
    ctx->pc = 0x140CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140CB4u);
        ctx->pc = 0x140CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CACu;
        // 0x140cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140CACu, 0x140CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x140cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x140cb8u;
}
