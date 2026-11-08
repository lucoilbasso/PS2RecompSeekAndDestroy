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

// Function: kputchar
// Address: 0x1b0680 - 0x1b06b8
void kputchar_0x1b0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputchar_0x1b0680");
#endif

    switch (ctx->pc) {
        case 0x1b0688u: goto label_1b0688;
        default: break;
    }

    ctx->pc = 0x1b0680u;

    // 0x1b0680: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b0680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0684: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x1b0684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_1b0688:
    // 0x1b0688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b068c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1b068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1b0690: 0x0  nop
    ctx->pc = 0x1b0690u;
    // NOP
    // 0x1b0694: 0x0  nop
    ctx->pc = 0x1b0694u;
    // NOP
    // 0x1b0698: 0x0  nop
    ctx->pc = 0x1b0698u;
    // NOP
    // 0x1b069c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B069Cu;
    {
        const bool branch_taken_0x1b069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b069c) {
            ctx->pc = 0x1B0688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0688;
        }
    }
    ctx->pc = 0x1B06A4u;
    // 0x1b06a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b06a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b06a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06ac: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x1b06acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x1b06b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B06B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06B0u;
        // 0x1b06b4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B06B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B06B8u;
}
