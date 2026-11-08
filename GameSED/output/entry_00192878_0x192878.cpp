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

// Function: entry_00192878
// Address: 0x192878 - 0x19289c
void entry_00192878_0x192878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192878_0x192878");
#endif

    switch (ctx->pc) {
        case 0x192880u: goto label_192880;
        default: break;
    }

    ctx->pc = 0x192878u;

    // 0x192878: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x192878u;
    SET_GPR_U32(ctx, 31, 0x192880u);
    ctx->pc = 0x19287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192878u;
    // 0x19287c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x192878u, 0x192880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192880u;
label_192880:
    // 0x192880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19288c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19288cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192894: 0x3e00008  jr          $ra
    ctx->pc = 0x192894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192894u;
        // 0x192898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19289Cu;
}
