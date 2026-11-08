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

// Function: entry_001012a8
// Address: 0x1012a8 - 0x1012cc
void entry_001012a8_0x1012a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001012a8_0x1012a8");
#endif

    ctx->pc = 0x1012a8u;

label_1012a8:
    // 0x1012a8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1012a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1012ac:
    // 0x1012ac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1012b0:
    if (ctx->pc == 0x1012B0u) {
        ctx->pc = 0x1012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012ACu;
        // 0x1012b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B4u;
        goto label_1012b4;
    }
    ctx->pc = 0x1012ACu;
    {
        const bool branch_taken_0x1012ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012ACu;
        // 0x1012b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012ac) {
            ctx->pc = 0x1012CCu;
            return;
        }
    }
    ctx->pc = 0x1012B4u;
label_1012b4:
    // 0x1012b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1012b8:
    // 0x1012b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1012bc:
    // 0x1012bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1012c0:
    // 0x1012c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1012c4:
    // 0x1012c4: 0x60f809  jalr        $v1
label_1012c8:
    if (ctx->pc == 0x1012C8u) {
        ctx->pc = 0x1012C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C4u;
        // 0x1012c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012CCu;
        goto label_fallthrough_0x1012c4;
    }
    ctx->pc = 0x1012C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1012CCu);
        ctx->pc = 0x1012C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C4u;
        // 0x1012c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012C4u, 0x1012CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1012c4:
    ctx->pc = 0x1012CCu;
}
