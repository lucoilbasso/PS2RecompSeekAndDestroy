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

// Function: entry_0015c7c4
// Address: 0x15c7c4 - 0x15c7d8
void entry_0015c7c4_0x15c7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c7c4_0x15c7c4");
#endif

    switch (ctx->pc) {
        case 0x15c7d4u: goto label_15c7d4;
        default: break;
    }

    ctx->pc = 0x15c7c4u;

    // 0x15c7c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C7C4u;
    {
        const bool branch_taken_0x15c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7c4) {
            ctx->pc = 0x15C7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7C4u;
            // 0x15c7c8: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C7D8u;
            return;
        }
    }
    ctx->pc = 0x15C7CCu;
    // 0x15c7cc: 0xc05716a  jal         func_15C5A8
    ctx->pc = 0x15C7CCu;
    SET_GPR_U32(ctx, 31, 0x15C7D4u);
    ctx->pc = 0x15C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7CCu;
    // 0x15c7d0: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5A8u, 0x15C7CCu, 0x15C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7D4u;
label_15c7d4:
    // 0x15c7d4: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x15c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    ctx->pc = 0x15c7d8u;
}
