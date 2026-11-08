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

// Function: entry_001d75f8
// Address: 0x1d75f8 - 0x1d761c
void entry_001d75f8_0x1d75f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d75f8_0x1d75f8");
#endif

    ctx->pc = 0x1d75f8u;

label_1d75f8:
    // 0x1d75f8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d75fc:
    // 0x1d75fc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d7600:
    if (ctx->pc == 0x1D7600u) {
        ctx->pc = 0x1D7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75FCu;
        // 0x1d7600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7604u;
        goto label_1d7604;
    }
    ctx->pc = 0x1D75FCu;
    {
        const bool branch_taken_0x1d75fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75FCu;
        // 0x1d7600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75fc) {
            ctx->pc = 0x1D761Cu;
            return;
        }
    }
    ctx->pc = 0x1D7604u;
label_1d7604:
    // 0x1d7604: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7608:
    // 0x1d7608: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d760c:
    // 0x1d760c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d760cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7610:
    // 0x1d7610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d7614:
    // 0x1d7614: 0x60f809  jalr        $v1
label_1d7618:
    if (ctx->pc == 0x1D7618u) {
        ctx->pc = 0x1D7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7614u;
        // 0x1d7618: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D761Cu;
        goto label_fallthrough_0x1d7614;
    }
    ctx->pc = 0x1D7614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D761Cu);
        ctx->pc = 0x1D7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7614u;
        // 0x1d7618: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7614u, 0x1D761Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d7614:
    ctx->pc = 0x1D761Cu;
}
