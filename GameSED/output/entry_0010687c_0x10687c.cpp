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

// Function: entry_0010687c
// Address: 0x10687c - 0x1068b0
void entry_0010687c_0x10687c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010687c_0x10687c");
#endif

    switch (ctx->pc) {
        case 0x10688cu: goto label_10688c;
        default: break;
    }

    ctx->pc = 0x10687cu;

    // 0x10687c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106880: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x106880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106884: 0xc046dca  jal         func_11B728
    ctx->pc = 0x106884u;
    SET_GPR_U32(ctx, 31, 0x10688Cu);
    ctx->pc = 0x106888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106884u;
    // 0x106888: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B728u, 0x106884u, 0x10688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10688Cu;
label_10688c:
    // 0x10688c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10688cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106898: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10689c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10689cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1068a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1068a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1068a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1068a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1068a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1068A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1068ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A8u;
        // 0x1068ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1068B0u;
}
