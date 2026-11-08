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

// Function: entry_0017d4d4
// Address: 0x17d4d4 - 0x17d508
void entry_0017d4d4_0x17d4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d4d4_0x17d4d4");
#endif

    switch (ctx->pc) {
        case 0x17d4e0u: goto label_17d4e0;
        case 0x17d4f4u: goto label_17d4f4;
        default: break;
    }

    ctx->pc = 0x17d4d4u;

    // 0x17d4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d4d8: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x17D4D8u;
    SET_GPR_U32(ctx, 31, 0x17D4E0u);
    ctx->pc = 0x17D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4D8u;
    // 0x17d4dc: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x17D4D8u, 0x17D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4E0u;
label_17d4e0:
    // 0x17d4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17d4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d4ec: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x17D4ECu;
    SET_GPR_U32(ctx, 31, 0x17D4F4u);
    ctx->pc = 0x17D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4ECu;
    // 0x17d4f0: 0x24071800  addiu       $a3, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x17D4ECu, 0x17D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4F4u;
label_17d4f4:
    // 0x17d4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d500: 0x3e00008  jr          $ra
    ctx->pc = 0x17D500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D500u;
        // 0x17d504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D508u;
}
