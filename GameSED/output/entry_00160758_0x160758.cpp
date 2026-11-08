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

// Function: entry_00160758
// Address: 0x160758 - 0x16077c
void entry_00160758_0x160758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160758_0x160758");
#endif

    ctx->pc = 0x160758u;

label_160758:
    // 0x160758: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16075c:
    // 0x16075c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_160760:
    if (ctx->pc == 0x160760u) {
        ctx->pc = 0x160760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16075Cu;
        // 0x160760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160764u;
        goto label_160764;
    }
    ctx->pc = 0x16075Cu;
    {
        const bool branch_taken_0x16075c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x160760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16075Cu;
        // 0x160760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16075c) {
            ctx->pc = 0x16077Cu;
            return;
        }
    }
    ctx->pc = 0x160764u;
label_160764:
    // 0x160764: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160768:
    // 0x160768: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16076c:
    // 0x16076c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16076cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160770:
    // 0x160770: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160774:
    // 0x160774: 0x60f809  jalr        $v1
label_160778:
    if (ctx->pc == 0x160778u) {
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160774u;
        // 0x160778: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16077Cu;
        goto label_fallthrough_0x160774;
    }
    ctx->pc = 0x160774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16077Cu);
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160774u;
        // 0x160778: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160774u, 0x16077Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x160774:
    ctx->pc = 0x16077Cu;
}
