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

// Function: entry_0015af90
// Address: 0x15af90 - 0x15afac
void entry_0015af90_0x15af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af90_0x15af90");
#endif

    ctx->pc = 0x15af90u;

label_15af90:
    // 0x15af90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15af94:
    // 0x15af94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15af98:
    // 0x15af98: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15af9c:
    // 0x15af9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15afa0:
    // 0x15afa0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15afa4:
    // 0x15afa4: 0x60f809  jalr        $v1
label_15afa8:
    if (ctx->pc == 0x15AFA8u) {
        ctx->pc = 0x15AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA4u;
        // 0x15afa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFACu;
        goto label_fallthrough_0x15afa4;
    }
    ctx->pc = 0x15AFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15AFACu);
        ctx->pc = 0x15AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFA4u;
        // 0x15afa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AFA4u, 0x15AFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15afa4:
    ctx->pc = 0x15AFACu;
}
