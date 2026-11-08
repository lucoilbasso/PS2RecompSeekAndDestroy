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

// Function: entry_0016fab4
// Address: 0x16fab4 - 0x16facc
void entry_0016fab4_0x16fab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fab4_0x16fab4");
#endif

    ctx->pc = 0x16fab4u;

label_16fab4:
    // 0x16fab4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16fab8:
    // 0x16fab8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16fabc:
    // 0x16fabc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16fac0:
    // 0x16fac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16fac4:
    // 0x16fac4: 0x60f809  jalr        $v1
label_16fac8:
    if (ctx->pc == 0x16FAC8u) {
        ctx->pc = 0x16FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC4u;
        // 0x16fac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FACCu;
        goto label_fallthrough_0x16fac4;
    }
    ctx->pc = 0x16FAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FACCu);
        ctx->pc = 0x16FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC4u;
        // 0x16fac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FAC4u, 0x16FACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16fac4:
    ctx->pc = 0x16FACCu;
}
