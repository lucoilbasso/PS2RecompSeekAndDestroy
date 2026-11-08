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

// Function: entry_0016f970
// Address: 0x16f970 - 0x16f988
void entry_0016f970_0x16f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f970_0x16f970");
#endif

    ctx->pc = 0x16f970u;

label_16f970:
    // 0x16f970: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x16f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_16f974:
    // 0x16f974: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x16f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_16f978:
    // 0x16f978: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16f97c:
    // 0x16f97c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f980:
    // 0x16f980: 0x60f809  jalr        $v1
label_16f984:
    if (ctx->pc == 0x16F984u) {
        ctx->pc = 0x16F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F980u;
        // 0x16f984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F988u;
        goto label_fallthrough_0x16f980;
    }
    ctx->pc = 0x16F980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F988u);
        ctx->pc = 0x16F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F980u;
        // 0x16f984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F980u, 0x16F988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16f980:
    ctx->pc = 0x16F988u;
}
