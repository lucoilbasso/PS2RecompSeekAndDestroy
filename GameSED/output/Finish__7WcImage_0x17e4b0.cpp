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

// Function: Finish__7WcImage
// Address: 0x17e4b0 - 0x17e504
void Finish__7WcImage_0x17e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcImage_0x17e4b0");
#endif

    switch (ctx->pc) {
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e4f4u: goto label_17e4f4;
        default: break;
    }

    ctx->pc = 0x17e4b0u;

    // 0x17e4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17e4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4c4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17e4c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E4C8u;
    {
        const bool branch_taken_0x17e4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4C8u;
        // 0x17e4cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4c8) {
            ctx->pc = 0x17E4D8u;
            goto label_17e4d8;
        }
    }
    ctx->pc = 0x17E4D0u;
    // 0x17e4d0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17E4D0u;
    SET_GPR_U32(ctx, 31, 0x17E4D8u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17E4D0u, 0x17E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4D8u;
label_17e4d8:
    // 0x17e4d8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17e4dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E4DCu;
    {
        const bool branch_taken_0x17e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4dc) {
            ctx->pc = 0x17E4ECu;
            goto label_17e4ec;
        }
    }
    ctx->pc = 0x17E4E4u;
    // 0x17e4e4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17E4E4u;
    SET_GPR_U32(ctx, 31, 0x17E4ECu);
    ctx->pc = 0x17E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4E4u;
    // 0x17e4e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17E4E4u, 0x17E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4ECu;
label_17e4ec:
    // 0x17e4ec: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x17E4ECu;
    SET_GPR_U32(ctx, 31, 0x17E4F4u);
    ctx->pc = 0x17E4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4ECu;
    // 0x17e4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x17E4ECu, 0x17E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4F4u;
label_17e4f4:
    // 0x17e4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4FCu;
        // 0x17e500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E504u;
}
