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

// Function: entry_001e1738
// Address: 0x1e1738 - 0x1e1768
void entry_001e1738_0x1e1738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1738_0x1e1738");
#endif

    switch (ctx->pc) {
        case 0x1e175cu: goto label_1e175c;
        default: break;
    }

    ctx->pc = 0x1e1738u;

label_1e1738:
    // 0x1e1738: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1e1738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e173c:
    // 0x1e173c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e173cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1740:
    // 0x1e1740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e1740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1744:
    // 0x1e1744: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e1748:
    // 0x1e1748: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e1748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e174c:
    // 0x1e174c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e174cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1750:
    // 0x1e1750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e1750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1754:
    // 0x1e1754: 0x60f809  jalr        $v1
label_1e1758:
    if (ctx->pc == 0x1E1758u) {
        ctx->pc = 0x1E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1754u;
        // 0x1e1758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E175Cu;
        goto label_1e175c;
    }
    ctx->pc = 0x1E1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E175Cu);
        ctx->pc = 0x1E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1754u;
        // 0x1e1758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1754u, 0x1E175Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E175Cu;
label_1e175c:
    // 0x1e175c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_1e1760:
    if (ctx->pc == 0x1E1760u) {
        ctx->pc = 0x1E1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E175Cu;
        // 0x1e1760: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1764u;
        goto label_1e1764;
    }
    ctx->pc = 0x1E175Cu;
    {
        const bool branch_taken_0x1e175c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E175Cu;
        // 0x1e1760: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e175c) {
            ctx->pc = 0x1E1738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1738;
        }
    }
    ctx->pc = 0x1E1764u;
label_1e1764:
    // 0x1e1764: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e1764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1e1768u;
}
