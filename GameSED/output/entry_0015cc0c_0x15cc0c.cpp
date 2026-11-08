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

// Function: entry_0015cc0c
// Address: 0x15cc0c - 0x15cc38
void entry_0015cc0c_0x15cc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cc0c_0x15cc0c");
#endif

    switch (ctx->pc) {
        case 0x15cc30u: goto label_15cc30;
        default: break;
    }

    ctx->pc = 0x15cc0cu;

label_15cc0c:
    // 0x15cc0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15cc10:
    // 0x15cc10: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
label_15cc14:
    if (ctx->pc == 0x15CC14u) {
        ctx->pc = 0x15CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC10u;
        // 0x15cc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC18u;
        goto label_15cc18;
    }
    ctx->pc = 0x15CC10u;
    {
        const bool branch_taken_0x15cc10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC10u;
        // 0x15cc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc10) {
            ctx->pc = 0x15CD78u;
            return;
        }
    }
    ctx->pc = 0x15CC18u;
label_15cc18:
    // 0x15cc18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cc1c:
    // 0x15cc1c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cc20:
    // 0x15cc20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc24:
    // 0x15cc24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc28:
    // 0x15cc28: 0x60f809  jalr        $v1
label_15cc2c:
    if (ctx->pc == 0x15CC2Cu) {
        ctx->pc = 0x15CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC28u;
        // 0x15cc2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC30u;
        goto label_15cc30;
    }
    ctx->pc = 0x15CC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC30u);
        ctx->pc = 0x15CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC28u;
        // 0x15cc2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC28u, 0x15CC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC30u;
label_15cc30:
    // 0x15cc30: 0x10000052  b           . + 4 + (0x52 << 2)
label_15cc34:
    if (ctx->pc == 0x15CC34u) {
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC38u;
        goto label_fallthrough_0x15cc30;
    }
    ctx->pc = 0x15CC30u;
    {
        const bool branch_taken_0x15cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc30) {
            ctx->pc = 0x15CD7Cu;
            return;
        }
    }
label_fallthrough_0x15cc30:
    ctx->pc = 0x15CC38u;
}
