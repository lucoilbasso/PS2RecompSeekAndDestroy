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

// Function: ApEventStatDiagDrift__FP9IVector32bP9FVector32
// Address: 0x149170 - 0x1492c0
void ApEventStatDiagDrift__FP9IVector32bP9FVector32_0x149170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventStatDiagDrift__FP9IVector32bP9FVector32_0x149170");
#endif

    switch (ctx->pc) {
        case 0x149198u: goto label_149198;
        default: break;
    }

    ctx->pc = 0x149170u;

    // 0x149170: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x149170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x149174: 0x244743e0  addiu       $a3, $v0, 0x43E0
    ctx->pc = 0x149174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x149178: 0xf8c00000  sqc2        $vf0, 0x0($a2)
    ctx->pc = 0x149178u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14917c: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x14917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x149180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x149184: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x149184u;
    {
        const bool branch_taken_0x149184 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x149188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149184u;
        // 0x149188: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149184) {
            ctx->pc = 0x149290u;
            goto label_149290;
        }
    }
    ctx->pc = 0x14918Cu;
    // 0x14918c: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x14918cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149190: 0x34ab0004  ori         $t3, $a1, 0x4
    ctx->pc = 0x149190u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x149194: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x149194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_149198:
    // 0x149198: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x149198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14919c: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x14919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x1491a0: 0x54450037  bnel        $v0, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1491A0u;
    {
        const bool branch_taken_0x1491a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1491a0) {
            ctx->pc = 0x1491A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1491A0u;
            // 0x1491a4: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149280u;
            goto label_149280;
        }
    }
    ctx->pc = 0x1491A8u;
    // 0x1491a8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1491a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1491ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1491ACu;
    {
        const bool branch_taken_0x1491ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491ACu;
        // 0x1491b0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491ac) {
            ctx->pc = 0x149200u;
            goto label_149200;
        }
    }
    ctx->pc = 0x1491B4u;
    // 0x1491b4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1491b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1491b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1491bc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1491BCu;
    {
        const bool branch_taken_0x1491bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1491C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491BCu;
        // 0x1491c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491bc) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x1491C4u;
    // 0x1491c4: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1491c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1491c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1491cc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1491CCu;
    {
        const bool branch_taken_0x1491cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1491cc) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x1491D4u;
    // 0x1491d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1491d8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1491dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1491dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1491e0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1491E0u;
    {
        const bool branch_taken_0x1491e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1491e0) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x1491E8u;
    // 0x1491e8: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1491ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1491ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1491f0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1491F0u;
    {
        const bool branch_taken_0x1491f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491f0) {
            ctx->pc = 0x1491F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1491F0u;
            // 0x1491f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x1491F8u;
    // 0x1491f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1491F8u;
    {
        const bool branch_taken_0x1491f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491f8) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x149200u;
label_149200:
    // 0x149200: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x149200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x149204: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149208: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x149208u;
    {
        const bool branch_taken_0x149208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149208u;
        // 0x14920c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149208) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x149210u;
    // 0x149210: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x149214: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149218: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x149218u;
    {
        const bool branch_taken_0x149218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149218) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x149220u;
    // 0x149220: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x149224: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x149228: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14922c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14922Cu;
    {
        const bool branch_taken_0x14922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14922c) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x149234u;
    // 0x149234: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x149238: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14923c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14923Cu;
    {
        const bool branch_taken_0x14923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14923c) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x149244u;
    // 0x149244: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149248: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x149248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x14924c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149250: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149250u;
    {
        const bool branch_taken_0x149250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149250) {
            ctx->pc = 0x149264u;
            goto label_149264;
        }
    }
    ctx->pc = 0x149258u;
    // 0x149258: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x14925c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14925cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149260: 0x2c490001  sltiu       $t1, $v0, 0x1
    ctx->pc = 0x149260u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_149264:
    // 0x149264: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149264u;
    {
        const bool branch_taken_0x149264 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x149268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149264u;
        // 0x149268: 0x24e20030  addiu       $v0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149264) {
            ctx->pc = 0x14927Cu;
            goto label_14927c;
        }
    }
    ctx->pc = 0x14926Cu;
    // 0x14926c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x14926cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149270: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x149270u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149274: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x149274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149278: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x149278u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_14927c:
    // 0x14927c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_149280:
    // 0x149280: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x149284: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x149284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149288: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x149288u;
    {
        const bool branch_taken_0x149288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149288u;
        // 0x14928c: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149288) {
            ctx->pc = 0x149198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149198;
        }
    }
    ctx->pc = 0x149290u;
label_149290:
    // 0x149290: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x149290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149294: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x149294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149298: 0x4a0002ff  vnop
    ctx->pc = 0x149298u;
    // NOP operation, no action needed for VU0
    // 0x14929c: 0x4a0002ff  vnop
    ctx->pc = 0x14929cu;
    // NOP operation, no action needed for VU0
    // 0x1492a0: 0x4a0002ff  vnop
    ctx->pc = 0x1492a0u;
    // NOP operation, no action needed for VU0
    // 0x1492a4: 0x4a0002ff  vnop
    ctx->pc = 0x1492a4u;
    // NOP operation, no action needed for VU0
    // 0x1492a8: 0x4a0002ff  vnop
    ctx->pc = 0x1492a8u;
    // NOP operation, no action needed for VU0
    // 0x1492ac: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1492acu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1492b0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1492b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1492b4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1492b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1492b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1492B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1492BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492B8u;
        // 0x1492bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1492B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1492C0u;
}
