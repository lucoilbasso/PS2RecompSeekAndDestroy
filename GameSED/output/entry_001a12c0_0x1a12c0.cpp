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

// Function: entry_001a12c0
// Address: 0x1a12c0 - 0x1a12f0
void entry_001a12c0_0x1a12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a12c0_0x1a12c0");
#endif

    switch (ctx->pc) {
        case 0x1a12e8u: goto label_1a12e8;
        default: break;
    }

    ctx->pc = 0x1a12c0u;

    // 0x1a12c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a12c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a12c8: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    // 0x1a12cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a12ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A12D0u;
    {
        const bool branch_taken_0x1a12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12D0u;
        // 0x1a12d4: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12d0) {
            ctx->pc = 0x1A12F0u;
            return;
        }
    }
    ctx->pc = 0x1A12D8u;
    // 0x1a12d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12dc: 0x26a58888  addiu       $a1, $s5, -0x7778
    ctx->pc = 0x1a12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936712));
    // 0x1a12e0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A12E0u;
    SET_GPR_U32(ctx, 31, 0x1A12E8u);
    ctx->pc = 0x1A12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12E0u;
    // 0x1a12e4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A12E0u, 0x1A12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12E8u;
label_1a12e8:
    // 0x1a12e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A12E8u;
    {
        const bool branch_taken_0x1a12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12e8) {
            ctx->pc = 0x1A12FCu;
            return;
        }
    }
    ctx->pc = 0x1A12F0u;
}
