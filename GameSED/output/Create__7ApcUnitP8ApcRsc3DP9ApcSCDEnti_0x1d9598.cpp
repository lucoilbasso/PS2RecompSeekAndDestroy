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

// Function: Create__7ApcUnitP8ApcRsc3DP9ApcSCDEnti
// Address: 0x1d9598 - 0x1d961c
void Create__7ApcUnitP8ApcRsc3DP9ApcSCDEnti_0x1d9598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__7ApcUnitP8ApcRsc3DP9ApcSCDEnti_0x1d9598");
#endif

    switch (ctx->pc) {
        case 0x1d95c4u: goto label_1d95c4;
        case 0x1d95ccu: goto label_1d95cc;
        case 0x1d95f0u: goto label_1d95f0;
        case 0x1d95fcu: goto label_1d95fc;
        default: break;
    }

    ctx->pc = 0x1d9598u;

    // 0x1d9598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d959c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d95a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d95a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95a4: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1d95a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d95a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d95ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d95acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d95b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d95b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d95b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d95b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d95b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d95bc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D95BCu;
    SET_GPR_U32(ctx, 31, 0x1D95C4u);
    ctx->pc = 0x1D95C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95BCu;
    // 0x1d95c0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D95BCu, 0x1D95C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95C4u;
label_1d95c4:
    // 0x1d95c4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D95C4u;
    SET_GPR_U32(ctx, 31, 0x1D95CCu);
    ctx->pc = 0x1D95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95C4u;
    // 0x1d95c8: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D95C4u, 0x1D95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95CCu;
label_1d95cc:
    // 0x1d95cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d95ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d95d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d95d8: 0x2442ef68  addiu       $v0, $v0, -0x1098
    ctx->pc = 0x1d95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963048));
    // 0x1d95dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d95dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d95e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d95e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95e8: 0xc0529f0  jal         func_14A7C0
    ctx->pc = 0x1D95E8u;
    SET_GPR_U32(ctx, 31, 0x1D95F0u);
    ctx->pc = 0x1D95ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95E8u;
    // 0x1d95ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x1D95E8u, 0x1D95F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95F0u;
label_1d95f0:
    // 0x1d95f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d95f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95f4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D95F4u;
    SET_GPR_U32(ctx, 31, 0x1D95FCu);
    ctx->pc = 0x1D95F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95F4u;
    // 0x1d95f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D95F4u, 0x1D95FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95FCu;
label_1d95fc:
    // 0x1d95fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d95fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9608: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d960c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d960cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9614: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9614u;
        // 0x1d9618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D961Cu;
}
