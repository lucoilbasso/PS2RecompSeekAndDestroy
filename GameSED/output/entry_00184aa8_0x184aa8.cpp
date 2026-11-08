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

// Function: entry_00184aa8
// Address: 0x184aa8 - 0x184ae0
void entry_00184aa8_0x184aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184aa8_0x184aa8");
#endif

    switch (ctx->pc) {
        case 0x184ab4u: goto label_184ab4;
        case 0x184accu: goto label_184acc;
        default: break;
    }

    ctx->pc = 0x184aa8u;

label_184aa8:
    // 0x184aa8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x184aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_184aac:
    // 0x184aac: 0xc0617f0  jal         func_185FC0
label_184ab0:
    if (ctx->pc == 0x184AB0u) {
        ctx->pc = 0x184AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AACu;
        // 0x184ab0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AB4u;
        goto label_184ab4;
    }
    ctx->pc = 0x184AACu;
    SET_GPR_U32(ctx, 31, 0x184AB4u);
    ctx->pc = 0x184AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AACu;
    // 0x184ab0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FC0u, 0x184AACu, 0x184AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AB4u;
label_184ab4:
    // 0x184ab4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x184ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_184ab8:
    // 0x184ab8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x184ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_184abc:
    // 0x184abc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x184abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_184ac0:
    // 0x184ac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_184ac4:
    // 0x184ac4: 0x60f809  jalr        $v1
label_184ac8:
    if (ctx->pc == 0x184AC8u) {
        ctx->pc = 0x184AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AC4u;
        // 0x184ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184ACCu;
        goto label_184acc;
    }
    ctx->pc = 0x184AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184ACCu);
        ctx->pc = 0x184AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AC4u;
        // 0x184ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184AC4u, 0x184ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184ACCu;
label_184acc:
    // 0x184acc: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x184accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_184ad0:
    // 0x184ad0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_184ad4:
    if (ctx->pc == 0x184AD4u) {
        ctx->pc = 0x184AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AD0u;
        // 0x184ad4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AD8u;
        goto label_184ad8;
    }
    ctx->pc = 0x184AD0u;
    {
        const bool branch_taken_0x184ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ad0) {
            ctx->pc = 0x184AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184AD0u;
            // 0x184ad4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184B00u;
            return;
        }
    }
    ctx->pc = 0x184AD8u;
label_184ad8:
    // 0x184ad8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x184ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_184adc:
    // 0x184adc: 0x0  nop
    ctx->pc = 0x184adcu;
    // NOP
    ctx->pc = 0x184ae0u;
}
