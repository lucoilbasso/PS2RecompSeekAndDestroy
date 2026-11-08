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

// Function: entry_00107730
// Address: 0x107730 - 0x107748
void entry_00107730_0x107730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107730_0x107730");
#endif

    ctx->pc = 0x107730u;

label_107730:
    // 0x107730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107734:
    // 0x107734: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x107734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_107738:
    // 0x107738: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10773c:
    // 0x10773c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107740:
    // 0x107740: 0x60f809  jalr        $v1
label_107744:
    if (ctx->pc == 0x107744u) {
        ctx->pc = 0x107744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107740u;
        // 0x107744: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107748u;
        goto label_fallthrough_0x107740;
    }
    ctx->pc = 0x107740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107748u);
        ctx->pc = 0x107744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107740u;
        // 0x107744: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107740u, 0x107748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x107740:
    ctx->pc = 0x107748u;
}
