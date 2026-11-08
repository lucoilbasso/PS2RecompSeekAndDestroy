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

// Function: WPolyCreate__Fii
// Address: 0x1901b8 - 0x19022c
void WPolyCreate__Fii_0x1901b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolyCreate__Fii_0x1901b8");
#endif

    switch (ctx->pc) {
        case 0x1901dcu: goto label_1901dc;
        case 0x1901e4u: goto label_1901e4;
        case 0x190204u: goto label_190204;
        case 0x190210u: goto label_190210;
        default: break;
    }

    ctx->pc = 0x1901b8u;

    // 0x1901b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1901b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1901bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1901bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1901c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1901c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901c4: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x1901c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1901c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1901c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1901cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1901ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1901d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1901d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1901d4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1901D4u;
    SET_GPR_U32(ctx, 31, 0x1901DCu);
    ctx->pc = 0x1901D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901D4u;
    // 0x1901d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1901D4u, 0x1901DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901DCu;
label_1901dc:
    // 0x1901dc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1901DCu;
    SET_GPR_U32(ctx, 31, 0x1901E4u);
    ctx->pc = 0x1901E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901DCu;
    // 0x1901e0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1901DCu, 0x1901E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901E4u;
label_1901e4:
    // 0x1901e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1901e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1901e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901ec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1901ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1901f0: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x1901f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1901f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1901f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1901fc: 0xc06408c  jal         func_190230
    ctx->pc = 0x1901FCu;
    SET_GPR_U32(ctx, 31, 0x190204u);
    ctx->pc = 0x190200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901FCu;
    // 0x190200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190230u, 0x1901FCu, 0x190204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190204u;
label_190204:
    // 0x190204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190208: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x190208u;
    SET_GPR_U32(ctx, 31, 0x190210u);
    ctx->pc = 0x19020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190208u;
    // 0x19020c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x190208u, 0x190210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190210u;
label_190210:
    // 0x190210: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19021c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19021cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190220: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x190220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190224: 0x3e00008  jr          $ra
    ctx->pc = 0x190224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190224u;
        // 0x190228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19022Cu;
}
