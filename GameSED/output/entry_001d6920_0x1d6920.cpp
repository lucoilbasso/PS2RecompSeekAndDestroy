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

// Function: entry_001d6920
// Address: 0x1d6920 - 0x1d6958
void entry_001d6920_0x1d6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6920_0x1d6920");
#endif

    ctx->pc = 0x1d6920u;

label_1d6920:
    // 0x1d6920: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1d6924:
    // 0x1d6924: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1d6928:
    // 0x1d6928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d692c:
    // 0x1d692c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d692cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6930:
    // 0x1d6930: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6934:
    // 0x1d6934: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d6938:
    if (ctx->pc == 0x1D6938u) {
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D693Cu;
        goto label_1d693c;
    }
    ctx->pc = 0x1D6934u;
    {
        const bool branch_taken_0x1d6934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6934) {
            ctx->pc = 0x1D6958u;
            return;
        }
    }
    ctx->pc = 0x1D693Cu;
label_1d693c:
    // 0x1d693c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d6940:
    // 0x1d6940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6944:
    // 0x1d6944: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d6944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d6948:
    // 0x1d6948: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d6948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d694c:
    // 0x1d694c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d6950:
    // 0x1d6950: 0x60f809  jalr        $v1
label_1d6954:
    if (ctx->pc == 0x1D6954u) {
        ctx->pc = 0x1D6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6950u;
        // 0x1d6954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6958u;
        goto label_fallthrough_0x1d6950;
    }
    ctx->pc = 0x1D6950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6958u);
        ctx->pc = 0x1D6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6950u;
        // 0x1d6954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6950u, 0x1D6958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d6950:
    ctx->pc = 0x1D6958u;
}
