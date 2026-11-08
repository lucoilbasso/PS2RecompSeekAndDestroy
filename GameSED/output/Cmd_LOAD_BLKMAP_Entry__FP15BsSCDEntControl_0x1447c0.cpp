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

// Function: Cmd_LOAD_BLKMAP_Entry__FP15BsSCDEntControl
// Address: 0x1447c0 - 0x144890
void Cmd_LOAD_BLKMAP_Entry__FP15BsSCDEntControl_0x1447c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_BLKMAP_Entry__FP15BsSCDEntControl_0x1447c0");
#endif

    switch (ctx->pc) {
        case 0x1447f8u: goto label_1447f8;
        case 0x144800u: goto label_144800;
        case 0x14481cu: goto label_14481c;
        case 0x144830u: goto label_144830;
        case 0x144840u: goto label_144840;
        case 0x144848u: goto label_144848;
        case 0x144860u: goto label_144860;
        case 0x144868u: goto label_144868;
        case 0x144870u: goto label_144870;
        default: break;
    }

    ctx->pc = 0x1447c0u;

    // 0x1447c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1447c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1447c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1447c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1447c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1447cc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1447ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1447d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1447d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1447d4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1447d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1447d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1447d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1447dc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1447dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1447e0: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x1447e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1447e4: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1447E4u;
    {
        const bool branch_taken_0x1447e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1447E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447E4u;
        // 0x1447e8: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447e4) {
            ctx->pc = 0x144828u;
            goto label_144828;
        }
    }
    ctx->pc = 0x1447ECu;
    // 0x1447ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1447f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1447F0u;
    SET_GPR_U32(ctx, 31, 0x1447F8u);
    ctx->pc = 0x1447F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447F0u;
    // 0x1447f4: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1447F0u, 0x1447F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447F8u;
label_1447f8:
    // 0x1447f8: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x1447F8u;
    SET_GPR_U32(ctx, 31, 0x144800u);
    ctx->pc = 0x1447FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447F8u;
    // 0x1447fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x1447F8u, 0x144800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144800u;
label_144800:
    // 0x144800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144804: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x144808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14480c: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x14480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x144810: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144814: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144814u;
    SET_GPR_U32(ctx, 31, 0x14481Cu);
    ctx->pc = 0x144818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144814u;
    // 0x144818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144814u, 0x14481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14481Cu;
label_14481c:
    // 0x14481c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14481Cu;
    {
        const bool branch_taken_0x14481c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14481c) {
            ctx->pc = 0x144860u;
            goto label_144860;
        }
    }
    ctx->pc = 0x144824u;
    // 0x144824: 0x0  nop
    ctx->pc = 0x144824u;
    // NOP
label_144828:
    // 0x144828: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144828u;
    SET_GPR_U32(ctx, 31, 0x144830u);
    ctx->pc = 0x14482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144828u;
    // 0x14482c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144828u, 0x144830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144830u;
label_144830:
    // 0x144830: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x144834: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    // 0x144838: 0xc067392  jal         func_19CE48
    ctx->pc = 0x144838u;
    SET_GPR_U32(ctx, 31, 0x144840u);
    ctx->pc = 0x14483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144838u;
    // 0x14483c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x144838u, 0x144840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144840u;
label_144840:
    // 0x144840: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144840u;
    SET_GPR_U32(ctx, 31, 0x144848u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144840u, 0x144848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144848u;
label_144848:
    // 0x144848: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14484c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14484cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144858: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144858u;
    SET_GPR_U32(ctx, 31, 0x144860u);
    ctx->pc = 0x14485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144858u;
    // 0x14485c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144858u, 0x144860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144860u;
label_144860:
    // 0x144860: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144860u;
    SET_GPR_U32(ctx, 31, 0x144868u);
    ctx->pc = 0x144864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144860u;
    // 0x144864: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144860u, 0x144868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144868u;
label_144868:
    // 0x144868: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144868u;
    SET_GPR_U32(ctx, 31, 0x144870u);
    ctx->pc = 0x14486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144868u;
    // 0x14486c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144868u, 0x144870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144870u;
label_144870:
    // 0x144870: 0xae720078  sw          $s2, 0x78($s3)
    ctx->pc = 0x144870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 18));
    // 0x144874: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144878: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14487c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x14487cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144880: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144884: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144888: 0x3e00008  jr          $ra
    ctx->pc = 0x144888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144888u;
        // 0x14488c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144890u;
}
