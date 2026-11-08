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

// Function: ApGameDrCreate__FP9ApcStudioPci
// Address: 0x11b270 - 0x11b2f4
void ApGameDrCreate__FP9ApcStudioPci_0x11b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrCreate__FP9ApcStudioPci_0x11b270");
#endif

    switch (ctx->pc) {
        case 0x11b29cu: goto label_11b29c;
        case 0x11b2a4u: goto label_11b2a4;
        case 0x11b2c8u: goto label_11b2c8;
        case 0x11b2d4u: goto label_11b2d4;
        default: break;
    }

    ctx->pc = 0x11b270u;

    // 0x11b270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b278: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b27c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x11b280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11b288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b28c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11b290: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b294: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11B294u;
    SET_GPR_U32(ctx, 31, 0x11B29Cu);
    ctx->pc = 0x11B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B294u;
    // 0x11b298: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11B294u, 0x11B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B29Cu;
label_11b29c:
    // 0x11b29c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11B29Cu;
    SET_GPR_U32(ctx, 31, 0x11B2A4u);
    ctx->pc = 0x11B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B29Cu;
    // 0x11b2a0: 0x240440b0  addiu       $a0, $zero, 0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11B29Cu, 0x11B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2A4u;
label_11b2a4:
    // 0x11b2a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2ac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11b2b0: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x11b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x11b2b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11b2bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11b2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2c0: 0xc046b50  jal         func_11AD40
    ctx->pc = 0x11B2C0u;
    SET_GPR_U32(ctx, 31, 0x11B2C8u);
    ctx->pc = 0x11B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2C0u;
    // 0x11b2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD40u, 0x11B2C0u, 0x11B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2C8u;
label_11b2c8:
    // 0x11b2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2cc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11B2CCu;
    SET_GPR_U32(ctx, 31, 0x11B2D4u);
    ctx->pc = 0x11B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2CCu;
    // 0x11b2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11B2CCu, 0x11B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2D4u;
label_11b2d4:
    // 0x11b2d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b2e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b2e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11b2e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b2e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2ECu;
        // 0x11b2f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B2F4u;
}
