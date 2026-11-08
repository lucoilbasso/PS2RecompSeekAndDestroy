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

// Function: entry_00143e28
// Address: 0x143e28 - 0x143e4c
void entry_00143e28_0x143e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e28_0x143e28");
#endif

    ctx->pc = 0x143e28u;

label_143e28:
    // 0x143e28: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_143e2c:
    if (ctx->pc == 0x143E2Cu) {
        ctx->pc = 0x143E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E28u;
        // 0x143e2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E30u;
        goto label_143e30;
    }
    ctx->pc = 0x143E28u;
    {
        const bool branch_taken_0x143e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E28u;
        // 0x143e2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e28) {
            ctx->pc = 0x143E4Cu;
            return;
        }
    }
    ctx->pc = 0x143E30u;
label_143e30:
    // 0x143e30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143e34:
    // 0x143e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143e38:
    // 0x143e38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143e3c:
    // 0x143e3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143e40:
    // 0x143e40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143e44:
    // 0x143e44: 0x60f809  jalr        $v1
label_143e48:
    if (ctx->pc == 0x143E48u) {
        ctx->pc = 0x143E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E44u;
        // 0x143e48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E4Cu;
        goto label_fallthrough_0x143e44;
    }
    ctx->pc = 0x143E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143E4Cu);
        ctx->pc = 0x143E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E44u;
        // 0x143e48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E44u, 0x143E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143e44:
    ctx->pc = 0x143E4Cu;
}
