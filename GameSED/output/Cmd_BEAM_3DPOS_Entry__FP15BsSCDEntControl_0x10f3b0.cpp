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

// Function: Cmd_BEAM_3DPOS_Entry__FP15BsSCDEntControl
// Address: 0x10f3b0 - 0x10f4d4
void Cmd_BEAM_3DPOS_Entry__FP15BsSCDEntControl_0x10f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BEAM_3DPOS_Entry__FP15BsSCDEntControl_0x10f3b0");
#endif

    switch (ctx->pc) {
        case 0x10f3e4u: goto label_10f3e4;
        case 0x10f400u: goto label_10f400;
        case 0x10f418u: goto label_10f418;
        case 0x10f420u: goto label_10f420;
        case 0x10f434u: goto label_10f434;
        case 0x10f460u: goto label_10f460;
        case 0x10f474u: goto label_10f474;
        case 0x10f47cu: goto label_10f47c;
        case 0x10f498u: goto label_10f498;
        case 0x10f4a8u: goto label_10f4a8;
        default: break;
    }

    ctx->pc = 0x10f3b0u;

    // 0x10f3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10f3b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10f3c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10f3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10f3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10f3cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10f3d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f3d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10f3dc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10F3DCu;
    SET_GPR_U32(ctx, 31, 0x10F3E4u);
    ctx->pc = 0x10F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3DCu;
    // 0x10f3e0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F3DCu, 0x10F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3E4u;
label_10f3e4:
    // 0x10f3e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10f3e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10f3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10f3f0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10F3F0u;
    {
        const bool branch_taken_0x10f3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f3f0) {
            ctx->pc = 0x10F440u;
            goto label_10f440;
        }
    }
    ctx->pc = 0x10F3F8u;
    // 0x10f3f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10F3F8u;
    SET_GPR_U32(ctx, 31, 0x10F400u);
    ctx->pc = 0x10F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3F8u;
    // 0x10f3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F3F8u, 0x10F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F400u;
label_10f400:
    // 0x10f400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f404: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10f404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f40c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f410: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10F410u;
    SET_GPR_U32(ctx, 31, 0x10F418u);
    ctx->pc = 0x10F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F410u;
    // 0x10f414: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10F410u, 0x10F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F418u;
label_10f418:
    // 0x10f418: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10F418u;
    SET_GPR_U32(ctx, 31, 0x10F420u);
    ctx->pc = 0x10F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F418u;
    // 0x10f41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10F418u, 0x10F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F420u;
label_10f420:
    // 0x10f420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f428: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10f428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f42c: 0xc064a4a  jal         func_192928
    ctx->pc = 0x10F42Cu;
    SET_GPR_U32(ctx, 31, 0x10F434u);
    ctx->pc = 0x10F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F42Cu;
    // 0x10f430: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192928u, 0x10F42Cu, 0x10F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F434u;
label_10f434:
    // 0x10f434: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10F434u;
    {
        const bool branch_taken_0x10f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F434u;
        // 0x10f438: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f434) {
            ctx->pc = 0x10F4BCu;
            goto label_10f4bc;
        }
    }
    ctx->pc = 0x10F43Cu;
    // 0x10f43c: 0x0  nop
    ctx->pc = 0x10f43cu;
    // NOP
label_10f440:
    // 0x10f440: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10f448: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10f44c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f450: 0x5082001a  beql        $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10F450u;
    {
        const bool branch_taken_0x10f450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10f450) {
            ctx->pc = 0x10F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F450u;
            // 0x10f454: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F4BCu;
            goto label_10f4bc;
        }
    }
    ctx->pc = 0x10F458u;
    // 0x10f458: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x10f458u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x10f45c: 0x0  nop
    ctx->pc = 0x10f45cu;
    // NOP
label_10f460:
    // 0x10f460: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f464: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f46c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10F46Cu;
    SET_GPR_U32(ctx, 31, 0x10F474u);
    ctx->pc = 0x10F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F46Cu;
    // 0x10f470: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10F46Cu, 0x10F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F474u;
label_10f474:
    // 0x10f474: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10F474u;
    SET_GPR_U32(ctx, 31, 0x10F47Cu);
    ctx->pc = 0x10F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F474u;
    // 0x10f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10F474u, 0x10F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F47Cu;
label_10f47c:
    // 0x10f47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f480: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10f480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10f484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f488: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F488u;
    {
        const bool branch_taken_0x10f488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F488u;
        // 0x10f48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f488) {
            ctx->pc = 0x10F4A0u;
            goto label_10f4a0;
        }
    }
    ctx->pc = 0x10F490u;
    // 0x10f490: 0xc064584  jal         func_191610
    ctx->pc = 0x10F490u;
    SET_GPR_U32(ctx, 31, 0x10F498u);
    ctx->pc = 0x191610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191610u, 0x10F490u, 0x10F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F498u;
label_10f498:
    // 0x10f498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F498u;
    {
        const bool branch_taken_0x10f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F498u;
        // 0x10f49c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f498) {
            ctx->pc = 0x10F4ACu;
            goto label_10f4ac;
        }
    }
    ctx->pc = 0x10F4A0u;
label_10f4a0:
    // 0x10f4a0: 0xc0645d8  jal         func_191760
    ctx->pc = 0x10F4A0u;
    SET_GPR_U32(ctx, 31, 0x10F4A8u);
    ctx->pc = 0x191760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191760u, 0x10F4A0u, 0x10F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4A8u;
label_10f4a8:
    // 0x10f4a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10f4ac:
    // 0x10f4ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f4b0: 0x1453ffeb  bne         $v0, $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10F4B0u;
    {
        const bool branch_taken_0x10f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x10F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4B0u;
        // 0x10f4b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f4b0) {
            ctx->pc = 0x10F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f460;
        }
    }
    ctx->pc = 0x10F4B8u;
    // 0x10f4b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10f4bc:
    // 0x10f4bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10f4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f4c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10f4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f4c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10f4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10f4c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4CCu;
        // 0x10f4d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4D4u;
}
