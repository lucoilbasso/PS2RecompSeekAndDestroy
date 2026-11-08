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

// Function: ApDaemonScanAroundWeapon__FP7WcActorP9FVector32
// Address: 0x137888 - 0x137a94
void ApDaemonScanAroundWeapon__FP7WcActorP9FVector32_0x137888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanAroundWeapon__FP7WcActorP9FVector32_0x137888");
#endif

    switch (ctx->pc) {
        case 0x1378e0u: goto label_1378e0;
        case 0x137984u: goto label_137984;
        case 0x13798cu: goto label_13798c;
        case 0x1379e0u: goto label_1379e0;
        case 0x1379e8u: goto label_1379e8;
        default: break;
    }

    ctx->pc = 0x137888u;

    // 0x137888: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x137888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13788c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137890: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x137890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x137894: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x137894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137898: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x137898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x13789c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x13789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1378a0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1378a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378a4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1378a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1378a8: 0x245ebc50  addiu       $fp, $v0, -0x43B0
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x1378ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1378acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1378b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1378b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1378b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1378b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1378b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1378b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1378bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1378bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1378c0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1378c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1378c4: 0x8ee30170  lw          $v1, 0x170($s7)
    ctx->pc = 0x1378c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 368)));
    // 0x1378c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1378cc: 0x8c530200  lw          $s3, 0x200($v0)
    ctx->pc = 0x1378ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x1378d0: 0x12600062  beqz        $s3, . + 4 + (0x62 << 2)
    ctx->pc = 0x1378D0u;
    {
        const bool branch_taken_0x1378d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378D0u;
        // 0x1378d4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378d0) {
            ctx->pc = 0x137A5Cu;
            goto label_137a5c;
        }
    }
    ctx->pc = 0x1378D8u;
    // 0x1378d8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1378dc: 0x0  nop
    ctx->pc = 0x1378dcu;
    // NOP
label_1378e0:
    // 0x1378e0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1378e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1378e4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x1378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1378e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1378e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1378ec: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1378ECu;
    {
        const bool branch_taken_0x1378ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378ECu;
        // 0x1378f0: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378ec) {
            ctx->pc = 0x137A54u;
            goto label_137a54;
        }
    }
    ctx->pc = 0x1378F4u;
    // 0x1378f4: 0x12570057  beq         $s2, $s7, . + 4 + (0x57 << 2)
    ctx->pc = 0x1378F4u;
    {
        const bool branch_taken_0x1378f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x1378F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378F4u;
        // 0x1378f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378f4) {
            ctx->pc = 0x137A54u;
            goto label_137a54;
        }
    }
    ctx->pc = 0x1378FCu;
    // 0x1378fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1378fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x137900: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x137900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x137904: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x137904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x137908: 0x242180a  movz        $v1, $s2, $v0
    ctx->pc = 0x137908u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x13790c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13790Cu;
    {
        const bool branch_taken_0x13790c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13790c) {
            ctx->pc = 0x137910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13790Cu;
            // 0x137910: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137944u;
            goto label_137944;
        }
    }
    ctx->pc = 0x137914u;
    // 0x137914: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x137918: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x137918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x13791c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13791Cu;
    {
        const bool branch_taken_0x13791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13791Cu;
        // 0x137920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13791c) {
            ctx->pc = 0x137934u;
            goto label_137934;
        }
    }
    ctx->pc = 0x137924u;
    // 0x137924: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x137924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x137928: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x137928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13792c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13792Cu;
    {
        const bool branch_taken_0x13792c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13792c) {
            ctx->pc = 0x137938u;
            goto label_137938;
        }
    }
    ctx->pc = 0x137934u;
