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

// Function: entry_00188748
// Address: 0x188748 - 0x188784
void entry_00188748_0x188748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188748_0x188748");
#endif

    switch (ctx->pc) {
        case 0x188774u: goto label_188774;
        default: break;
    }

    ctx->pc = 0x188748u;

label_188748:
    // 0x188748: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x188748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18874c:
    // 0x18874c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18874cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188750:
    // 0x188750: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_188754:
    // 0x188754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_188758:
    // 0x188758: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18875c:
    // 0x18875c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_188760:
    // 0x188760: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x188760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_188764:
    // 0x188764: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188768:
    // 0x188768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18876c:
    // 0x18876c: 0x60f809  jalr        $v1
label_188770:
    if (ctx->pc == 0x188770u) {
        ctx->pc = 0x188770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18876Cu;
        // 0x188770: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188774u;
        goto label_188774;
    }
    ctx->pc = 0x18876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188774u);
        ctx->pc = 0x188770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18876Cu;
        // 0x188770: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18876Cu, 0x188774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188774u;
label_188774:
    // 0x188774: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x188774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_188778:
    // 0x188778: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x188778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18877c:
    // 0x18877c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_188780:
    if (ctx->pc == 0x188780u) {
        ctx->pc = 0x188780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18877Cu;
        // 0x188780: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188784u;
        goto label_fallthrough_0x18877c;
    }
    ctx->pc = 0x18877Cu;
    {
        const bool branch_taken_0x18877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18877c) {
            ctx->pc = 0x188780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18877Cu;
            // 0x188780: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188748;
        }
    }
label_fallthrough_0x18877c:
    ctx->pc = 0x188784u;
}
