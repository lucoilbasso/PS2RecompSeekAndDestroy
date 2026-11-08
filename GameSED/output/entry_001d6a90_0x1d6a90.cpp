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

// Function: entry_001d6a90
// Address: 0x1d6a90 - 0x1d6ac8
void entry_001d6a90_0x1d6a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6a90_0x1d6a90");
#endif

    ctx->pc = 0x1d6a90u;

label_1d6a90:
    // 0x1d6a90: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1d6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d6a94:
    // 0x1d6a94: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d6a98:
    // 0x1d6a98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d6a9c:
    // 0x1d6a9c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6aa0:
    // 0x1d6aa0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d6aa4:
    // 0x1d6aa4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6aa8:
    if (ctx->pc == 0x1D6AA8u) {
        ctx->pc = 0x1D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA4u;
        // 0x1d6aa8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AACu;
        goto label_1d6aac;
    }
    ctx->pc = 0x1D6AA4u;
    {
        const bool branch_taken_0x1d6aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA4u;
        // 0x1d6aa8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa4) {
            ctx->pc = 0x1D6AC8u;
            return;
        }
    }
    ctx->pc = 0x1D6AACu;
label_1d6aac:
    // 0x1d6aac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6ab0:
    // 0x1d6ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6ab4:
    // 0x1d6ab4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6ab8:
    // 0x1d6ab8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6abc:
    // 0x1d6abc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6ac0:
    // 0x1d6ac0: 0x60f809  jalr        $v1
label_1d6ac4:
    if (ctx->pc == 0x1D6AC4u) {
        ctx->pc = 0x1D6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC0u;
        // 0x1d6ac4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AC8u;
        goto label_fallthrough_0x1d6ac0;
    }
    ctx->pc = 0x1D6AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6AC8u);
        ctx->pc = 0x1D6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC0u;
        // 0x1d6ac4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AC0u, 0x1D6AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d6ac0:
    ctx->pc = 0x1D6AC8u;
}
