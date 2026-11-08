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

// Function: ApEventStatDiagDriftPower__FP9IVector32bP9FVector32T2
// Address: 0x14a3b8 - 0x14a550
void ApEventStatDiagDriftPower__FP9IVector32bP9FVector32T2_0x14a3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventStatDiagDriftPower__FP9IVector32bP9FVector32T2_0x14a3b8");
#endif

    switch (ctx->pc) {
        case 0x14a408u: goto label_14a408;
        case 0x14a4e8u: goto label_14a4e8;
        default: break;
    }

    ctx->pc = 0x14a3b8u;

    // 0x14a3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a3bc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14a3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a3c4: 0x245043e0  addiu       $s0, $v0, 0x43E0
    ctx->pc = 0x14a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x14a3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a3cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14a3d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14a3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14a3dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14a3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14a3e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x14a3e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14a3ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14a3f0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14a3f4: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x14a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14a3f8: 0x8e02fff0  lw          $v0, -0x10($s0)
    ctx->pc = 0x14a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x14a3fc: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x14A3FCu;
    {
        const bool branch_taken_0x14a3fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3FCu;
        // 0x14a400: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3fc) {
            ctx->pc = 0x14A4FCu;
            goto label_14a4fc;
        }
    }
    ctx->pc = 0x14A404u;
    // 0x14a404: 0x3c160020  lui         $s6, 0x20
    ctx->pc = 0x14a404u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32 << 16));
label_14a408:
    // 0x14a408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a40c: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x14a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x14a410: 0x14530036  bne         $v0, $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x14A410u;
    {
        const bool branch_taken_0x14a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x14A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A410u;
        // 0x14a414: 0x8ec243d0  lw          $v0, 0x43D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a410) {
            ctx->pc = 0x14A4ECu;
            goto label_14a4ec;
        }
    }
    ctx->pc = 0x14A418u;
    // 0x14a418: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14a41c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A41Cu;
    {
        const bool branch_taken_0x14a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A41Cu;
        // 0x14a420: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a41c) {
            ctx->pc = 0x14A470u;
            goto label_14a470;
        }
    }
    ctx->pc = 0x14A424u;
    // 0x14a424: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a428: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a42c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x14A42Cu;
    {
        const bool branch_taken_0x14a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A42Cu;
        // 0x14a430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a42c) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A434u;
    // 0x14a434: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14a438: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a43c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14A43Cu;
    {
        const bool branch_taken_0x14a43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a43c) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A444u;
    // 0x14a444: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14a448: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14a44c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a450: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A450u;
    {
        const bool branch_taken_0x14a450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a450) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A458u;
    // 0x14a458: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x14a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14a45c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a460: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x14A460u;
    {
        const bool branch_taken_0x14a460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a460) {
            ctx->pc = 0x14A464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A460u;
            // 0x14a464: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A468u;
    // 0x14a468: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14A468u;
    {
        const bool branch_taken_0x14a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a468) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A470u;
label_14a470:
    // 0x14a470: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a474: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a478: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14A478u;
    {
        const bool branch_taken_0x14a478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A478u;
        // 0x14a47c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a478) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A480u;
    // 0x14a480: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14a484: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a488: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A488u;
    {
        const bool branch_taken_0x14a488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a488) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A490u;
    // 0x14a490: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14a494: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x14a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a498: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a49c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A49Cu;
    {
        const bool branch_taken_0x14a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a49c) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A4A4u;
    // 0x14a4a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14a4a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a4ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A4ACu;
    {
        const bool branch_taken_0x14a4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4ac) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A4B4u;
    // 0x14a4b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14a4b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14a4bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a4c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A4C0u;
    {
        const bool branch_taken_0x14a4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4c0) {
            ctx->pc = 0x14A4D4u;
            goto label_14a4d4;
        }
    }
    ctx->pc = 0x14A4C8u;
    // 0x14a4c8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x14a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14a4cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a4d0: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x14a4d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14a4d4:
    // 0x14a4d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A4D4u;
    {
        const bool branch_taken_0x14a4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4D4u;
        // 0x14a4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4d4) {
            ctx->pc = 0x14A4E8u;
            goto label_14a4e8;
        }
    }
    ctx->pc = 0x14A4DCu;
    // 0x14a4dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4e0: 0xc05243a  jal         func_1490E8
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4E0u;
    // 0x14a4e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x14A4E0u, 0x14A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4E8u;
label_14a4e8:
    // 0x14a4e8: 0x8ec243d0  lw          $v0, 0x43D0($s6)
    ctx->pc = 0x14a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17360)));
label_14a4ec:
    // 0x14a4ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14a4f0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14a4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a4f4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x14A4F4u;
    {
        const bool branch_taken_0x14a4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F4u;
        // 0x14a4f8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f4) {
            ctx->pc = 0x14A408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a408;
        }
    }
    ctx->pc = 0x14A4FCu;
label_14a4fc:
    // 0x14a4fc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x14a4fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a500: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x14a500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14a504: 0x4a0002ff  vnop
    ctx->pc = 0x14a504u;
    // NOP operation, no action needed for VU0
    // 0x14a508: 0x4a0002ff  vnop
    ctx->pc = 0x14a508u;
    // NOP operation, no action needed for VU0
    // 0x14a50c: 0x4a0002ff  vnop
    ctx->pc = 0x14a50cu;
    // NOP operation, no action needed for VU0
    // 0x14a510: 0x4a0002ff  vnop
    ctx->pc = 0x14a510u;
    // NOP operation, no action needed for VU0
    // 0x14a514: 0x4a0002ff  vnop
    ctx->pc = 0x14a514u;
    // NOP operation, no action needed for VU0
    // 0x14a518: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x14a518u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x14a51c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x14a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x14a520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a524: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x14a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x14a528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a52c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14a52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a530: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14a530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14a534: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14a534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14a538: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14a538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a53c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14a53cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a540: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14a540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a544: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14a548: 0x3e00008  jr          $ra
    ctx->pc = 0x14A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A548u;
        // 0x14a54c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A550u;
}
