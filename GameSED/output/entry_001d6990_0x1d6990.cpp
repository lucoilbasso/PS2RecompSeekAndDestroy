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

// Function: entry_001d6990
// Address: 0x1d6990 - 0x1d69c8
void entry_001d6990_0x1d6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6990_0x1d6990");
#endif

    ctx->pc = 0x1d6990u;

label_1d6990:
    // 0x1d6990: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1d6994:
    // 0x1d6994: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1d6994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1d6998:
    // 0x1d6998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d699c:
    // 0x1d699c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d699cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d69a0:
    // 0x1d69a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d69a4:
    // 0x1d69a4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d69a8:
    if (ctx->pc == 0x1D69A8u) {
        ctx->pc = 0x1D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69A4u;
        // 0x1d69a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69ACu;
        goto label_1d69ac;
    }
    ctx->pc = 0x1D69A4u;
    {
        const bool branch_taken_0x1d69a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69A4u;
        // 0x1d69a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69a4) {
            ctx->pc = 0x1D69C8u;
            return;
        }
    }
    ctx->pc = 0x1D69ACu;
label_1d69ac:
    // 0x1d69ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d69b0:
    // 0x1d69b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d69b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d69b4:
    // 0x1d69b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d69b8:
    // 0x1d69b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d69bc:
    // 0x1d69bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d69c0:
    // 0x1d69c0: 0x60f809  jalr        $v1
label_1d69c4:
    if (ctx->pc == 0x1D69C4u) {
        ctx->pc = 0x1D69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69C0u;
        // 0x1d69c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69C8u;
        goto label_fallthrough_0x1d69c0;
    }
    ctx->pc = 0x1D69C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D69C8u);
        ctx->pc = 0x1D69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69C0u;
        // 0x1d69c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D69C0u, 0x1D69C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d69c0:
    ctx->pc = 0x1D69C8u;
}
