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

// Function: HetomovDirMotion__10ApcHetomov
// Address: 0x16e5e0 - 0x16ea2c
void HetomovDirMotion__10ApcHetomov_0x16e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HetomovDirMotion__10ApcHetomov_0x16e5e0");
#endif

    switch (ctx->pc) {
        case 0x16e680u: goto label_16e680;
        case 0x16e688u: goto label_16e688;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e728u: goto label_16e728;
        case 0x16e758u: goto label_16e758;
        case 0x16e768u: goto label_16e768;
        case 0x16e784u: goto label_16e784;
        case 0x16e790u: goto label_16e790;
        case 0x16ea00u: goto label_16ea00;
        default: break;
    }

    ctx->pc = 0x16e5e0u;

    // 0x16e5e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16e5e4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x16e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x16e5e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5ec: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x16e5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x16e5f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16e5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5f4: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x16e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x16e5f8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x16e5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x16e5fc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x16e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x16e600: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x16e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x16e604: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x16e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16e608: 0xe7b500b0  swc1        $f21, 0xB0($sp)
    ctx->pc = 0x16e608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16e60c: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x16e60cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16e610: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x16e614: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x16e614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16e618: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x16E618u;
    {
        const bool branch_taken_0x16e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E618u;
        // 0x16e61c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e618) {
            ctx->pc = 0x16E6FCu;
            goto label_16e6fc;
        }
    }
    ctx->pc = 0x16E620u;
    // 0x16e620: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e624: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x16e628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e62c: 0x8c6374f0  lw          $v1, 0x74F0($v1)
    ctx->pc = 0x16e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29936)));
    // 0x16e630: 0x600008  jr          $v1
    ctx->pc = 0x16E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E638u: goto label_16e638;
            case 0x16E640u: goto label_16e640;
            case 0x16E648u: goto label_16e648;
            case 0x16E698u: goto label_16e698;
            case 0x16E6FCu: goto label_16e6fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16E638u;
label_16e638:
    // 0x16e638: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16E638u;
    {
        const bool branch_taken_0x16e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E638u;
        // 0x16e63c: 0x263501f0  addiu       $s5, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e638) {
            ctx->pc = 0x16E6FCu;
            goto label_16e6fc;
        }
    }
    ctx->pc = 0x16E640u;
label_16e640:
    // 0x16e640: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16E640u;
    {
        const bool branch_taken_0x16e640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E640u;
        // 0x16e644: 0x263301f0  addiu       $s3, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e640) {
            ctx->pc = 0x16E6FCu;
            goto label_16e6fc;
        }
    }
    ctx->pc = 0x16E648u;
label_16e648:
    // 0x16e648: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x16e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16e64c: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16e650: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x16E650u;
    {
        const bool branch_taken_0x16e650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e650) {
            ctx->pc = 0x16E654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E650u;
            // 0x16e654: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E6FCu;
            goto label_16e6fc;
        }
    }
    ctx->pc = 0x16E658u;
    // 0x16e658: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e65c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16e65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e664: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16e664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16e668: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16e668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16e66c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E670u;
    {
        const bool branch_taken_0x16e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E670u;
        // 0x16e674: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e670) {
            ctx->pc = 0x16E680u;
            goto label_16e680;
        }
    }
    ctx->pc = 0x16E678u;
    // 0x16e678: 0xc061920  jal         func_186480
    ctx->pc = 0x16E678u;
    SET_GPR_U32(ctx, 31, 0x16E680u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E678u, 0x16E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E680u;
label_16e680:
    // 0x16e680: 0xc061422  jal         func_185088
    ctx->pc = 0x16E680u;
    SET_GPR_U32(ctx, 31, 0x16E688u);
    ctx->pc = 0x16E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E680u;
    // 0x16e684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E680u, 0x16E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E688u;
label_16e688:
    // 0x16e688: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x16e68c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16E68Cu;
    {
        const bool branch_taken_0x16e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E68Cu;
        // 0x16e690: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e68c) {
            ctx->pc = 0x16E6D4u;
            goto label_16e6d4;
        }
    }
    ctx->pc = 0x16E694u;
    // 0x16e694: 0x0  nop
    ctx->pc = 0x16e694u;
    // NOP
