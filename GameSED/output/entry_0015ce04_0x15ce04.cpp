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

// Function: entry_0015ce04
// Address: 0x15ce04 - 0x15ce30
void entry_0015ce04_0x15ce04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce04_0x15ce04");
#endif

    switch (ctx->pc) {
        case 0x15ce28u: goto label_15ce28;
        default: break;
    }

    ctx->pc = 0x15ce04u;

label_15ce04:
    // 0x15ce04: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ce08:
    // 0x15ce08: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
label_15ce0c:
    if (ctx->pc == 0x15CE0Cu) {
        ctx->pc = 0x15CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE08u;
        // 0x15ce0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE10u;
        goto label_15ce10;
    }
    ctx->pc = 0x15CE08u;
    {
        const bool branch_taken_0x15ce08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE08u;
        // 0x15ce0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce08) {
            ctx->pc = 0x15CF70u;
            return;
        }
    }
    ctx->pc = 0x15CE10u;
label_15ce10:
    // 0x15ce10: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ce14:
    // 0x15ce14: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ce18:
    // 0x15ce18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ce18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ce1c:
    // 0x15ce1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ce20:
    // 0x15ce20: 0x60f809  jalr        $v1
label_15ce24:
    if (ctx->pc == 0x15CE24u) {
        ctx->pc = 0x15CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE20u;
        // 0x15ce24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE28u;
        goto label_15ce28;
    }
    ctx->pc = 0x15CE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE28u);
        ctx->pc = 0x15CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE20u;
        // 0x15ce24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE20u, 0x15CE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE28u;
label_15ce28:
    // 0x15ce28: 0x10000052  b           . + 4 + (0x52 << 2)
label_15ce2c:
    if (ctx->pc == 0x15CE2Cu) {
        ctx->pc = 0x15CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE28u;
        // 0x15ce2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE30u;
        goto label_fallthrough_0x15ce28;
    }
    ctx->pc = 0x15CE28u;
    {
        const bool branch_taken_0x15ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE28u;
        // 0x15ce2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce28) {
            ctx->pc = 0x15CF74u;
            return;
        }
    }
label_fallthrough_0x15ce28:
    ctx->pc = 0x15CE30u;
}
