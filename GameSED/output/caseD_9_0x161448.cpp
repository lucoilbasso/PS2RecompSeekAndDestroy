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

// Function: caseD_9
// Address: 0x161448 - 0x161468
void caseD_9_0x161448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x161448");
#endif

    switch (ctx->pc) {
        case 0x161448u: goto label_161448;
        case 0x16144cu: goto label_16144c;
        case 0x161450u: goto label_161450;
        case 0x161454u: goto label_161454;
        case 0x161458u: goto label_161458;
        case 0x16145cu: goto label_16145c;
        case 0x161460u: goto label_161460;
        case 0x161464u: goto label_161464;
        default: break;
    }

    ctx->pc = 0x161448u;

label_161448:
    // 0x161448: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x161448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16144c:
    // 0x16144c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161450:
    // 0x161450: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_161454:
    // 0x161454: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_161458:
    // 0x161458: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x161458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16145c:
    // 0x16145c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_161460:
    // 0x161460: 0x60f809  jalr        $v1
label_161464:
    if (ctx->pc == 0x161464u) {
        ctx->pc = 0x161464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161460u;
        // 0x161464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161468u;
        goto label_fallthrough_0x161460;
    }
    ctx->pc = 0x161460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161468u);
        ctx->pc = 0x161464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161460u;
        // 0x161464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161460u, 0x161468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x161460:
    ctx->pc = 0x161468u;
}
