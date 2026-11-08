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

// Function: entry_00187738
// Address: 0x187738 - 0x18775c
void entry_00187738_0x187738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187738_0x187738");
#endif

    ctx->pc = 0x187738u;

label_187738:
    // 0x187738: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x187738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_18773c:
    // 0x18773c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_187740:
    if (ctx->pc == 0x187740u) {
        ctx->pc = 0x187740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18773Cu;
        // 0x187740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187744u;
        goto label_187744;
    }
    ctx->pc = 0x18773Cu;
    {
        const bool branch_taken_0x18773c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x187740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18773Cu;
        // 0x187740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18773c) {
            ctx->pc = 0x18775Cu;
            return;
        }
    }
    ctx->pc = 0x187744u;
label_187744:
    // 0x187744: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_187748:
    // 0x187748: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_18774c:
    // 0x18774c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187750:
    // 0x187750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187754:
    // 0x187754: 0x60f809  jalr        $v1
label_187758:
    if (ctx->pc == 0x187758u) {
        ctx->pc = 0x187758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187754u;
        // 0x187758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18775Cu;
        goto label_fallthrough_0x187754;
    }
    ctx->pc = 0x187754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18775Cu);
        ctx->pc = 0x187758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187754u;
        // 0x187758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187754u, 0x18775Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x187754:
    ctx->pc = 0x18775Cu;
}
