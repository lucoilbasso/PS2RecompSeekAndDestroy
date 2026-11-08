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

// Function: ApDebugHistorySuspend__Fb
// Address: 0x16f3b8 - 0x16f498
void ApDebugHistorySuspend__Fb_0x16f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugHistorySuspend__Fb_0x16f3b8");
#endif

    switch (ctx->pc) {
        case 0x16f3f4u: goto label_16f3f4;
        case 0x16f44cu: goto label_16f44c;
        case 0x16f488u: goto label_16f488;
        default: break;
    }

    ctx->pc = 0x16f3b8u;

    // 0x16f3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f3bc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F3BCu;
    {
        const bool branch_taken_0x16f3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3BCu;
        // 0x16f3c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3bc) {
            ctx->pc = 0x16F428u;
            goto label_16f428;
        }
    }
    ctx->pc = 0x16F3C4u;
    // 0x16f3c4: 0x8f828b60  lw          $v0, -0x74A0($gp)
    ctx->pc = 0x16f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x16f3c8: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x16F3C8u;
    {
        const bool branch_taken_0x16f3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f3c8) {
            ctx->pc = 0x16F3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F3C8u;
            // 0x16f3cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F490u;
            goto label_16f490;
        }
    }
    ctx->pc = 0x16F3D0u;
    // 0x16f3d0: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16f3d4: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x16f3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16f3d8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F3D8u;
    {
        const bool branch_taken_0x16f3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3D8u;
        // 0x16f3dc: 0xaf829150  sw          $v0, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3d8) {
            ctx->pc = 0x16F3F4u;
            goto label_16f3f4;
        }
    }
    ctx->pc = 0x16F3E0u;
    // 0x16f3e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16f3e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3e8: 0x24a57590  addiu       $a1, $a1, 0x7590
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30096));
    // 0x16f3ec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16F3ECu;
    SET_GPR_U32(ctx, 31, 0x16F3F4u);
    ctx->pc = 0x16F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3ECu;
    // 0x16f3f0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16F3ECu, 0x16F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3F4u;
label_16f3f4:
    // 0x16f3f4: 0x27858b68  addiu       $a1, $gp, -0x7498
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937448));
    // 0x16f3f8: 0x8f868b64  lw          $a2, -0x749C($gp)
    ctx->pc = 0x16f3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x16f3fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f404: 0xaf828b60  sw          $v0, -0x74A0($gp)
    ctx->pc = 0x16f404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 2));
    // 0x16f408: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16f410: 0x3c010027  lui         $at, 0x27
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)39 << 16));
    // 0x16f414: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x16f414u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x16f418: 0xac26ba00  sw          $a2, -0x4600($at)
    ctx->pc = 0x16f418u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), GPR_U32(ctx, 6));
    // 0x16f41c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x16f420: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16F420u;
    {
        const bool branch_taken_0x16f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F420u;
        // 0x16f424: 0xaf808b64  sw          $zero, -0x749C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f420) {
            ctx->pc = 0x16F48Cu;
            goto label_16f48c;
        }
    }
    ctx->pc = 0x16F428u;
label_16f428:
    // 0x16f428: 0x8f828b60  lw          $v0, -0x74A0($gp)
    ctx->pc = 0x16f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x16f42c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16F42Cu;
    {
        const bool branch_taken_0x16f42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F42Cu;
        // 0x16f430: 0x8f828b68  lw          $v0, -0x7498($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f42c) {
            ctx->pc = 0x16F48Cu;
            goto label_16f48c;
        }
    }
    ctx->pc = 0x16F434u;
    // 0x16f434: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F434u;
    {
        const bool branch_taken_0x16f434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F434u;
        // 0x16f438: 0x8f838b68  lw          $v1, -0x7498($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f434) {
            ctx->pc = 0x16F450u;
            goto label_16f450;
        }
    }
    ctx->pc = 0x16F43Cu;
    // 0x16f43c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16f440: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16f440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16f444: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16F444u;
    SET_GPR_U32(ctx, 31, 0x16F44Cu);
    ctx->pc = 0x16F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F444u;
    // 0x16f448: 0x24a575b0  addiu       $a1, $a1, 0x75B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16F444u, 0x16F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F44Cu;
label_16f44c:
    // 0x16f44c: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
label_16f450:
    // 0x16f450: 0x8f859150  lw          $a1, -0x6EB0($gp)
    ctx->pc = 0x16f450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938960)));
    // 0x16f454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f458: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16f458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f45c: 0xaf838b68  sw          $v1, -0x7498($gp)
    ctx->pc = 0x16f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
    // 0x16f460: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x16f464: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16f468: 0x8c42ba00  lw          $v0, -0x4600($v0)
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949376)));
    // 0x16f46c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F46Cu;
    {
        const bool branch_taken_0x16f46c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F46Cu;
        // 0x16f470: 0xaf828b64  sw          $v0, -0x749C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f46c) {
            ctx->pc = 0x16F488u;
            goto label_16f488;
        }
    }
    ctx->pc = 0x16F474u;
    // 0x16f474: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16f474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16f478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f47c: 0x24a575d0  addiu       $a1, $a1, 0x75D0
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30160));
    // 0x16f480: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16F480u;
    SET_GPR_U32(ctx, 31, 0x16F488u);
    ctx->pc = 0x16F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F480u;
    // 0x16f484: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16F480u, 0x16F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F488u;
label_16f488:
    // 0x16f488: 0xaf808b60  sw          $zero, -0x74A0($gp)
    ctx->pc = 0x16f488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 0));
label_16f48c:
    // 0x16f48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f490:
    // 0x16f490: 0x3e00008  jr          $ra
    ctx->pc = 0x16F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F490u;
        // 0x16f494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F498u;
}
