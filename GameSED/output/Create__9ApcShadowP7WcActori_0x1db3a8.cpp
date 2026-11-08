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

// Function: Create__9ApcShadowP7WcActori
// Address: 0x1db3a8 - 0x1db41c
void Create__9ApcShadowP7WcActori_0x1db3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__9ApcShadowP7WcActori_0x1db3a8");
#endif

    switch (ctx->pc) {
        case 0x1db3ccu: goto label_1db3cc;
        case 0x1db3d4u: goto label_1db3d4;
        case 0x1db3f0u: goto label_1db3f0;
        case 0x1db400u: goto label_1db400;
        default: break;
    }

    ctx->pc = 0x1db3a8u;

    // 0x1db3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db3ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db3b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3b4: 0x24040186  addiu       $a0, $zero, 0x186
    ctx->pc = 0x1db3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x1db3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db3bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db3c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db3c4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DB3C4u;
    SET_GPR_U32(ctx, 31, 0x1DB3CCu);
    ctx->pc = 0x1DB3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3C4u;
    // 0x1db3c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DB3C4u, 0x1DB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3CCu;
label_1db3cc:
    // 0x1db3cc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DB3CCu;
    SET_GPR_U32(ctx, 31, 0x1DB3D4u);
    ctx->pc = 0x1DB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3CCu;
    // 0x1db3d0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DB3CCu, 0x1DB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3D4u;
label_1db3d4:
    // 0x1db3d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1db3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1db3e0: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x1db3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
    // 0x1db3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3e8: 0xc05ac70  jal         func_16B1C0
    ctx->pc = 0x1DB3E8u;
    SET_GPR_U32(ctx, 31, 0x1DB3F0u);
    ctx->pc = 0x1DB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3E8u;
    // 0x1db3ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1C0u, 0x1DB3E8u, 0x1DB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3F0u;
label_1db3f0:
    // 0x1db3f0: 0xae1201e0  sw          $s2, 0x1E0($s0)
    ctx->pc = 0x1db3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 18));
    // 0x1db3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3f8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DB3F8u;
    SET_GPR_U32(ctx, 31, 0x1DB400u);
    ctx->pc = 0x1DB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3F8u;
    // 0x1db3fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DB3F8u, 0x1DB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB400u;
label_1db400:
    // 0x1db400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db40c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db414: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB414u;
        // 0x1db418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB41Cu;
}
