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

// Function: entry_0011b790
// Address: 0x11b790 - 0x11b7e0
void entry_0011b790_0x11b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b790_0x11b790");
#endif

    switch (ctx->pc) {
        case 0x11b7b0u: goto label_11b7b0;
        case 0x11b7c0u: goto label_11b7c0;
        default: break;
    }

    ctx->pc = 0x11b790u;

    // 0x11b790: 0xae1240a0  sw          $s2, 0x40A0($s0)
    ctx->pc = 0x11b790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16544), GPR_U32(ctx, 18));
    // 0x11b794: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11b794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b798: 0x260820c0  addiu       $t0, $s0, 0x20C0
    ctx->pc = 0x11b798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8384));
    // 0x11b79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7a4: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b7a8: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B7A8u;
    SET_GPR_U32(ctx, 31, 0x11B7B0u);
    ctx->pc = 0x11B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7A8u;
    // 0x11b7ac: 0x240907f8  addiu       $t1, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B7A8u, 0x11B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7B0u;
label_11b7b0:
    // 0x11b7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7b4: 0xae1420b4  sw          $s4, 0x20B4($s0)
    ctx->pc = 0x11b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8372), GPR_U32(ctx, 20));
    // 0x11b7b8: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B7B8u;
    SET_GPR_U32(ctx, 31, 0x11B7C0u);
    ctx->pc = 0x11B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7B8u;
    // 0x11b7bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B7B8u, 0x11B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7C0u;
label_11b7c0:
    // 0x11b7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b7c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b7c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b7cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11b7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b7d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11b7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b7d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11b7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D8u;
        // 0x11b7dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B7E0u;
}
