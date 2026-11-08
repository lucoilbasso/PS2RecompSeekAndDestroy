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

// Function: entry_00143f9c
// Address: 0x143f9c - 0x143fc0
void entry_00143f9c_0x143f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f9c_0x143f9c");
#endif

    ctx->pc = 0x143f9cu;

label_143f9c:
    // 0x143f9c: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x143f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_143fa0:
    // 0x143fa0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143fa4:
    if (ctx->pc == 0x143FA4u) {
        ctx->pc = 0x143FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FA0u;
        // 0x143fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FA8u;
        goto label_143fa8;
    }
    ctx->pc = 0x143FA0u;
    {
        const bool branch_taken_0x143fa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FA0u;
        // 0x143fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fa0) {
            ctx->pc = 0x143FC0u;
            return;
        }
    }
    ctx->pc = 0x143FA8u;
label_143fa8:
    // 0x143fa8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143fac:
    // 0x143fac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143fb0:
    // 0x143fb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143fb4:
    // 0x143fb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143fb8:
    // 0x143fb8: 0x60f809  jalr        $v1
label_143fbc:
    if (ctx->pc == 0x143FBCu) {
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB8u;
        // 0x143fbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FC0u;
        goto label_fallthrough_0x143fb8;
    }
    ctx->pc = 0x143FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143FC0u);
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB8u;
        // 0x143fbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FB8u, 0x143FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143fb8:
    ctx->pc = 0x143FC0u;
}
