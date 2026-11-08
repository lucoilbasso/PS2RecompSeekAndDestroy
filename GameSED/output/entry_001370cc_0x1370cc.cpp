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

// Function: entry_001370cc
// Address: 0x1370cc - 0x1370f0
void entry_001370cc_0x1370cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001370cc_0x1370cc");
#endif

    ctx->pc = 0x1370ccu;

label_1370cc:
    // 0x1370cc: 0x2ee20009  sltiu       $v0, $s7, 0x9
    ctx->pc = 0x1370ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1370d0:
    // 0x1370d0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_1370d4:
    if (ctx->pc == 0x1370D4u) {
        ctx->pc = 0x1370D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370D0u;
        // 0x1370d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370D8u;
        goto label_1370d8;
    }
    ctx->pc = 0x1370D0u;
    {
        const bool branch_taken_0x1370d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370D0u;
        // 0x1370d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370d0) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x1370D8u;
label_1370d8:
    // 0x1370d8: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1370d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_1370dc:
    // 0x1370dc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1370dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1370e0:
    // 0x1370e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1370e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1370e4:
    // 0x1370e4: 0x8c6367c0  lw          $v1, 0x67C0($v1)
    ctx->pc = 0x1370e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26560)));
label_1370e8:
    // 0x1370e8: 0x600008  jr          $v1
label_1370ec:
    if (ctx->pc == 0x1370ECu) {
        ctx->pc = 0x1370F0u;
        goto label_fallthrough_0x1370e8;
    }
    ctx->pc = 0x1370E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1370E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1370e8:
    ctx->pc = 0x1370F0u;
}
