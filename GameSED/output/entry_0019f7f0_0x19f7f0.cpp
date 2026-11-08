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

// Function: entry_0019f7f0
// Address: 0x19f7f0 - 0x19f820
void entry_0019f7f0_0x19f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f7f0_0x19f7f0");
#endif

    switch (ctx->pc) {
        case 0x19f7f8u: goto label_19f7f8;
        default: break;
    }

    ctx->pc = 0x19f7f0u;

    // 0x19f7f0: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x19F7F0u;
    SET_GPR_U32(ctx, 31, 0x19F7F8u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x19F7F0u, 0x19F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x19f7fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19f800: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x19f800u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x19f804: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F804u;
    {
        const bool branch_taken_0x19f804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f804) {
            ctx->pc = 0x19F808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F804u;
            // 0x19f808: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F84Cu;
            return;
        }
    }
    ctx->pc = 0x19F80Cu;
    // 0x19f80c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19f810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f814: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F814u;
    {
        const bool branch_taken_0x19f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F814u;
        // 0x19f818: 0x24458750  addiu       $a1, $v0, -0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f814) {
            ctx->pc = 0x19F86Cu;
            return;
        }
    }
    ctx->pc = 0x19F81Cu;
    // 0x19f81c: 0x0  nop
    ctx->pc = 0x19f81cu;
    // NOP
    ctx->pc = 0x19f820u;
}
