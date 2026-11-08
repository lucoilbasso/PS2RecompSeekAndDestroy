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

// Function: Cmd_CLIP_Entry__FP15BsSCDEntControl
// Address: 0x1a6730 - 0x1a683c
void Cmd_CLIP_Entry__FP15BsSCDEntControl_0x1a6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CLIP_Entry__FP15BsSCDEntControl_0x1a6730");
#endif

    switch (ctx->pc) {
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6798u: goto label_1a6798;
        case 0x1a67d0u: goto label_1a67d0;
        case 0x1a6808u: goto label_1a6808;
        default: break;
    }

    ctx->pc = 0x1a6730u;

    // 0x1a6730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a673c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a673cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6740: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6744: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a674c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6750: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6758: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a675c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A675Cu;
    SET_GPR_U32(ctx, 31, 0x1A6764u);
    ctx->pc = 0x1A6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A675Cu;
    // 0x1a6760: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A675Cu, 0x1A6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6764u;
label_1a6764:
    // 0x1a6764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6768: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a676c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6770: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6774: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6778: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a677c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a677cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6784: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6788: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6788u;
    {
        const bool branch_taken_0x1a6788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6788u;
        // 0x1a678c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6788) {
            ctx->pc = 0x1A679Cu;
            goto label_1a679c;
        }
    }
    ctx->pc = 0x1A6790u;
    // 0x1a6790: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6790u;
    SET_GPR_U32(ctx, 31, 0x1A6798u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6790u, 0x1A6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6798u;
label_1a6798:
    // 0x1a6798: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a679c:
    // 0x1a679c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a67a0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a67a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a67a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a67a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a67ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a67acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a67b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a67b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a67b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a67bc: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a67bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a67c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A67C0u;
    {
        const bool branch_taken_0x1a67c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67C0u;
        // 0x1a67c4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67c0) {
            ctx->pc = 0x1A67D8u;
            goto label_1a67d8;
        }
    }
    ctx->pc = 0x1A67C8u;
    // 0x1a67c8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A67C8u;
    SET_GPR_U32(ctx, 31, 0x1A67D0u);
    ctx->pc = 0x1A67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67C8u;
    // 0x1a67cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A67C8u, 0x1A67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67D0u;
label_1a67d0:
    // 0x1a67d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a67d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a67d4: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1a67d8:
    // 0x1a67d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a67dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a67e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a67e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a67e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a67e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a67ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a67f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a67f4: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a67f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a67f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A67F8u;
    {
        const bool branch_taken_0x1a67f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67F8u;
        // 0x1a67fc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67f8) {
            ctx->pc = 0x1A680Cu;
            goto label_1a680c;
        }
    }
    ctx->pc = 0x1A6800u;
    // 0x1a6800: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6800u;
    SET_GPR_U32(ctx, 31, 0x1A6808u);
    ctx->pc = 0x1A6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6800u;
    // 0x1a6804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6800u, 0x1A6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6808u;
label_1a6808:
    // 0x1a6808: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a680c:
    // 0x1a680c: 0x725010c8  pmaxw       $v0, $s2, $s0
    ctx->pc = 0x1a680cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 18), GPR_VEC(ctx, 16)));
    // 0x1a6810: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a6810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a6814: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x1a6814u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1a6818: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a681c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a681cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a6820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a682c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a682cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6830: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6834: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6834u;
        // 0x1a6838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A683Cu;
}
