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

// Function: entry_00140bb8
// Address: 0x140bb8 - 0x140bd8
void entry_00140bb8_0x140bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140bb8_0x140bb8");
#endif

    ctx->pc = 0x140bb8u;

    // 0x140bb8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x140bbc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x140BBCu;
    {
        const bool branch_taken_0x140bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x140BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BBCu;
        // 0x140bc0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bbc) {
            ctx->pc = 0x140C00u;
            return;
        }
    }
    ctx->pc = 0x140BC4u;
    // 0x140bc4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x140BC4u;
    {
        const bool branch_taken_0x140bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BC4u;
        // 0x140bc8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bc4) {
            ctx->pc = 0x140BD8u;
            return;
        }
    }
    ctx->pc = 0x140BCCu;
    // 0x140bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140bd0: 0xc0618c2  jal         func_186308
    ctx->pc = 0x140BD0u;
    SET_GPR_U32(ctx, 31, 0x140BD8u);
    ctx->pc = 0x140BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BD0u;
    // 0x140bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x140BD0u, 0x140BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BD8u;
}
