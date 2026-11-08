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

// Function: entry_001c78c8
// Address: 0x1c78c8 - 0x1c78f0
void entry_001c78c8_0x1c78c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c78c8_0x1c78c8");
#endif

    switch (ctx->pc) {
        case 0x1c78d8u: goto label_1c78d8;
        default: break;
    }

    ctx->pc = 0x1c78c8u;

    // 0x1c78c8: 0xdfa400f0  ld          $a0, 0xF0($sp)
    ctx->pc = 0x1c78c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c78cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c78ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78d0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C78D0u;
    SET_GPR_U32(ctx, 31, 0x1C78D8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C78D0u, 0x1C78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78D8u;
label_1c78d8:
    // 0x1c78d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c78d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78dc: 0x1ac0000c  blez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x1C78DCu;
    {
        const bool branch_taken_0x1c78dc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1C78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78DCu;
        // 0x1c78e0: 0x8fa60234  lw          $a2, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78dc) {
            ctx->pc = 0x1C7910u;
            return;
        }
    }
    ctx->pc = 0x1C78E4u;
    // 0x1c78e4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c78e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78e8: 0x27b000f8  addiu       $s0, $sp, 0xF8
    ctx->pc = 0x1c78e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1c78ec: 0x0  nop
    ctx->pc = 0x1c78ecu;
    // NOP
    ctx->pc = 0x1c78f0u;
}
