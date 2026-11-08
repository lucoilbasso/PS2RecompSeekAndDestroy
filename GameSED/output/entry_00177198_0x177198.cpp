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

// Function: entry_00177198
// Address: 0x177198 - 0x1771a8
void entry_00177198_0x177198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177198_0x177198");
#endif

    ctx->pc = 0x177198u;

    // 0x177198: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x177198u;
    {
        const bool branch_taken_0x177198 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177198u;
        // 0x17719c: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177198) {
            ctx->pc = 0x1771ACu;
            return;
        }
    }
    ctx->pc = 0x1771A0u;
    // 0x1771a0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1771A0u;
    SET_GPR_U32(ctx, 31, 0x1771A8u);
    ctx->pc = 0x1771A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771A0u;
    // 0x1771a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1771A0u, 0x1771A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771A8u;
}
