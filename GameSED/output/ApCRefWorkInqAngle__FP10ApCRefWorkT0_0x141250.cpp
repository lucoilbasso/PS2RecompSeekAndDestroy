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

// Function: ApCRefWorkInqAngle__FP10ApCRefWorkT0
// Address: 0x141250 - 0x1414f0
void ApCRefWorkInqAngle__FP10ApCRefWorkT0_0x141250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefWorkInqAngle__FP10ApCRefWorkT0_0x141250");
#endif

    switch (ctx->pc) {
        case 0x141318u: goto label_141318;
        case 0x141320u: goto label_141320;
        case 0x141340u: goto label_141340;
        case 0x141390u: goto label_141390;
        case 0x1413a4u: goto label_1413a4;
        case 0x141418u: goto label_141418;
        case 0x141424u: goto label_141424;
        case 0x14144cu: goto label_14144c;
        case 0x141468u: goto label_141468;
        default: break;
    }

    ctx->pc = 0x141250u;

    // 0x141250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141254: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x141254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x141258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14125c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x14125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x141260: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x141260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x141264: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x141264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x141268: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x141268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14126c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x14126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x141270: 0x26740030  addiu       $s4, $s3, 0x30
    ctx->pc = 0x141270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x141274: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x141274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x141278: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14127c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x14127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x141280: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x141280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x141284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x141284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x141288: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x141288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14128c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x14128cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141290: 0x21b43  sra         $v1, $v0, 13
    ctx->pc = 0x141290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 13));
    // 0x141294: 0x3047000f  andi        $a3, $v0, 0xF
    ctx->pc = 0x141294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x141298: 0x30750001  andi        $s5, $v1, 0x1
    ctx->pc = 0x141298u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14129c: 0x10e50074  beq         $a3, $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x14129Cu;
    {
        const bool branch_taken_0x14129c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1412A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14129Cu;
        // 0x1412a0: 0x3103000f  andi        $v1, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14129c) {
            ctx->pc = 0x141470u;
            goto label_141470;
        }
    }
    ctx->pc = 0x1412A4u;
    // 0x1412a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1412a8: 0x14e20009  bne         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1412A8u;
    {
        const bool branch_taken_0x1412a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1412ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412A8u;
        // 0x1412ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412a8) {
            ctx->pc = 0x1412D0u;
            goto label_1412d0;
        }
    }
    ctx->pc = 0x1412B0u;
    // 0x1412b0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1412b4: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1412b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1412b8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1412b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1412bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1412bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1412c0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1412c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1412c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1412C4u;
    {
        const bool branch_taken_0x1412c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412C4u;
        // 0x1412c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412c4) {
            ctx->pc = 0x141334u;
            goto label_141334;
        }
    }
    ctx->pc = 0x1412CCu;
    // 0x1412cc: 0x0  nop
    ctx->pc = 0x1412ccu;
    // NOP
label_1412d0:
    // 0x1412d0: 0x14e2001d  bne         $a3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1412D0u;
    {
        const bool branch_taken_0x1412d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1412D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412D0u;
        // 0x1412d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412d0) {
            ctx->pc = 0x141348u;
            goto label_141348;
        }
    }
    ctx->pc = 0x1412D8u;
    // 0x1412d8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1412dc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1412e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1412e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1412e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1412E4u;
    {
        const bool branch_taken_0x1412e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1412E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412E4u;
        // 0x1412e8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412e4) {
            ctx->pc = 0x1412F8u;
            goto label_1412f8;
        }
    }
    ctx->pc = 0x1412ECu;
    // 0x1412ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1412ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1412f0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1412F0u;
    {
        const bool branch_taken_0x1412f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412F0u;
        // 0x1412f4: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412f0) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x1412F8u;
label_1412f8:
    // 0x1412f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1412f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1412fc: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x141300: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x141300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x141304: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x141304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x141308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141308u;
    {
        const bool branch_taken_0x141308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141308) {
            ctx->pc = 0x141318u;
            goto label_141318;
        }
    }
    ctx->pc = 0x141310u;
    // 0x141310: 0xc061920  jal         func_186480
    ctx->pc = 0x141310u;
    SET_GPR_U32(ctx, 31, 0x141318u);
    ctx->pc = 0x141314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141310u;
    // 0x141314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x141310u, 0x141318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141318u;
