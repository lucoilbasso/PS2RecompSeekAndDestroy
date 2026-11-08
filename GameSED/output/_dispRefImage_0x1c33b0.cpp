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

// Function: _dispRefImage
// Address: 0x1c33b0 - 0x1c34c0
void _dispRefImage_0x1c33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImage_0x1c33b0");
#endif

    switch (ctx->pc) {
        case 0x1c33dcu: goto label_1c33dc;
        case 0x1c345cu: goto label_1c345c;
        case 0x1c3484u: goto label_1c3484;
        case 0x1c3494u: goto label_1c3494;
        default: break;
    }

    ctx->pc = 0x1c33b0u;

    // 0x1c33b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c33b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c33b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c33bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c33bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c33c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c33c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33c8: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x1c33c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1c33cc: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1c33ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1c33d0: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1c33d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1c33d4: 0xc070c88  jal         func_1C3220
    ctx->pc = 0x1C33D4u;
    SET_GPR_U32(ctx, 31, 0x1C33DCu);
    ctx->pc = 0x1C33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33D4u;
    // 0x1c33d8: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3220u, 0x1C33D4u, 0x1C33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33DCu;
label_1c33dc:
    // 0x1c33dc: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x1c33dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1c33e0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1c33e4: 0x24c6dce8  addiu       $a2, $a2, -0x2318
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958312));
    // 0x1c33e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c33e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33ec: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1c33ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c33f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c33f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33f4: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x1c33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c33f8: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x1c33f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x1c33fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c33fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c3400: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1c3400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1c3404: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1c3404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1c3408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c340c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1c340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1c3410: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1c3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c3414: 0x9c460000  lwu         $a2, 0x0($v0)
    ctx->pc = 0x1c3414u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3418: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1c3418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x1c341c: 0xfe060088  sd          $a2, 0x88($s0)
    ctx->pc = 0x1c341cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 6));
    // 0x1c3420: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1c3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c3424: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c3424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c3428: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1c3428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1c342c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1c342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x1c3430: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1c3434: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1c3434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1c3438: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1c3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1c343c: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1c343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x1c3440: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1c3444: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1c3444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1c3448: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1c344c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1c344cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x1c3450: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1c3450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1c3454: 0xc070bb2  jal         func_1C2EC8
    ctx->pc = 0x1C3454u;
    SET_GPR_U32(ctx, 31, 0x1C345Cu);
    ctx->pc = 0x1C3458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3454u;
    // 0x1c3458: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2EC8u, 0x1C3454u, 0x1C345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C345Cu;
label_1c345c:
    // 0x1c345c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C345Cu;
    {
        const bool branch_taken_0x1c345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C345Cu;
        // 0x1c3460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c345c) {
            ctx->pc = 0x1C34ACu;
            goto label_1c34ac;
        }
    }
    ctx->pc = 0x1C3464u;
    // 0x1c3464: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1c3464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c3468: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3468u;
    {
        const bool branch_taken_0x1c3468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3468u;
        // 0x1c346c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3468) {
            ctx->pc = 0x1C34B0u;
            goto label_1c34b0;
        }
    }
    ctx->pc = 0x1C3470u;
    // 0x1c3470: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1c3470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1c3474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3474u;
    {
        const bool branch_taken_0x1c3474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3474u;
        // 0x1c3478: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3474) {
            ctx->pc = 0x1C348Cu;
            goto label_1c348c;
        }
    }
    ctx->pc = 0x1C347Cu;
    // 0x1c347c: 0xc070f5a  jal         func_1C3D68
    ctx->pc = 0x1C347Cu;
    SET_GPR_U32(ctx, 31, 0x1C3484u);
    ctx->pc = 0x1C3480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C347Cu;
    // 0x1c3480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3D68u, 0x1C347Cu, 0x1C3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3484u;
label_1c3484:
    // 0x1c3484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3484u;
    {
        const bool branch_taken_0x1c3484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3484u;
        // 0x1c3488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3484) {
            ctx->pc = 0x1C3498u;
            goto label_1c3498;
        }
    }
    ctx->pc = 0x1C348Cu;
label_1c348c:
    // 0x1c348c: 0xc070bda  jal         func_1C2F68
    ctx->pc = 0x1C348Cu;
    SET_GPR_U32(ctx, 31, 0x1C3494u);
    ctx->pc = 0x1C3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C348Cu;
    // 0x1c3490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F68u, 0x1C348Cu, 0x1C3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3494u;
label_1c3494:
    // 0x1c3494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3498:
    // 0x1c3498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c349c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c349cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c34a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c34a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c34a4: 0x8070c7e  j           func_1C31F8
    ctx->pc = 0x1C34A4u;
    ctx->pc = 0x1C34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34A4u;
    // 0x1c34a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C31F8u;
    _markOutput_0x1c31f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C34ACu;
label_1c34ac:
    // 0x1c34ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c34acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c34b0:
    // 0x1c34b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c34b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c34b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c34b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c34b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C34B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34B8u;
        // 0x1c34bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C34B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C34C0u;
}
