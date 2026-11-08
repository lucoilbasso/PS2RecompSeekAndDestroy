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

// Function: entry_0015c7d8
// Address: 0x15c7d8 - 0x15c7ec
void entry_0015c7d8_0x15c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c7d8_0x15c7d8");
#endif

    switch (ctx->pc) {
        case 0x15c7e8u: goto label_15c7e8;
        default: break;
    }

    ctx->pc = 0x15c7d8u;

    // 0x15c7d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C7D8u;
    {
        const bool branch_taken_0x15c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7d8) {
            ctx->pc = 0x15C7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C7D8u;
            // 0x15c7dc: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C7ECu;
            return;
        }
    }
    ctx->pc = 0x15C7E0u;
    // 0x15c7e0: 0xc05716a  jal         func_15C5A8
    ctx->pc = 0x15C7E0u;
    SET_GPR_U32(ctx, 31, 0x15C7E8u);
    ctx->pc = 0x15C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7E0u;
    // 0x15c7e4: 0x26240120  addiu       $a0, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5A8u, 0x15C7E0u, 0x15C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7E8u;
label_15c7e8:
    // 0x15c7e8: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x15c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    ctx->pc = 0x15c7ecu;
}