label_137934:
    // 0x137934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137938:
    // 0x137938: 0x14800046  bnez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x137938u;
    {
        const bool branch_taken_0x137938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x137938) {
            ctx->pc = 0x137A54u;
            goto label_137a54;
        }
    }
    ctx->pc = 0x137940u;
    // 0x137940: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x137940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_137944:
    // 0x137944: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x137944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x137948: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x137948u;
    {
        const bool branch_taken_0x137948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137948) {
            ctx->pc = 0x137A54u;
            goto label_137a54;
        }
    }
    ctx->pc = 0x137950u;
    // 0x137950: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x137954: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x137954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x137958: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x137958u;
    {
        const bool branch_taken_0x137958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137958u;
        // 0x13795c: 0x3414e000  ori         $s4, $zero, 0xE000 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137958) {
            ctx->pc = 0x137A54u;
            goto label_137a54;
        }
    }
    ctx->pc = 0x137960u;
    // 0x137960: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137964: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x137964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137968: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13796c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13796cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x137970: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x137970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x137974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137974u;
    {
        const bool branch_taken_0x137974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137974u;
        // 0x137978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137974) {
            ctx->pc = 0x137984u;
            goto label_137984;
        }
    }
    ctx->pc = 0x13797Cu;
    // 0x13797c: 0xc061920  jal         func_186480
    ctx->pc = 0x13797Cu;
    SET_GPR_U32(ctx, 31, 0x137984u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13797Cu, 0x137984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137984u;
label_137984:
    // 0x137984: 0xc061422  jal         func_185088
    ctx->pc = 0x137984u;
    SET_GPR_U32(ctx, 31, 0x13798Cu);
    ctx->pc = 0x137988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137984u;
    // 0x137988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137984u, 0x13798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13798Cu;
label_13798c:
    // 0x13798c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x137990: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x137990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x137994: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x137994u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137998: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x137998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13799c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x13799cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1379a0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1379a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1379a4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1379a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1379a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1379a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1379ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1379acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1379b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1379b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1379b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1379b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1379b8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1379b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1379bc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1379bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1379c0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1379c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379c4: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1379c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1379c8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1379c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1379cc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1379ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1379d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1379D0u;
    {
        const bool branch_taken_0x1379d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379d0) {
            ctx->pc = 0x1379E0u;
            goto label_1379e0;
        }
    }
    ctx->pc = 0x1379D8u;
    // 0x1379d8: 0xc061920  jal         func_186480
    ctx->pc = 0x1379D8u;
    SET_GPR_U32(ctx, 31, 0x1379E0u);
    ctx->pc = 0x1379DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379D8u;
    // 0x1379dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1379D8u, 0x1379E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379E0u;
label_1379e0:
    // 0x1379e0: 0xc061422  jal         func_185088
    ctx->pc = 0x1379E0u;
    SET_GPR_U32(ctx, 31, 0x1379E8u);
    ctx->pc = 0x1379E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379E0u;
    // 0x1379e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1379E0u, 0x1379E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379E8u;
label_1379e8:
    // 0x1379e8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1379ec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1379ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1379f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1379f4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1379f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1379f8: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1379f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1379fc: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1379fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x137a00: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x137a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137a04: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x137a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137a08: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x137a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x137a0c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x137a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x137a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x137a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137a14: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x137a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x137a18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137a1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x137a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137a20: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x137A20u;
    {
        const bool branch_taken_0x137a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A20u;
        // 0x137a24: 0x152140  sll         $a0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a20) {
            ctx->pc = 0x137A54u;
            goto label_137a54;
        }
    }
    ctx->pc = 0x137A28u;
    // 0x137a28: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x137a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x137a2c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x137a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x137a30: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x137a34: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a38: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137a38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x137a3c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x137a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137a40: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x137a40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x137a44: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x137a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x137a48: 0x2aa2000f  slti        $v0, $s5, 0xF
    ctx->pc = 0x137a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x137a4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x137a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x137a50: 0xa2a80a  movz        $s5, $a1, $v0
    ctx->pc = 0x137a50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
label_137a54:
    // 0x137a54: 0x5660ffa2  bnel        $s3, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x137A54u;
    {
        const bool branch_taken_0x137a54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x137a54) {
            ctx->pc = 0x137A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137A54u;
            // 0x137a58: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1378E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1378e0;
        }
    }
    ctx->pc = 0x137A5Cu;
label_137a5c:
    // 0x137a5c: 0xafd50400  sw          $s5, 0x400($fp)
    ctx->pc = 0x137a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 21));
    // 0x137a60: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x137a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137a68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x137a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137a6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137a70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x137a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137a74: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x137a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137a78: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x137a78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137a7c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x137a7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137a80: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x137a80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137a84: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x137a84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137a88: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x137a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x137a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x137A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A8Cu;
        // 0x137a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A94u;
}
