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

// Function: entry_00102ed8
// Address: 0x102ed8 - 0x102f10
void entry_00102ed8_0x102ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102ed8_0x102ed8");
#endif

    ctx->pc = 0x102ed8u;

label_102ed8:
    // 0x102ed8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x102ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_102edc:
    // 0x102edc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x102edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_102ee0:
    // 0x102ee0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102ee4:
    // 0x102ee4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102ee8:
    // 0x102ee8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_102eec:
    // 0x102eec: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_102ef0:
    if (ctx->pc == 0x102EF0u) {
        ctx->pc = 0x102EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EECu;
        // 0x102ef0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EF4u;
        goto label_102ef4;
    }
    ctx->pc = 0x102EECu;
    {
        const bool branch_taken_0x102eec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EECu;
        // 0x102ef0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102eec) {
            ctx->pc = 0x102F10u;
            return;
        }
    }
    ctx->pc = 0x102EF4u;
label_102ef4:
    // 0x102ef4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102ef8:
    // 0x102ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102efc:
    // 0x102efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102f00:
    // 0x102f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102f04:
    // 0x102f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102f08:
    // 0x102f08: 0x60f809  jalr        $v1
label_102f0c:
    if (ctx->pc == 0x102F0Cu) {
        ctx->pc = 0x102F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F08u;
        // 0x102f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F10u;
        goto label_fallthrough_0x102f08;
    }
    ctx->pc = 0x102F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102F10u);
        ctx->pc = 0x102F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F08u;
        // 0x102f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F08u, 0x102F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x102f08:
    ctx->pc = 0x102F10u;
}
