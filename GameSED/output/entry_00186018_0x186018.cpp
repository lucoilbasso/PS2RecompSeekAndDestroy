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

// Function: entry_00186018
// Address: 0x186018 - 0x186034
void entry_00186018_0x186018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186018_0x186018");
#endif

    switch (ctx->pc) {
        case 0x186030u: goto label_186030;
        default: break;
    }

    ctx->pc = 0x186018u;

label_186018:
    // 0x186018: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x186018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18601c:
    // 0x18601c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_186020:
    // 0x186020: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x186020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_186024:
    // 0x186024: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x186024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186028:
    // 0x186028: 0x60f809  jalr        $v1
label_18602c:
    if (ctx->pc == 0x18602Cu) {
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186030u;
        goto label_186030;
    }
    ctx->pc = 0x186028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186030u);
        ctx->pc = 0x18602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186028u;
        // 0x18602c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186028u, 0x186030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186030u;
label_186030:
    // 0x186030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186034u;
}
