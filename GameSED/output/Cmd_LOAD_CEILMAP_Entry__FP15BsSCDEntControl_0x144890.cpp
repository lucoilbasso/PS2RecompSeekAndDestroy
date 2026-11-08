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

// Function: Cmd_LOAD_CEILMAP_Entry__FP15BsSCDEntControl
// Address: 0x144890 - 0x144960
void Cmd_LOAD_CEILMAP_Entry__FP15BsSCDEntControl_0x144890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_CEILMAP_Entry__FP15BsSCDEntControl_0x144890");
#endif

    switch (ctx->pc) {
        case 0x1448c8u: goto label_1448c8;
        case 0x1448d0u: goto label_1448d0;
        case 0x1448ecu: goto label_1448ec;
        case 0x144900u: goto label_144900;
        case 0x144910u: goto label_144910;
        case 0x144918u: goto label_144918;
        case 0x144930u: goto label_144930;
        case 0x144938u: goto label_144938;
        case 0x144940u: goto label_144940;
        default: break;
    }

    ctx->pc = 0x144890u;

    // 0x144890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144894: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x144894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144898: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x14489c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x14489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1448a0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1448a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1448a4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1448a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1448a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1448a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1448ac: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1448acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1448b0: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x1448b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1448b4: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1448B4u;
    {
        const bool branch_taken_0x1448b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1448B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448B4u;
        // 0x1448b8: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1448b4) {
            ctx->pc = 0x1448F8u;
            goto label_1448f8;
        }
    }
    ctx->pc = 0x1448BCu;
    // 0x1448bc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1448bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1448c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1448C0u;
    SET_GPR_U32(ctx, 31, 0x1448C8u);
    ctx->pc = 0x1448C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448C0u;
    // 0x1448c4: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1448C0u, 0x1448C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448C8u;
label_1448c8:
    // 0x1448c8: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x1448C8u;
    SET_GPR_U32(ctx, 31, 0x1448D0u);
    ctx->pc = 0x1448CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448C8u;
    // 0x1448cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x1448C8u, 0x1448D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448D0u;
label_1448d0:
    // 0x1448d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1448d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448d4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1448d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1448d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1448d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448dc: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x1448dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1448e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1448e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448e4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1448E4u;
    SET_GPR_U32(ctx, 31, 0x1448ECu);
    ctx->pc = 0x1448E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448E4u;
    // 0x1448e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1448E4u, 0x1448ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448ECu;
label_1448ec:
    // 0x1448ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1448ECu;
    {
        const bool branch_taken_0x1448ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1448ec) {
            ctx->pc = 0x144930u;
            goto label_144930;
        }
    }
    ctx->pc = 0x1448F4u;
    // 0x1448f4: 0x0  nop
    ctx->pc = 0x1448f4u;
    // NOP
label_1448f8:
    // 0x1448f8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1448F8u;
    SET_GPR_U32(ctx, 31, 0x144900u);
    ctx->pc = 0x1448FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448F8u;
    // 0x1448fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1448F8u, 0x144900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144900u;
label_144900:
    // 0x144900: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144904: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x144904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x144908: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144908u;
    SET_GPR_U32(ctx, 31, 0x144910u);
    ctx->pc = 0x14490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144908u;
    // 0x14490c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144908u, 0x144910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144910u;
label_144910:
    // 0x144910: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144910u;
    SET_GPR_U32(ctx, 31, 0x144918u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144910u, 0x144918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144918u;
label_144918:
    // 0x144918: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14491c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144928: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144928u;
    SET_GPR_U32(ctx, 31, 0x144930u);
    ctx->pc = 0x14492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144928u;
    // 0x14492c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144928u, 0x144930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144930u;
label_144930:
    // 0x144930: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144930u;
    SET_GPR_U32(ctx, 31, 0x144938u);
    ctx->pc = 0x144934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144930u;
    // 0x144934: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144930u, 0x144938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144938u;
label_144938:
    // 0x144938: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144938u;
    SET_GPR_U32(ctx, 31, 0x144940u);
    ctx->pc = 0x14493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144938u;
    // 0x14493c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144938u, 0x144940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144940u;
label_144940:
    // 0x144940: 0xae72007c  sw          $s2, 0x7C($s3)
    ctx->pc = 0x144940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 18));
    // 0x144944: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144948: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14494c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x14494cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144950: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144954: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144958: 0x3e00008  jr          $ra
    ctx->pc = 0x144958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144958u;
        // 0x14495c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144960u;
}
