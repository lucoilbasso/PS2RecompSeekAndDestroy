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

// Function: entry_0010766c
// Address: 0x10766c - 0x107688
void entry_0010766c_0x10766c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010766c_0x10766c");
#endif

    ctx->pc = 0x10766cu;

label_10766c:
    // 0x10766c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_107670:
    // 0x107670: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_107674:
    // 0x107674: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x107674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_107678:
    // 0x107678: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10767c:
    // 0x10767c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107680:
    // 0x107680: 0x60f809  jalr        $v1
label_107684:
    if (ctx->pc == 0x107684u) {
        ctx->pc = 0x107684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107680u;
        // 0x107684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107688u;
        goto label_fallthrough_0x107680;
    }
    ctx->pc = 0x107680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107688u);
        ctx->pc = 0x107684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107680u;
        // 0x107684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107680u, 0x107688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x107680:
    ctx->pc = 0x107688u;
}
