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

// Function: entry_001603ec
// Address: 0x1603ec - 0x160410
void entry_001603ec_0x1603ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001603ec_0x1603ec");
#endif

    ctx->pc = 0x1603ecu;

label_1603ec:
    // 0x1603ec: 0x8e060f34  lw          $a2, 0xF34($s0)
    ctx->pc = 0x1603ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3892)));
label_1603f0:
    // 0x1603f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1603f4:
    if (ctx->pc == 0x1603F4u) {
        ctx->pc = 0x1603F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F0u;
        // 0x1603f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603F8u;
        goto label_1603f8;
    }
    ctx->pc = 0x1603F0u;
    {
        const bool branch_taken_0x1603f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F0u;
        // 0x1603f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603f0) {
            ctx->pc = 0x160410u;
            return;
        }
    }
    ctx->pc = 0x1603F8u;
label_1603f8:
    // 0x1603f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1603f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1603fc:
    // 0x1603fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160400:
    // 0x160400: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160404:
    // 0x160404: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160408:
    // 0x160408: 0x60f809  jalr        $v1
label_16040c:
    if (ctx->pc == 0x16040Cu) {
        ctx->pc = 0x16040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160408u;
        // 0x16040c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160410u;
        goto label_fallthrough_0x160408;
    }
    ctx->pc = 0x160408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160410u);
        ctx->pc = 0x16040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160408u;
        // 0x16040c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160408u, 0x160410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x160408:
    ctx->pc = 0x160410u;
}
