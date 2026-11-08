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

// Function: entry_001008c8
// Address: 0x1008c8 - 0x1008ec
void entry_001008c8_0x1008c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001008c8_0x1008c8");
#endif

    ctx->pc = 0x1008c8u;

label_1008c8:
    // 0x1008c8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1008cc:
    // 0x1008cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1008d0:
    if (ctx->pc == 0x1008D0u) {
        ctx->pc = 0x1008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008CCu;
        // 0x1008d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008D4u;
        goto label_1008d4;
    }
    ctx->pc = 0x1008CCu;
    {
        const bool branch_taken_0x1008cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008CCu;
        // 0x1008d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008cc) {
            ctx->pc = 0x1008ECu;
            return;
        }
    }
    ctx->pc = 0x1008D4u;
label_1008d4:
    // 0x1008d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1008d8:
    // 0x1008d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1008dc:
    // 0x1008dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1008e0:
    // 0x1008e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1008e4:
    // 0x1008e4: 0x60f809  jalr        $v1
label_1008e8:
    if (ctx->pc == 0x1008E8u) {
        ctx->pc = 0x1008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008E4u;
        // 0x1008e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008ECu;
        goto label_fallthrough_0x1008e4;
    }
    ctx->pc = 0x1008E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1008ECu);
        ctx->pc = 0x1008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008E4u;
        // 0x1008e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008E4u, 0x1008ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1008e4:
    ctx->pc = 0x1008ECu;
}
