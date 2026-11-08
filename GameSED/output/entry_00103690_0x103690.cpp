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

// Function: entry_00103690
// Address: 0x103690 - 0x1036b8
void entry_00103690_0x103690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103690_0x103690");
#endif

    switch (ctx->pc) {
        case 0x1036acu: goto label_1036ac;
        default: break;
    }

    ctx->pc = 0x103690u;

label_103690:
    // 0x103690: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_103694:
    // 0x103694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103698:
    // 0x103698: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x103698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10369c:
    // 0x10369c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10369cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1036a0:
    // 0x1036a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1036a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1036a4:
    // 0x1036a4: 0x60f809  jalr        $v1
label_1036a8:
    if (ctx->pc == 0x1036A8u) {
        ctx->pc = 0x1036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A4u;
        // 0x1036a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036ACu;
        goto label_1036ac;
    }
    ctx->pc = 0x1036A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1036ACu);
        ctx->pc = 0x1036A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A4u;
        // 0x1036a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1036A4u, 0x1036ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1036ACu;
label_1036ac:
    // 0x1036ac: 0x10000023  b           . + 4 + (0x23 << 2)
label_1036b0:
    if (ctx->pc == 0x1036B0u) {
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1036B4u;
        goto label_1036b4;
    }
    ctx->pc = 0x1036ACu;
    {
        const bool branch_taken_0x1036ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036ac) {
            ctx->pc = 0x10373Cu;
            return;
        }
    }
    ctx->pc = 0x1036B4u;
label_1036b4:
    // 0x1036b4: 0x0  nop
    ctx->pc = 0x1036b4u;
    // NOP
    ctx->pc = 0x1036b8u;
}
