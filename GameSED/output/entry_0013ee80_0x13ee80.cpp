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

// Function: entry_0013ee80
// Address: 0x13ee80 - 0x13eea0
void entry_0013ee80_0x13ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee80_0x13ee80");
#endif

    ctx->pc = 0x13ee80u;

    // 0x13ee80: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13ee84: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13EE84u;
    {
        const bool branch_taken_0x13ee84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE84u;
        // 0x13ee88: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee84) {
            ctx->pc = 0x13EEC8u;
            return;
        }
    }
    ctx->pc = 0x13EE8Cu;
    // 0x13ee8c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EE8Cu;
    {
        const bool branch_taken_0x13ee8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE8Cu;
        // 0x13ee90: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee8c) {
            ctx->pc = 0x13EEA0u;
            return;
        }
    }
    ctx->pc = 0x13EE94u;
    // 0x13ee94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee98: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13EE98u;
    SET_GPR_U32(ctx, 31, 0x13EEA0u);
    ctx->pc = 0x13EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE98u;
    // 0x13ee9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13EE98u, 0x13EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEA0u;
}
