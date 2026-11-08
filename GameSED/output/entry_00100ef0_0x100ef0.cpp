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

// Function: entry_00100ef0
// Address: 0x100ef0 - 0x100f10
void entry_00100ef0_0x100ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ef0_0x100ef0");
#endif

    ctx->pc = 0x100ef0u;

label_100ef0:
    // 0x100ef0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100ef4:
    if (ctx->pc == 0x100EF4u) {
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EF8u;
        goto label_100ef8;
    }
    ctx->pc = 0x100EF0u;
    {
        const bool branch_taken_0x100ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef0) {
            ctx->pc = 0x100F10u;
            return;
        }
    }
    ctx->pc = 0x100EF8u;
label_100ef8:
    // 0x100ef8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100efc:
    // 0x100efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100f00:
    // 0x100f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100f04:
    // 0x100f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100f08:
    // 0x100f08: 0x60f809  jalr        $v1
label_100f0c:
    if (ctx->pc == 0x100F0Cu) {
        ctx->pc = 0x100F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F08u;
        // 0x100f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F10u;
        goto label_fallthrough_0x100f08;
    }
    ctx->pc = 0x100F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100F10u);
        ctx->pc = 0x100F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F08u;
        // 0x100f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100F08u, 0x100F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x100f08:
    ctx->pc = 0x100F10u;
}