label_16e698:
    // 0x16e698: 0x8e3401e4  lw          $s4, 0x1E4($s1)
    ctx->pc = 0x16e698u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16e69c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e6a0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16e6a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e6a8: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16e6ac: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16e6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16e6b0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e6b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E6B4u;
    {
        const bool branch_taken_0x16e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6B4u;
        // 0x16e6b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6b4) {
            ctx->pc = 0x16E6C4u;
            goto label_16e6c4;
        }
    }
    ctx->pc = 0x16E6BCu;
    // 0x16e6bc: 0xc061920  jal         func_186480
    ctx->pc = 0x16E6BCu;
    SET_GPR_U32(ctx, 31, 0x16E6C4u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E6BCu, 0x16E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6C4u;
label_16e6c4:
    // 0x16e6c4: 0xc061422  jal         func_185088
    ctx->pc = 0x16E6C4u;
    SET_GPR_U32(ctx, 31, 0x16E6CCu);
    ctx->pc = 0x16E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6C4u;
    // 0x16e6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E6C4u, 0x16E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6CCu;
label_16e6cc:
    // 0x16e6cc: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x16e6d0: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x16e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_16e6d4:
    // 0x16e6d4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x16e6d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e6d8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16e6d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e6dc: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x16e6dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16e6e0: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x16e6e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16e6e4: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x16e6e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16e6e8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16e6e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e6ec: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16e6ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e6f0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16e6f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e6f4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16e6f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16e6f8: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x16e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_16e6fc:
    // 0x16e6fc: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x16E6FCu;
    {
        const bool branch_taken_0x16e6fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e6fc) {
            ctx->pc = 0x16E790u;
            goto label_16e790;
        }
    }
    ctx->pc = 0x16E704u;
    // 0x16e704: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x16e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16e708: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x16e708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e70c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16e710: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16e710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e714: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16e714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16e718: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16e71c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16e71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e720: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x16E720u;
    SET_GPR_U32(ctx, 31, 0x16E728u);
    ctx->pc = 0x16E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E720u;
    // 0x16e724: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x16E720u, 0x16E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E728u;
label_16e728:
    // 0x16e728: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x16e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e72c: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x16e72cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x16e730: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x16e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16e734: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x16e734u;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x16e738: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x16e738u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e73c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e740: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16e740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16e744: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16e744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e748: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E748u;
    {
        const bool branch_taken_0x16e748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e748) {
            ctx->pc = 0x16E74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E748u;
            // 0x16e74c: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E768u;
            goto label_16e768;
        }
    }
    ctx->pc = 0x16E750u;
    // 0x16e750: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16E750u;
    SET_GPR_U32(ctx, 31, 0x16E758u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16E750u, 0x16E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E758u;
label_16e758:
    // 0x16e758: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x16e758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16e75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e760: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x16e760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x16e764: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x16e764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16e768:
    // 0x16e768: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x16e768u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x16e76c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x16e76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x16e770: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16e770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e774: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16E774u;
    {
        const bool branch_taken_0x16e774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e774) {
            ctx->pc = 0x16E790u;
            goto label_16e790;
        }
    }
    ctx->pc = 0x16E77Cu;
    // 0x16e77c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16E77Cu;
    SET_GPR_U32(ctx, 31, 0x16E784u);
    ctx->pc = 0x16E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E77Cu;
    // 0x16e780: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16E77Cu, 0x16E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E784u;
