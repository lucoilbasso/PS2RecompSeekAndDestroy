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

// Function: ApGameDrSeqThreadCallStart__FP9ApcGameDriii
// Address: 0x11b728 - 0x11b7e0
void ApGameDrSeqThreadCallStart__FP9ApcGameDriii_0x11b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqThreadCallStart__FP9ApcGameDriii_0x11b728");
#endif

    switch (ctx->pc) {
        case 0x11b790u: goto label_11b790;
        case 0x11b7b0u: goto label_11b7b0;
        case 0x11b7c0u: goto label_11b7c0;
        default: break;
    }

    ctx->pc = 0x11b728u;

    // 0x11b728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b72c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11b730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b73c: 0x261120a0  addiu       $s1, $s0, 0x20A0
    ctx->pc = 0x11b73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8352));
    // 0x11b740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b744: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11b744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11b74c: 0xc6180b  movn        $v1, $a2, $a2
    ctx->pc = 0x11b74cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x11b750: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11b754: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11b754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b758: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11b75c: 0x3c080012  lui         $t0, 0x12
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18 << 16));
    // 0x11b760: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11b760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11b764: 0xae0740a8  sw          $a3, 0x40A8($s0)
    ctx->pc = 0x11b764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16552), GPR_U32(ctx, 7));
    // 0x11b768: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b76c: 0x2513b6b8  addiu       $s3, $t0, -0x4948
    ctx->pc = 0x11b76cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948536));
    // 0x11b770: 0x8e0940a0  lw          $t1, 0x40A0($s0)
    ctx->pc = 0x11b770u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16544)));
    // 0x11b774: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11b774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x11b778: 0xae0340a4  sw          $v1, 0x40A4($s0)
    ctx->pc = 0x11b778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16548), GPR_U32(ctx, 3));
    // 0x11b77c: 0x15320004  bne         $t1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B77Cu;
    {
        const bool branch_taken_0x11b77c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 18));
        ctx->pc = 0x11B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B77Cu;
        // 0x11b780: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b77c) {
            ctx->pc = 0x11B790u;
            goto label_11b790;
        }
    }
    ctx->pc = 0x11B784u;
    // 0x11b784: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b788: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B788u;
    SET_GPR_U32(ctx, 31, 0x11B790u);
    ctx->pc = 0x11B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B788u;
    // 0x11b78c: 0x24a54760  addiu       $a1, $a1, 0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B788u, 0x11B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B790u;
label_11b790:
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