label_141318:
    // 0x141318: 0xc061422  jal         func_185088
    ctx->pc = 0x141318u;
    SET_GPR_U32(ctx, 31, 0x141320u);
    ctx->pc = 0x14131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141318u;
    // 0x14131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x141318u, 0x141320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141320u;
label_141320:
    // 0x141320: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x141320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x141324: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141328: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x141328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14132c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14132cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x141330: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x141330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_141334:
    // 0x141334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141338: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x141338u;
    SET_GPR_U32(ctx, 31, 0x141340u);
    ctx->pc = 0x14133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141338u;
    // 0x14133c: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x141338u, 0x141340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141340u;
label_141340:
    // 0x141340: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x141340u;
    {
        const bool branch_taken_0x141340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141340u;
        // 0x141344: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141340) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x141348u;
label_141348:
    // 0x141348: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x141348u;
    {
        const bool branch_taken_0x141348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141348u;
        // 0x14134c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141348) {
            ctx->pc = 0x141410u;
            goto label_141410;
        }
    }
    ctx->pc = 0x141350u;
    // 0x141350: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x141350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x141354: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x141354u;
    {
        const bool branch_taken_0x141354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141354u;
        // 0x141358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141354) {
            ctx->pc = 0x1413B4u;
            goto label_1413b4;
        }
    }
    ctx->pc = 0x14135Cu;
    // 0x14135c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141360: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x141364: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x141368: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x141368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14136c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x14136cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141370: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x141370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x141374: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x141374u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x141378: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x141378u;
    {
        const bool branch_taken_0x141378 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x141378) {
            ctx->pc = 0x14137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141378u;
            // 0x14137c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141398u;
            goto label_141398;
        }
    }
    ctx->pc = 0x141380u;
    // 0x141380: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x141380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x141384: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x141384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141388: 0xc05045e  jal         func_141178
    ctx->pc = 0x141388u;
    SET_GPR_U32(ctx, 31, 0x141390u);
    ctx->pc = 0x14138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141388u;
    // 0x14138c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x141388u, 0x141390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141390u;
label_141390:
    // 0x141390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x141390u;
    {
        const bool branch_taken_0x141390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141390u;
        // 0x141394: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141390) {
            ctx->pc = 0x1413A8u;
            goto label_1413a8;
        }
    }
    ctx->pc = 0x141398u;
label_141398:
    // 0x141398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14139c: 0xc05045e  jal         func_141178
    ctx->pc = 0x14139Cu;
    SET_GPR_U32(ctx, 31, 0x1413A4u);
    ctx->pc = 0x1413A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14139Cu;
    // 0x1413a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x14139Cu, 0x1413A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413A4u;
