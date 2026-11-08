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

// Function: entry_0015c534
// Address: 0x15c534 - 0x15c558
void entry_0015c534_0x15c534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c534_0x15c534");
#endif

    ctx->pc = 0x15c534u;

label_15c534:
    // 0x15c534: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c538:
    // 0x15c538: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c53c:
    if (ctx->pc == 0x15C53Cu) {
        ctx->pc = 0x15C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C538u;
        // 0x15c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C540u;
        goto label_15c540;
    }
    ctx->pc = 0x15C538u;
    {
        const bool branch_taken_0x15c538 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C538u;
        // 0x15c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c538) {
            ctx->pc = 0x15C558u;
            return;
        }
    }
    ctx->pc = 0x15C540u;
label_15c540:
    // 0x15c540: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c544:
    // 0x15c544: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c548:
    // 0x15c548: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c54c:
    // 0x15c54c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c550:
    // 0x15c550: 0x60f809  jalr        $v1
label_15c554:
    if (ctx->pc == 0x15C554u) {
        ctx->pc = 0x15C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C550u;
        // 0x15c554: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C558u;
        goto label_fallthrough_0x15c550;
    }
    ctx->pc = 0x15C550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C558u);
        ctx->pc = 0x15C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C550u;
        // 0x15c554: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C550u, 0x15C558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15c550:
    ctx->pc = 0x15C558u;
}
