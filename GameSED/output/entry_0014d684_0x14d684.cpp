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

// Function: entry_0014d684
// Address: 0x14d684 - 0x14d6bc
void entry_0014d684_0x14d684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d684_0x14d684");
#endif

    switch (ctx->pc) {
        case 0x14d694u: goto label_14d694;
        case 0x14d6a4u: goto label_14d6a4;
        default: break;
    }

    ctx->pc = 0x14d684u;

    // 0x14d684: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14d688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d68c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x14D68Cu;
    SET_GPR_U32(ctx, 31, 0x14D694u);
    ctx->pc = 0x14D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D68Cu;
    // 0x14d690: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x14D68Cu, 0x14D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D694u;
label_14d694:
    // 0x14d694: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14d698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d69c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x14D69Cu;
    SET_GPR_U32(ctx, 31, 0x14D6A4u);
    ctx->pc = 0x14D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D69Cu;
    // 0x14d6a0: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x14D69Cu, 0x14D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6A4u;
label_14d6a4:
    // 0x14d6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d6a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d6ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14d6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d6b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6B4u;
        // 0x14d6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D6BCu;
}
