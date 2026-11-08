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

// Function: entry_0017d4a0
// Address: 0x17d4a0 - 0x17d4bc
void entry_0017d4a0_0x17d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d4a0_0x17d4a0");
#endif

    switch (ctx->pc) {
        case 0x17d4a8u: goto label_17d4a8;
        default: break;
    }

    ctx->pc = 0x17d4a0u;

    // 0x17d4a0: 0xc05f530  jal         func_17D4C0
    ctx->pc = 0x17D4A0u;
    SET_GPR_U32(ctx, 31, 0x17D4A8u);
    ctx->pc = 0x17D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4A0u;
    // 0x17d4a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4C0u, 0x17D4A0u, 0x17D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4A8u;
label_17d4a8:
    // 0x17d4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4B4u;
        // 0x17d4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4BCu;
}
