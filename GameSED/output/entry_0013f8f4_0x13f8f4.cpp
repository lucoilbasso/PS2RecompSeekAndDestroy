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

// Function: entry_0013f8f4
// Address: 0x13f8f4 - 0x13f914
void entry_0013f8f4_0x13f8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f8f4_0x13f8f4");
#endif

    ctx->pc = 0x13f8f4u;

    // 0x13f8f4: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13f8f8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13F8F8u;
    {
        const bool branch_taken_0x13f8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8F8u;
        // 0x13f8fc: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8f8) {
            ctx->pc = 0x13F938u;
            return;
        }
    }
    ctx->pc = 0x13F900u;
    // 0x13f900: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F900u;
    {
        const bool branch_taken_0x13f900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F900u;
        // 0x13f904: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f900) {
            ctx->pc = 0x13F914u;
            return;
        }
    }
    ctx->pc = 0x13F908u;
    // 0x13f908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f90c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13F90Cu;
    SET_GPR_U32(ctx, 31, 0x13F914u);
    ctx->pc = 0x13F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F90Cu;
    // 0x13f910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13F90Cu, 0x13F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F914u;
}
