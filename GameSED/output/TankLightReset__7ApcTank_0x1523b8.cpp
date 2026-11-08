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

// Function: TankLightReset__7ApcTank
// Address: 0x1523b8 - 0x152584
void TankLightReset__7ApcTank_0x1523b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLightReset__7ApcTank_0x1523b8");
#endif

    switch (ctx->pc) {
        case 0x152410u: goto label_152410;
        case 0x1524a4u: goto label_1524a4;
        case 0x1524b8u: goto label_1524b8;
        default: break;
    }

    ctx->pc = 0x1523b8u;

    // 0x1523b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1523b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1523bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1523bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1523c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1523c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1523c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1523c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1523c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1523cc: 0x8ce50690  lw          $a1, 0x690($a3)
    ctx->pc = 0x1523ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1680)));
    // 0x1523d0: 0x8ce206a4  lw          $v0, 0x6A4($a3)
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1700)));
    // 0x1523d4: 0x8ce30170  lw          $v1, 0x170($a3)
    ctx->pc = 0x1523d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 368)));
    // 0x1523d8: 0xaca201a8  sw          $v0, 0x1A8($a1)
    ctx->pc = 0x1523d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 424), GPR_U32(ctx, 2));
    // 0x1523dc: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1523dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1523e0: 0x90e20577  lbu         $v0, 0x577($a3)
    ctx->pc = 0x1523e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1399)));
    // 0x1523e4: 0x8c8601bc  lw          $a2, 0x1BC($a0)
    ctx->pc = 0x1523e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x1523e8: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x1523e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1523ec: 0x8ce406a4  lw          $a0, 0x6A4($a3)
    ctx->pc = 0x1523ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1700)));
    // 0x1523f0: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1523f0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1523f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1523f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1523f8: 0xace2069c  sw          $v0, 0x69C($a3)
    ctx->pc = 0x1523f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1692), GPR_U32(ctx, 2));
    // 0x1523fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x152400: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x152400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x152404: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x152404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152408: 0x24430250  addiu       $v1, $v0, 0x250
    ctx->pc = 0x152408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x15240c: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x15240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_152410:
    // 0x152410: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x152410u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152414: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x152414u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152418: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15241c: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x15241cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x152420: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x152420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x152424: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x152424u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x152428: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x152428u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x15242c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x15242cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x152430: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x152434: 0x0  nop
    ctx->pc = 0x152434u;
    // NOP
    // 0x152438: 0x0  nop
    ctx->pc = 0x152438u;
    // NOP
    // 0x15243c: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15243Cu;
    {
        const bool branch_taken_0x15243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x152440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15243Cu;
        // 0x152440: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15243c) {
            ctx->pc = 0x152410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152410;
        }
    }
    ctx->pc = 0x152444u;
    // 0x152444: 0x8cf006a4  lw          $s0, 0x6A4($a3)
    ctx->pc = 0x152444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1700)));
    // 0x152448: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x152448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15244c: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x15244cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x152450: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x152454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152458: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x152458u;
    {
        const bool branch_taken_0x152458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152458) {
            ctx->pc = 0x15245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152458u;
            // 0x15245c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152574u;
            goto label_152574;
        }
    }
    ctx->pc = 0x152460u;
    // 0x152460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x152460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152468: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152468u;
    {
        const bool branch_taken_0x152468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152468) {
            ctx->pc = 0x15246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152468u;
            // 0x15246c: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1524C0u;
            goto label_1524c0;
        }
    }
    ctx->pc = 0x152470u;
    // 0x152470: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x152470u;
    {
        const bool branch_taken_0x152470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152470) {
            ctx->pc = 0x152474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152470u;
            // 0x152474: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152490u;
            goto label_152490;
        }
    }
    ctx->pc = 0x152478u;
    // 0x152478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x152478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15247c: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15247Cu;
    {
        const bool branch_taken_0x15247c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15247c) {
            ctx->pc = 0x152480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15247Cu;
            // 0x152480: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152520u;
            goto label_152520;
        }
    }
    ctx->pc = 0x152484u;
    // 0x152484: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x152484u;
    {
        const bool branch_taken_0x152484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152484u;
        // 0x152488: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152484) {
            ctx->pc = 0x152560u;
            goto label_152560;
        }
    }
    ctx->pc = 0x15248Cu;
    // 0x15248c: 0x0  nop
    ctx->pc = 0x15248cu;
    // NOP
label_152490:
    // 0x152490: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x152490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x152494: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x152494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x152498: 0x26070240  addiu       $a3, $s0, 0x240
    ctx->pc = 0x152498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x15249c: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x15249Cu;
    SET_GPR_U32(ctx, 31, 0x1524A4u);
    ctx->pc = 0x1524A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15249Cu;
    // 0x1524a0: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x15249Cu, 0x1524A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524A4u;
label_1524a4:
    // 0x1524a4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1524a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1524a8: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1524a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1524ac: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x1524acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1524b0: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x1524B0u;
    SET_GPR_U32(ctx, 31, 0x1524B8u);
    ctx->pc = 0x1524B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524B0u;
    // 0x1524b4: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x1524B0u, 0x1524B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524B8u;
label_1524b8:
    // 0x1524b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1524B8u;
    {
        const bool branch_taken_0x1524b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524B8u;
        // 0x1524bc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b8) {
            ctx->pc = 0x152560u;
            goto label_152560;
        }
    }
    ctx->pc = 0x1524C0u;
label_1524c0:
    // 0x1524c0: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x1524c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1524c4: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x1524c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1524c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1524c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1524cc: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1524ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1524d0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1524d0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1524d4: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1524d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1524d8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1524d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1524dc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1524dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1524e0: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1524e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1524e4: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1524e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1524e8: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1524ec: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1524ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1524f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1524f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1524f4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1524f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1524f8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1524f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1524fc: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1524fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152500: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x152500u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152504: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152504u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152508: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152508u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15250c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15250cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152510: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152510u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152514: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x152514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152518: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152518u;
    {
        const bool branch_taken_0x152518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152518u;
        // 0x15251c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152518) {
            ctx->pc = 0x152560u;
            goto label_152560;
        }
    }
    ctx->pc = 0x152520u;
label_152520:
    // 0x152520: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x152524: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x152524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x152528: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15252c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x15252cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152530: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x152530u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x152534: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x152534u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x152538: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x152538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15253c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x15253cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152540: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x152540u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x152544: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x152544u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x152548: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x152548u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x15254c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15254cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152550: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x152550u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152554: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152558: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x152558u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15255c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_152560:
    // 0x152560: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x152560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x152564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152568: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x152568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15256c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x15256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x152570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152574:
    // 0x152574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15257c: 0x3e00008  jr          $ra
    ctx->pc = 0x15257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15257Cu;
        // 0x152580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152584u;
}