label_16e784:
    // 0x16e784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e788: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16e788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e78c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_16e790:
    // 0x16e790: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x16E790u;
    {
        const bool branch_taken_0x16e790 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E790u;
        // 0x16e794: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e790) {
            ctx->pc = 0x16E854u;
            goto label_16e854;
        }
    }
    ctx->pc = 0x16E798u;
    // 0x16e798: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x16e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16e79c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x16e7a0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x16e7a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x16e7a4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x16e7a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16e7a8: 0x70431048  psubw       $v0, $v0, $v1
    ctx->pc = 0x16e7a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16e7ac: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x16e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x16e7b0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16e7b4: 0x8e260210  lw          $a2, 0x210($s1)
    ctx->pc = 0x16e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x16e7b8: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x16e7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x16e7bc: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x16e7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16e7c0: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x16e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x16e7c4: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x16e7c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x16e7c8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16e7cc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x16e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x16e7d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16e7d4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x16e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x16e7d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e7dc: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x16e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x16e7e0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16e7e4: 0x28694000  slti        $t1, $v1, 0x4000
    ctx->pc = 0x16e7e4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16e7e8: 0x24668000  addiu       $a2, $v1, -0x8000
    ctx->pc = 0x16e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x16e7ec: 0x28474000  slti        $a3, $v0, 0x4000
    ctx->pc = 0x16e7ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x16e7f0: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x16e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x16e7f4: 0xc9180a  movz        $v1, $a2, $t1
    ctx->pc = 0x16e7f4u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x16e7f8: 0x87100a  movz        $v0, $a0, $a3
    ctx->pc = 0x16e7f8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x16e7fc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x16e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x16e800: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x16e800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x16e804: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x16e804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16e808: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x16e808u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x16e80c: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x16e80cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x16e810: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x16e810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x16e814: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x16e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16e818: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x16e818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x16e81c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x16e81cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16e820: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16e820u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e824: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16e824u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16e828: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16e828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16e82c: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x16e830: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16e830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e834: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16e834u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e838: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16e838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16e83c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16e840: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16e844: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e848: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x16e848u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e84c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16e84cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e850: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e850u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16e854:
    // 0x16e854: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x16e854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16e858: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e85c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x16e85cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e860: 0x4a0002ff  vnop
    ctx->pc = 0x16e860u;
    // NOP operation, no action needed for VU0
    // 0x16e864: 0x4a0002ff  vnop
    ctx->pc = 0x16e864u;
    // NOP operation, no action needed for VU0
    // 0x16e868: 0x4a0002ff  vnop
    ctx->pc = 0x16e868u;
    // NOP operation, no action needed for VU0
    // 0x16e86c: 0x4a0002ff  vnop
    ctx->pc = 0x16e86cu;
    // NOP operation, no action needed for VU0
    // 0x16e870: 0x4a0002ff  vnop
    ctx->pc = 0x16e870u;
    // NOP operation, no action needed for VU0
    // 0x16e874: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16e874u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16e878: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16e87c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16e87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16e880: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x16E880u;
    {
        const bool branch_taken_0x16e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e880) {
            ctx->pc = 0x16E884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E880u;
            // 0x16e884: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EA04u;
            goto label_16ea04;
        }
    }
    ctx->pc = 0x16E888u;
    // 0x16e888: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x16e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e88c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x16e88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x16e890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16e890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16e894: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x16e894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16e898: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16e898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16e89c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16e89cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e8a0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E8A0u;
    {
        const bool branch_taken_0x16e8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e8a0) {
            ctx->pc = 0x16E8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E8A0u;
            // 0x16e8a4: 0xc620020c  lwc1        $f0, 0x20C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E8C0u;
            goto label_16e8c0;
        }
    }
    ctx->pc = 0x16E8A8u;
    // 0x16e8a8: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x16e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8ac: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x16e8acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x16e8b0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x16e8b0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x16e8b4: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16e8b4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16e8b8: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16e8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x16e8bc: 0xc620020c  lwc1        $f0, 0x20C($s1)
    ctx->pc = 0x16e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e8c0:
    // 0x16e8c0: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x16e8c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16e8c4: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x16e8c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e8c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x16E8C8u;
    {
        const bool branch_taken_0x16e8c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E8C8u;
        // 0x16e8cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e8c8) {
            ctx->pc = 0x16E8F8u;
            goto label_16e8f8;
        }
    }
    ctx->pc = 0x16E8D0u;
    // 0x16e8d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8d4: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x16e8d4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x16e8d8: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x16e8d8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x16e8dc: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16e8dcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16e8e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16e8e4: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e8e8: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x16e8e8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x16e8ec: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x16e8ecu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x16e8f0: 0xe6210228  swc1        $f1, 0x228($s1)
    ctx->pc = 0x16e8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x16e8f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16e8f8:
    // 0x16e8f8: 0xc78084f8  lwc1        $f0, -0x7B08($gp)
    ctx->pc = 0x16e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e8fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e900: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16e900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16e904: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16e904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16e908: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16e908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e90c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e910: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e914: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16e914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e918: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16E918u;
    {
        const bool branch_taken_0x16e918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e918) {
            ctx->pc = 0x16E934u;
            goto label_16e934;
        }
    }
    ctx->pc = 0x16E920u;
    // 0x16e920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e928: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16e928u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16e92c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16e92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16e930: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e934:
    // 0x16e934: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16e934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e938: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E938u;
    {
        const bool branch_taken_0x16e938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e938) {
            ctx->pc = 0x16E93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E938u;
            // 0x16e93c: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E954u;
            goto label_16e954;
        }
    }
    ctx->pc = 0x16E940u;
    // 0x16e940: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16e944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e948: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16e948u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16e94c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16e950: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e954:
    // 0x16e954: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16e954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e958: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E958u;
    {
        const bool branch_taken_0x16e958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e958) {
            ctx->pc = 0x16E95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E958u;
            // 0x16e95c: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E974u;
            goto label_16e974;
        }
    }
    ctx->pc = 0x16E960u;
    // 0x16e960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e968: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16e968u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16e96c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16e96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16e970: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x16e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e974:
    // 0x16e974: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16e974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e978: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E978u;
    {
        const bool branch_taken_0x16e978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e978) {
            ctx->pc = 0x16E97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E978u;
            // 0x16e97c: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E994u;
            goto label_16e994;
        }
    }
    ctx->pc = 0x16E980u;
    // 0x16e980: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16e980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16e984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e988: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16e988u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16e98c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x16e98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16e990: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e994:
    // 0x16e994: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16e994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e998: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x16E998u;
    {
        const bool branch_taken_0x16e998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e998) {
            ctx->pc = 0x16E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E998u;
            // 0x16e99c: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E9B4u;
            goto label_16e9b4;
        }
    }
    ctx->pc = 0x16E9A0u;
    // 0x16e9a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e9a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e9a8: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16e9a8u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16e9ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16e9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16e9b0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x16e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e9b4:
    // 0x16e9b4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16e9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e9b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16E9B8u;
    {
        const bool branch_taken_0x16e9b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9B8u;
        // 0x16e9bc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9b8) {
            ctx->pc = 0x16E9D4u;
            goto label_16e9d4;
        }
    }
    ctx->pc = 0x16E9C0u;
    // 0x16e9c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16e9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e9c8: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16e9c8u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16e9cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16e9d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16e9d4:
    // 0x16e9d4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16e9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e9d8: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x16e9d8u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e9dc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x16e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16e9e0: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x16e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x16e9e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16e9e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E9E8u;
    {
        const bool branch_taken_0x16e9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9E8u;
        // 0x16e9ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9e8) {
            ctx->pc = 0x16EA00u;
            goto label_16ea00;
        }
    }
    ctx->pc = 0x16E9F0u;
    // 0x16e9f0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x16e9f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16e9f8: 0xc0618da  jal         func_186368
    ctx->pc = 0x16E9F8u;
    SET_GPR_U32(ctx, 31, 0x16EA00u);
    ctx->pc = 0x16E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9F8u;
    // 0x16e9fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16E9F8u, 0x16EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA00u;
label_16ea00:
    // 0x16ea00: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16ea00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16ea04:
    // 0x16ea04: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16ea04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16ea08: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ea0c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16ea0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ea10: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16ea10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ea14: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x16ea14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ea18: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x16ea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16ea1c: 0xc7b500b0  lwc1        $f21, 0xB0($sp)
    ctx->pc = 0x16ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16ea20: 0xc7b400a8  lwc1        $f20, 0xA8($sp)
    ctx->pc = 0x16ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA24u;
        // 0x16ea28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EA2Cu;
}
