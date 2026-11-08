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

// Function: entry_0016b240
// Address: 0x16b240 - 0x16b260
void entry_0016b240_0x16b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b240_0x16b240");
#endif

    switch (ctx->pc) {
        case 0x16b250u: goto label_16b250;
        case 0x16b258u: goto label_16b258;
        default: break;
    }

    ctx->pc = 0x16b240u;

    // 0x16b240: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16b244: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x16b244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16b248: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B248u;
    SET_GPR_U32(ctx, 31, 0x16B250u);
    ctx->pc = 0x16B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B248u;
    // 0x16b24c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B248u, 0x16B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16B250u;
    SET_GPR_U32(ctx, 31, 0x16B258u);
    ctx->pc = 0x16B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B250u;
    // 0x16b254: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16B250u, 0x16B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B258u;
label_16b258:
    // 0x16b258: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x16b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16b25c: 0x24650420  addiu       $a1, $v1, 0x420
    ctx->pc = 0x16b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1056));
    ctx->pc = 0x16b260u;
}
