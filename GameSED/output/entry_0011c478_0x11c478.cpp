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

// Function: entry_0011c478
// Address: 0x11c478 - 0x11c4a8
void entry_0011c478_0x11c478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c478_0x11c478");
#endif

    switch (ctx->pc) {
        case 0x11c488u: goto label_11c488;
        default: break;
    }

    ctx->pc = 0x11c478u;

    // 0x11c478: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x11c478u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x11c47c: 0x3012  mflo        $a2
    ctx->pc = 0x11c47cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11c480: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11C480u;
    SET_GPR_U32(ctx, 31, 0x11C488u);
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11C480u, 0x11C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C488u;
label_11c488:
    // 0x11c488: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11c48c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x11c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11c490: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C490u;
    {
        const bool branch_taken_0x11c490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C490u;
        // 0x11c494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c490) {
            ctx->pc = 0x11C4A8u;
            return;
        }
    }
    ctx->pc = 0x11C498u;
    // 0x11c498: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11C498u;
    {
        const bool branch_taken_0x11c498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C498u;
        // 0x11c49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c498) {
            ctx->pc = 0x11C4D8u;
            return;
        }
    }
    ctx->pc = 0x11C4A0u;
    // 0x11c4a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A0u;
        // 0x11c4a4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11C4FCu;
            return;
        }
    }
    ctx->pc = 0x11C4A8u;
}
