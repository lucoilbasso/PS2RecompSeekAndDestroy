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

// Function: entry_00146128
// Address: 0x146128 - 0x146148
void entry_00146128_0x146128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146128_0x146128");
#endif

    ctx->pc = 0x146128u;

    // 0x146128: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x146128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14612c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14612Cu;
    {
        const bool branch_taken_0x14612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14612c) {
            ctx->pc = 0x146130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14612Cu;
            // 0x146130: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14614Cu;
            return;
        }
    }
    ctx->pc = 0x146134u;
    // 0x146134: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x146138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14613c: 0x24a56ab0  addiu       $a1, $a1, 0x6AB0
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27312));
    // 0x146140: 0xc068186  jal         func_1A0618
    ctx->pc = 0x146140u;
    SET_GPR_U32(ctx, 31, 0x146148u);
    ctx->pc = 0x146144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146140u;
    // 0x146144: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x146140u, 0x146148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146148u;
}
