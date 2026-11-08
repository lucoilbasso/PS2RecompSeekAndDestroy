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

// Function: entry_00102f10
// Address: 0x102f10 - 0x102f34
void entry_00102f10_0x102f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f10_0x102f10");
#endif

    ctx->pc = 0x102f10u;

label_102f10:
    // 0x102f10: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102f14:
    // 0x102f14: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102f18:
    if (ctx->pc == 0x102F18u) {
        ctx->pc = 0x102F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F14u;
        // 0x102f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F1Cu;
        goto label_102f1c;
    }
    ctx->pc = 0x102F14u;
    {
        const bool branch_taken_0x102f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F14u;
        // 0x102f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f14) {
            ctx->pc = 0x102F34u;
            return;
        }
    }
    ctx->pc = 0x102F1Cu;
label_102f1c:
    // 0x102f1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102f20:
    // 0x102f20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102f24:
    // 0x102f24: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102f28:
    // 0x102f28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102f2c:
    // 0x102f2c: 0x60f809  jalr        $v1
label_102f30:
    if (ctx->pc == 0x102F30u) {
        ctx->pc = 0x102F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F2Cu;
        // 0x102f30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F34u;
        goto label_fallthrough_0x102f2c;
    }
    ctx->pc = 0x102F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102F34u);
        ctx->pc = 0x102F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F2Cu;
        // 0x102f30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F2Cu, 0x102F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x102f2c:
    ctx->pc = 0x102F34u;
}
