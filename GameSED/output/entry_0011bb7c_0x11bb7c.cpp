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

// Function: entry_0011bb7c
// Address: 0x11bb7c - 0x11bba0
void entry_0011bb7c_0x11bb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb7c_0x11bb7c");
#endif

    ctx->pc = 0x11bb7cu;

label_11bb7c:
    // 0x11bb7c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x11bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11bb80:
    // 0x11bb80: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_11bb84:
    if (ctx->pc == 0x11BB84u) {
        ctx->pc = 0x11BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB80u;
        // 0x11bb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB88u;
        goto label_11bb88;
    }
    ctx->pc = 0x11BB80u;
    {
        const bool branch_taken_0x11bb80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB80u;
        // 0x11bb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb80) {
            ctx->pc = 0x11BBA4u;
            return;
        }
    }
    ctx->pc = 0x11BB88u;
label_11bb88:
    // 0x11bb88: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11bb8c:
    // 0x11bb8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11bb90:
    // 0x11bb90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11bb94:
    // 0x11bb94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11bb98:
    // 0x11bb98: 0x60f809  jalr        $v1
label_11bb9c:
    if (ctx->pc == 0x11BB9Cu) {
        ctx->pc = 0x11BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB98u;
        // 0x11bb9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBA0u;
        goto label_fallthrough_0x11bb98;
    }
    ctx->pc = 0x11BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BBA0u);
        ctx->pc = 0x11BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB98u;
        // 0x11bb9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB98u, 0x11BBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11bb98:
    ctx->pc = 0x11BBA0u;
}
