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

// Function: CommandDriverInit__9ApcSndDrv
// Address: 0x11d4e8 - 0x11d5fc
void CommandDriverInit__9ApcSndDrv_0x11d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandDriverInit__9ApcSndDrv_0x11d4e8");
#endif

    switch (ctx->pc) {
        case 0x11d548u: goto label_11d548;
        case 0x11d560u: goto label_11d560;
        case 0x11d584u: goto label_11d584;
        case 0x11d5b8u: goto label_11d5b8;
        case 0x11d5d4u: goto label_11d5d4;
        case 0x11d5e8u: goto label_11d5e8;
        default: break;
    }

    ctx->pc = 0x11d4e8u;

    // 0x11d4e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d4ec: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x11d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d4f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11d4f4: 0x3410c034  ori         $s0, $zero, 0xC034
    ctx->pc = 0x11d4f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x11d4f8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x11d4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11d4fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11d500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d504: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x11d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x11d508: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11d50c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11d510: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x11d510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x11d514: 0x8cb10030  lw          $s1, 0x30($a1)
    ctx->pc = 0x11d514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11d518: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x11d518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11d51c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x11d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x11d520: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x11d520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x11d524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d528: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x11d528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x11d52c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x11d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x11d530: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x11d530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x11d534: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x11d534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x11d538: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x11d538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x11d53c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x11d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x11d540: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D540u;
    SET_GPR_U32(ctx, 31, 0x11D548u);
    ctx->pc = 0x11D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D540u;
    // 0x11d544: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D540u, 0x11D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D548u;
label_11d548:
    // 0x11d548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d54c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11d550: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x11d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x11d554: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11d554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11d558: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D558u;
    SET_GPR_U32(ctx, 31, 0x11D560u);
    ctx->pc = 0x11D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D558u;
    // 0x11d55c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D558u, 0x11D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D560u;
label_11d560:
    // 0x11d560: 0x24035800  addiu       $v1, $zero, 0x5800
    ctx->pc = 0x11d560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
    // 0x11d564: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x11d564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11d568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d56c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x11d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x11d570: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x11d570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x11d574: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x11d574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x11d578: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x11d578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x11d57c: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D57Cu;
    SET_GPR_U32(ctx, 31, 0x11D584u);
    ctx->pc = 0x11D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D57Cu;
    // 0x11d580: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D57Cu, 0x11D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D584u;
label_11d584:
    // 0x11d584: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x11d584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x11d588: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x11d588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11d58c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x11d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x11d590: 0x3463b800  ori         $v1, $v1, 0xB800
    ctx->pc = 0x11d590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47104);
    // 0x11d594: 0x34a51800  ori         $a1, $a1, 0x1800
    ctx->pc = 0x11d594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6144);
    // 0x11d598: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11d598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x11d59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5a0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x11d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x11d5a4: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x11d5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x11d5a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11d5ac: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x11d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x11d5b0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x11D5B0u;
    SET_GPR_U32(ctx, 31, 0x11D5B8u);
    ctx->pc = 0x11D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5B0u;
    // 0x11d5b4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x11D5B0u, 0x11D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5B8u;
label_11d5b8:
    // 0x11d5b8: 0x8f869128  lw          $a2, -0x6ED8($gp)
    ctx->pc = 0x11d5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x11d5bc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d5c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5c4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x11d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x11d5c8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x11d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x11d5cc: 0xc05eb76  jal         func_17ADD8
    ctx->pc = 0x11D5CCu;
    SET_GPR_U32(ctx, 31, 0x11D5D4u);
    ctx->pc = 0x11D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5CCu;
    // 0x11d5d0: 0xafa6002c  sw          $a2, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ADD8u, 0x11D5CCu, 0x11D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5D4u;
label_11d5d4:
    // 0x11d5d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d5d8: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11d5dc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11d5e0: 0xc04776a  jal         func_11DDA8
    ctx->pc = 0x11D5E0u;
    SET_GPR_U32(ctx, 31, 0x11D5E8u);
    ctx->pc = 0x11D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5E0u;
    // 0x11d5e4: 0x24a56ff0  addiu       $a1, $a1, 0x6FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDA8u, 0x11D5E0u, 0x11D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5E8u;
label_11d5e8:
    // 0x11d5e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11d5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d5ec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x11d5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11d5f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11d5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5F4u;
        // 0x11d5f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D5FCu;
}