label_1413a4:
    // 0x1413a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1413a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1413a8:
    // 0x1413a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1413ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1413acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1413b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1413b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1413b4:
    // 0x1413b4: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x1413b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x1413b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1413B8u;
    {
        const bool branch_taken_0x1413b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413B8u;
        // 0x1413bc: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413b8) {
            ctx->pc = 0x1413E0u;
            goto label_1413e0;
        }
    }
    ctx->pc = 0x1413C0u;
    // 0x1413c0: 0x24632600  addiu       $v1, $v1, 0x2600
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
    // 0x1413c4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1413c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1413c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1413c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1413cc: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1413d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1413d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413d4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1413D4u;
    {
        const bool branch_taken_0x1413d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413D4u;
        // 0x1413d8: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413d4) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x1413DCu;
    // 0x1413dc: 0x0  nop
    ctx->pc = 0x1413dcu;
    // NOP
label_1413e0:
    // 0x1413e0: 0x32420400  andi        $v0, $s2, 0x400
    ctx->pc = 0x1413e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
    // 0x1413e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1413E4u;
    {
        const bool branch_taken_0x1413e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413E4u;
        // 0x1413e8: 0x24632600  addiu       $v1, $v1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413e4) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x1413ECu;
    // 0x1413ec: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1413ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1413f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1413f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1413f4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1413f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1413f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141404: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x141404u;
    {
        const bool branch_taken_0x141404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141404u;
        // 0x141408: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141404) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x14140Cu;
    // 0x14140c: 0x0  nop
    ctx->pc = 0x14140cu;
    // NOP
label_141410:
    // 0x141410: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x141410u;
    SET_GPR_U32(ctx, 31, 0x141418u);
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x141410u, 0x141418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141418u;
label_141418:
    // 0x141418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14141c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x14141Cu;
    SET_GPR_U32(ctx, 31, 0x141424u);
    ctx->pc = 0x141420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14141Cu;
    // 0x141420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x14141Cu, 0x141424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141424u;
label_141424:
    // 0x141424: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x141424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141428: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x141428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14142c: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x14142cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141430: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x141430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x141434: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x141434u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x141438: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x141438u;
    {
        const bool branch_taken_0x141438 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x14143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141438u;
        // 0x14143c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141438) {
            ctx->pc = 0x141458u;
            goto label_141458;
        }
    }
    ctx->pc = 0x141440u;
    // 0x141440: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x141444: 0xc05045e  jal         func_141178
    ctx->pc = 0x141444u;
    SET_GPR_U32(ctx, 31, 0x14144Cu);
    ctx->pc = 0x141448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141444u;
    // 0x141448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x141444u, 0x14144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14144Cu;
label_14144c:
    // 0x14144c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14144Cu;
    {
        const bool branch_taken_0x14144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14144Cu;
        // 0x141450: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14144c) {
            ctx->pc = 0x14146Cu;
            goto label_14146c;
        }
    }
    ctx->pc = 0x141454u;
    // 0x141454: 0x0  nop
    ctx->pc = 0x141454u;
    // NOP
label_141458:
    // 0x141458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14145c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14145cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141460: 0xc05045e  jal         func_141178
    ctx->pc = 0x141460u;
    SET_GPR_U32(ctx, 31, 0x141468u);
    ctx->pc = 0x141464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141460u;
    // 0x141464: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x141460u, 0x141468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141468u;
label_141468:
    // 0x141468: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x141468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14146c:
    // 0x14146c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_141470:
    // 0x141470: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x141470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x141474: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x141474u;
    {
        const bool branch_taken_0x141474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141474u;
        // 0x141478: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141474) {
            ctx->pc = 0x1414C8u;
            goto label_1414c8;
        }
    }
    ctx->pc = 0x14147Cu;
    // 0x14147c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x14147cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x141480: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x141480u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x141484: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x141484) {
            ctx->pc = 0x1414B0u;
            goto label_1414b0;
        }
    }
    ctx->pc = 0x14148Cu;
    // 0x14148c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x141490: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x141494: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x141498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14149c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x14149cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1414a0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1414a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1414a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1414a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1414A8u;
    {
        const bool branch_taken_0x1414a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414A8u;
        // 0x1414ac: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414a8) {
            ctx->pc = 0x1414C0u;
            goto label_1414c0;
        }
    }
    ctx->pc = 0x1414B0u;
label_1414b0:
    // 0x1414b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1414b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1414b4: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x1414b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1414b8: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x1414b8u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1414bc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1414bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_1414c0:
    // 0x1414c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1414C0u;
    {
        const bool branch_taken_0x1414c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414C0u;
        // 0x1414c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414c0) {
            ctx->pc = 0x1414CCu;
            goto label_1414cc;
        }
    }
    ctx->pc = 0x1414C8u;
label_1414c8:
    // 0x1414c8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1414c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1414cc:
    // 0x1414cc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1414ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1414d0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1414d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1414d4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1414d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1414d8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1414d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1414dc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1414dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1414e0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1414e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1414e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1414e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1414e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1414E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1414ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414E8u;
        // 0x1414ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1414E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1414F0u;
}
