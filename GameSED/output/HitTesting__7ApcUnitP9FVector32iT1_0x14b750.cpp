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

// Function: HitTesting__7ApcUnitP9FVector32iT1
// Address: 0x14b750 - 0x14ba08
void HitTesting__7ApcUnitP9FVector32iT1_0x14b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitTesting__7ApcUnitP9FVector32iT1_0x14b750");
#endif

    switch (ctx->pc) {
        case 0x14b750u: goto label_14b750;
        case 0x14b754u: goto label_14b754;
        case 0x14b758u: goto label_14b758;
        case 0x14b75cu: goto label_14b75c;
        case 0x14b760u: goto label_14b760;
        case 0x14b764u: goto label_14b764;
        case 0x14b768u: goto label_14b768;
        case 0x14b76cu: goto label_14b76c;
        case 0x14b770u: goto label_14b770;
        case 0x14b774u: goto label_14b774;
        case 0x14b778u: goto label_14b778;
        case 0x14b77cu: goto label_14b77c;
        case 0x14b780u: goto label_14b780;
        case 0x14b784u: goto label_14b784;
        case 0x14b788u: goto label_14b788;
        case 0x14b78cu: goto label_14b78c;
        case 0x14b790u: goto label_14b790;
        case 0x14b794u: goto label_14b794;
        case 0x14b798u: goto label_14b798;
        case 0x14b79cu: goto label_14b79c;
        case 0x14b7a0u: goto label_14b7a0;
        case 0x14b7a4u: goto label_14b7a4;
        case 0x14b7a8u: goto label_14b7a8;
        case 0x14b7acu: goto label_14b7ac;
        case 0x14b7b0u: goto label_14b7b0;
        case 0x14b7b4u: goto label_14b7b4;
        case 0x14b7b8u: goto label_14b7b8;
        case 0x14b7bcu: goto label_14b7bc;
        case 0x14b7c0u: goto label_14b7c0;
        case 0x14b7c4u: goto label_14b7c4;
        case 0x14b7c8u: goto label_14b7c8;
        case 0x14b7ccu: goto label_14b7cc;
        case 0x14b7d0u: goto label_14b7d0;
        case 0x14b7d4u: goto label_14b7d4;
        case 0x14b7d8u: goto label_14b7d8;
        case 0x14b7dcu: goto label_14b7dc;
        case 0x14b7e0u: goto label_14b7e0;
        case 0x14b7e4u: goto label_14b7e4;
        case 0x14b7e8u: goto label_14b7e8;
        case 0x14b7ecu: goto label_14b7ec;
        case 0x14b7f0u: goto label_14b7f0;
        case 0x14b7f4u: goto label_14b7f4;
        case 0x14b7f8u: goto label_14b7f8;
        case 0x14b7fcu: goto label_14b7fc;
        case 0x14b800u: goto label_14b800;
        case 0x14b804u: goto label_14b804;
        case 0x14b808u: goto label_14b808;
        case 0x14b80cu: goto label_14b80c;
        case 0x14b810u: goto label_14b810;
        case 0x14b814u: goto label_14b814;
        case 0x14b818u: goto label_14b818;
        case 0x14b81cu: goto label_14b81c;
        case 0x14b820u: goto label_14b820;
        case 0x14b824u: goto label_14b824;
        case 0x14b828u: goto label_14b828;
        case 0x14b82cu: goto label_14b82c;
        case 0x14b830u: goto label_14b830;
        case 0x14b834u: goto label_14b834;
        case 0x14b838u: goto label_14b838;
        case 0x14b83cu: goto label_14b83c;
        case 0x14b840u: goto label_14b840;
        case 0x14b844u: goto label_14b844;
        case 0x14b848u: goto label_14b848;
        case 0x14b84cu: goto label_14b84c;
        case 0x14b850u: goto label_14b850;
        case 0x14b854u: goto label_14b854;
        case 0x14b858u: goto label_14b858;
        case 0x14b85cu: goto label_14b85c;
        case 0x14b860u: goto label_14b860;
        case 0x14b864u: goto label_14b864;
        case 0x14b868u: goto label_14b868;
        case 0x14b86cu: goto label_14b86c;
        case 0x14b870u: goto label_14b870;
        case 0x14b874u: goto label_14b874;
        case 0x14b878u: goto label_14b878;
        case 0x14b87cu: goto label_14b87c;
        case 0x14b880u: goto label_14b880;
        case 0x14b884u: goto label_14b884;
        case 0x14b888u: goto label_14b888;
        case 0x14b88cu: goto label_14b88c;
        case 0x14b890u: goto label_14b890;
        case 0x14b894u: goto label_14b894;
        case 0x14b898u: goto label_14b898;
        case 0x14b89cu: goto label_14b89c;
        case 0x14b8a0u: goto label_14b8a0;
        case 0x14b8a4u: goto label_14b8a4;
        case 0x14b8a8u: goto label_14b8a8;
        case 0x14b8acu: goto label_14b8ac;
        case 0x14b8b0u: goto label_14b8b0;
        case 0x14b8b4u: goto label_14b8b4;
        case 0x14b8b8u: goto label_14b8b8;
        case 0x14b8bcu: goto label_14b8bc;
        case 0x14b8c0u: goto label_14b8c0;
        case 0x14b8c4u: goto label_14b8c4;
        case 0x14b8c8u: goto label_14b8c8;
        case 0x14b8ccu: goto label_14b8cc;
        case 0x14b8d0u: goto label_14b8d0;
        case 0x14b8d4u: goto label_14b8d4;
        case 0x14b8d8u: goto label_14b8d8;
        case 0x14b8dcu: goto label_14b8dc;
        case 0x14b8e0u: goto label_14b8e0;
        case 0x14b8e4u: goto label_14b8e4;
        case 0x14b8e8u: goto label_14b8e8;
        case 0x14b8ecu: goto label_14b8ec;
        case 0x14b8f0u: goto label_14b8f0;
        case 0x14b8f4u: goto label_14b8f4;
        case 0x14b8f8u: goto label_14b8f8;
        case 0x14b8fcu: goto label_14b8fc;
        case 0x14b900u: goto label_14b900;
        case 0x14b904u: goto label_14b904;
        case 0x14b908u: goto label_14b908;
        case 0x14b90cu: goto label_14b90c;
        case 0x14b910u: goto label_14b910;
        case 0x14b914u: goto label_14b914;
        case 0x14b918u: goto label_14b918;
        case 0x14b91cu: goto label_14b91c;
        case 0x14b920u: goto label_14b920;
        case 0x14b924u: goto label_14b924;
        case 0x14b928u: goto label_14b928;
        case 0x14b92cu: goto label_14b92c;
        case 0x14b930u: goto label_14b930;
        case 0x14b934u: goto label_14b934;
        case 0x14b938u: goto label_14b938;
        case 0x14b93cu: goto label_14b93c;
        case 0x14b940u: goto label_14b940;
        case 0x14b944u: goto label_14b944;
        case 0x14b948u: goto label_14b948;
        case 0x14b94cu: goto label_14b94c;
        case 0x14b950u: goto label_14b950;
        case 0x14b954u: goto label_14b954;
        case 0x14b958u: goto label_14b958;
        case 0x14b95cu: goto label_14b95c;
        case 0x14b960u: goto label_14b960;
        case 0x14b964u: goto label_14b964;
        case 0x14b968u: goto label_14b968;
        case 0x14b96cu: goto label_14b96c;
        case 0x14b970u: goto label_14b970;
        case 0x14b974u: goto label_14b974;
        case 0x14b978u: goto label_14b978;
        case 0x14b97cu: goto label_14b97c;
        case 0x14b980u: goto label_14b980;
        case 0x14b984u: goto label_14b984;
        case 0x14b988u: goto label_14b988;
        case 0x14b98cu: goto label_14b98c;
        case 0x14b990u: goto label_14b990;
        case 0x14b994u: goto label_14b994;
        case 0x14b998u: goto label_14b998;
        case 0x14b99cu: goto label_14b99c;
        case 0x14b9a0u: goto label_14b9a0;
        case 0x14b9a4u: goto label_14b9a4;
        case 0x14b9a8u: goto label_14b9a8;
        case 0x14b9acu: goto label_14b9ac;
        case 0x14b9b0u: goto label_14b9b0;
        case 0x14b9b4u: goto label_14b9b4;
        case 0x14b9b8u: goto label_14b9b8;
        case 0x14b9bcu: goto label_14b9bc;
        case 0x14b9c0u: goto label_14b9c0;
        case 0x14b9c4u: goto label_14b9c4;
        case 0x14b9c8u: goto label_14b9c8;
        case 0x14b9ccu: goto label_14b9cc;
        case 0x14b9d0u: goto label_14b9d0;
        case 0x14b9d4u: goto label_14b9d4;
        case 0x14b9d8u: goto label_14b9d8;
        case 0x14b9dcu: goto label_14b9dc;
        case 0x14b9e0u: goto label_14b9e0;
        case 0x14b9e4u: goto label_14b9e4;
        case 0x14b9e8u: goto label_14b9e8;
        case 0x14b9ecu: goto label_14b9ec;
        case 0x14b9f0u: goto label_14b9f0;
        case 0x14b9f4u: goto label_14b9f4;
        case 0x14b9f8u: goto label_14b9f8;
        case 0x14b9fcu: goto label_14b9fc;
        case 0x14ba00u: goto label_14ba00;
        case 0x14ba04u: goto label_14ba04;
        default: break;
    }

    ctx->pc = 0x14b750u;

label_14b750:
    // 0x14b750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14b754:
    // 0x14b754: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_14b758:
    // 0x14b758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14b75c:
    // 0x14b75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14b760:
    // 0x14b760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14b764:
    // 0x14b764: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x14b764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14b768:
    // 0x14b768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14b76c:
    // 0x14b76c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14b76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14b770:
    // 0x14b770: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_14b774:
    // 0x14b774: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14b774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b778:
    // 0x14b778: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_14b77c:
    // 0x14b77c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x14b77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14b780:
    // 0x14b780: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_14b784:
    // 0x14b784: 0x2623fffb  addiu       $v1, $s1, -0x5
    ctx->pc = 0x14b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
label_14b788:
    // 0x14b788: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_14b78c:
    // 0x14b78c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x14b78cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14b790:
    // 0x14b790: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_14b794:
    // 0x14b794: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x14b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_14b798:
    // 0x14b798: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x14b798u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14b79c:
    // 0x14b79c: 0x8e130170  lw          $s3, 0x170($s0)
    ctx->pc = 0x14b79cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_14b7a0:
    // 0x14b7a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x14b7a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14b7a4:
    // 0x14b7a4: 0x38c61118  xori        $a2, $a2, 0x1118
    ctx->pc = 0x14b7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4376);
label_14b7a8:
    // 0x14b7a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14b7ac:
    // 0x14b7ac: 0x2cd60001  sltiu       $s6, $a2, 0x1
    ctx->pc = 0x14b7acu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14b7b0:
    // 0x14b7b0: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x14b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14b7b4:
    // 0x14b7b4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x14b7b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_14b7b8:
    // 0x14b7b8: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_14b7bc:
    if (ctx->pc == 0x14B7BCu) {
        ctx->pc = 0x14B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7B8u;
        // 0x14b7bc: 0x2c950001  sltiu       $s5, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B7C0u;
        goto label_14b7c0;
    }
    ctx->pc = 0x14B7B8u;
    {
        const bool branch_taken_0x14b7b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B7B8u;
        // 0x14b7bc: 0x2c950001  sltiu       $s5, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b7b8) {
            ctx->pc = 0x14B7CCu;
            goto label_14b7cc;
        }
    }
    ctx->pc = 0x14B7C0u;
label_14b7c0:
    // 0x14b7c0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_14b7c4:
    // 0x14b7c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14b7c8:
    // 0x14b7c8: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x14b7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_14b7cc:
    // 0x14b7cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x14b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_14b7d0:
    // 0x14b7d0: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x14b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_14b7d4:
    // 0x14b7d4: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x14b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_14b7d8:
    // 0x14b7d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14b7dc:
    // 0x14b7dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14b7e0:
    // 0x14b7e0: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x14b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_14b7e4:
    // 0x14b7e4: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_14b7e8:
    // 0x14b7e8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x14b7e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_14b7ec:
    // 0x14b7ec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_14b7f0:
    // 0x14b7f0: 0xc6000144  lwc1        $f0, 0x144($s0)
    ctx->pc = 0x14b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b7f4:
    // 0x14b7f4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14b7f8:
    // 0x14b7f8: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x14b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14b7fc:
    // 0x14b7fc: 0xae110130  sw          $s1, 0x130($s0)
    ctx->pc = 0x14b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
label_14b800:
    // 0x14b800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14b800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14b804:
    // 0x14b804: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x14b804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
label_14b808:
    // 0x14b808: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x14b808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_14b80c:
    // 0x14b80c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x14b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_14b810:
    // 0x14b810: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14b814:
    // 0x14b814: 0x3063c800  andi        $v1, $v1, 0xC800
    ctx->pc = 0x14b814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)51200);
label_14b818:
    // 0x14b818: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_14b81c:
    if (ctx->pc == 0x14B81Cu) {
        ctx->pc = 0x14B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B818u;
        // 0x14b81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B820u;
        goto label_14b820;
    }
    ctx->pc = 0x14B818u;
    {
        const bool branch_taken_0x14b818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B818u;
        // 0x14b81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b818) {
            ctx->pc = 0x14B830u;
            goto label_14b830;
        }
    }
    ctx->pc = 0x14B820u;
label_14b820:
    // 0x14b820: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14b820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_14b824:
    // 0x14b824: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_14b828:
    // 0x14b828: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14b82c:
    if (ctx->pc == 0x14B82Cu) {
        ctx->pc = 0x14B830u;
        goto label_14b830;
    }
    ctx->pc = 0x14B828u;
    {
        const bool branch_taken_0x14b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b828) {
            ctx->pc = 0x14B834u;
            goto label_14b834;
        }
    }
    ctx->pc = 0x14B830u;
label_14b830:
    // 0x14b830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b834:
    // 0x14b834: 0x1480006a  bnez        $a0, . + 4 + (0x6A << 2)
label_14b838:
    if (ctx->pc == 0x14B838u) {
        ctx->pc = 0x14B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B834u;
        // 0x14b838: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B83Cu;
        goto label_14b83c;
    }
    ctx->pc = 0x14B834u;
    {
        const bool branch_taken_0x14b834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B834u;
        // 0x14b838: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b834) {
            ctx->pc = 0x14B9E0u;
            goto label_14b9e0;
        }
    }
    ctx->pc = 0x14B83Cu;
label_14b83c:
    // 0x14b83c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_14b840:
    if (ctx->pc == 0x14B840u) {
        ctx->pc = 0x14B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B83Cu;
        // 0x14b840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B844u;
        goto label_14b844;
    }
    ctx->pc = 0x14B83Cu;
    {
        const bool branch_taken_0x14b83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B83Cu;
        // 0x14b840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b83c) {
            ctx->pc = 0x14B86Cu;
            goto label_14b86c;
        }
    }
    ctx->pc = 0x14B844u;
label_14b844:
    // 0x14b844: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
label_14b848:
    if (ctx->pc == 0x14B848u) {
        ctx->pc = 0x14B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B844u;
        // 0x14b848: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B84Cu;
        goto label_14b84c;
    }
    ctx->pc = 0x14B844u;
    {
        const bool branch_taken_0x14b844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B844u;
        // 0x14b848: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b844) {
            ctx->pc = 0x14B86Cu;
            goto label_14b86c;
        }
    }
    ctx->pc = 0x14B84Cu;
label_14b84c:
    // 0x14b84c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_14b850:
    // 0x14b850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14b854:
    // 0x14b854: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_14b858:
    if (ctx->pc == 0x14B858u) {
        ctx->pc = 0x14B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B854u;
        // 0x14b858: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B85Cu;
        goto label_14b85c;
    }
    ctx->pc = 0x14B854u;
    {
        const bool branch_taken_0x14b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B854u;
        // 0x14b858: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b854) {
            ctx->pc = 0x14B9E0u;
            goto label_14b9e0;
        }
    }
    ctx->pc = 0x14B85Cu;
label_14b85c:
    // 0x14b85c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14b860:
    // 0x14b860: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14b864:
    // 0x14b864: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_14b868:
    if (ctx->pc == 0x14B868u) {
        ctx->pc = 0x14B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B864u;
        // 0x14b868: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B86Cu;
        goto label_14b86c;
    }
    ctx->pc = 0x14B864u;
    {
        const bool branch_taken_0x14b864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B864u;
        // 0x14b868: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b864) {
            ctx->pc = 0x14B9E0u;
            goto label_14b9e0;
        }
    }
    ctx->pc = 0x14B86Cu;
label_14b86c:
    // 0x14b86c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14b870:
    // 0x14b870: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
label_14b874:
    if (ctx->pc == 0x14B874u) {
        ctx->pc = 0x14B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B870u;
        // 0x14b874: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B878u;
        goto label_14b878;
    }
    ctx->pc = 0x14B870u;
    {
        const bool branch_taken_0x14b870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B870u;
        // 0x14b874: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b870) {
            ctx->pc = 0x14B8A0u;
            goto label_14b8a0;
        }
    }
    ctx->pc = 0x14B878u;
label_14b878:
    // 0x14b878: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14b878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b87c:
    // 0x14b87c: 0xc04eec2  jal         func_13BB08
label_14b880:
    if (ctx->pc == 0x14B880u) {
        ctx->pc = 0x14B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B87Cu;
        // 0x14b880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B884u;
        goto label_14b884;
    }
    ctx->pc = 0x14B87Cu;
    SET_GPR_U32(ctx, 31, 0x14B884u);
    ctx->pc = 0x14B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B87Cu;
    // 0x14b880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB08u, 0x14B87Cu, 0x14B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B884u;
label_14b884:
    // 0x14b884: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_14b888:
    if (ctx->pc == 0x14B888u) {
        ctx->pc = 0x14B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B884u;
        // 0x14b888: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B88Cu;
        goto label_14b88c;
    }
    ctx->pc = 0x14B884u;
    {
        const bool branch_taken_0x14b884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B884u;
        // 0x14b888: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b884) {
            ctx->pc = 0x14B8A4u;
            goto label_14b8a4;
        }
    }
    ctx->pc = 0x14B88Cu;
label_14b88c:
    // 0x14b88c: 0x16a00053  bnez        $s5, . + 4 + (0x53 << 2)
label_14b890:
    if (ctx->pc == 0x14B890u) {
        ctx->pc = 0x14B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B88Cu;
        // 0x14b890: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B894u;
        goto label_14b894;
    }
    ctx->pc = 0x14B88Cu;
    {
        const bool branch_taken_0x14b88c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B88Cu;
        // 0x14b890: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b88c) {
            ctx->pc = 0x14B9DCu;
            goto label_14b9dc;
        }
    }
    ctx->pc = 0x14B894u;
label_14b894:
    // 0x14b894: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x14b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_14b898:
    // 0x14b898: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14b898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_14b89c:
    // 0x14b89c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14b8a0:
    // 0x14b8a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14b8a4:
    // 0x14b8a4: 0x1242004d  beq         $s2, $v0, . + 4 + (0x4D << 2)
label_14b8a8:
    if (ctx->pc == 0x14B8A8u) {
        ctx->pc = 0x14B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8A4u;
        // 0x14b8a8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8ACu;
        goto label_14b8ac;
    }
    ctx->pc = 0x14B8A4u;
    {
        const bool branch_taken_0x14b8a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8A4u;
        // 0x14b8a8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8a4) {
            ctx->pc = 0x14B9DCu;
            goto label_14b9dc;
        }
    }
    ctx->pc = 0x14B8ACu;
label_14b8ac:
    // 0x14b8ac: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_14b8b0:
    // 0x14b8b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14b8b4:
    // 0x14b8b4: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_14b8b8:
    if (ctx->pc == 0x14B8B8u) {
        ctx->pc = 0x14B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8B4u;
        // 0x14b8b8: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8BCu;
        goto label_14b8bc;
    }
    ctx->pc = 0x14B8B4u;
    {
        const bool branch_taken_0x14b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8b4) {
            ctx->pc = 0x14B8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B8B4u;
            // 0x14b8b8: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B970u;
            goto label_14b970;
        }
    }
    ctx->pc = 0x14B8BCu;
label_14b8bc:
    // 0x14b8bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x14b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14b8c0:
    // 0x14b8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b8c4:
    // 0x14b8c4: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x14b8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_14b8c8:
    // 0x14b8c8: 0xc052fa2  jal         func_14BE88
label_14b8cc:
    if (ctx->pc == 0x14B8CCu) {
        ctx->pc = 0x14B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8C8u;
        // 0x14b8cc: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8D0u;
        goto label_14b8d0;
    }
    ctx->pc = 0x14B8C8u;
    SET_GPR_U32(ctx, 31, 0x14B8D0u);
    ctx->pc = 0x14B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8C8u;
    // 0x14b8cc: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x14B8C8u, 0x14B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8D0u;
label_14b8d0:
    // 0x14b8d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14b8d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_14b8d4:
    // 0x14b8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14b8d8:
    // 0x14b8d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14b8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14b8dc:
    // 0x14b8dc: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_14b8e0:
    if (ctx->pc == 0x14B8E0u) {
        ctx->pc = 0x14B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8DCu;
        // 0x14b8e0: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B8E4u;
        goto label_14b8e4;
    }
    ctx->pc = 0x14B8DCu;
    {
        const bool branch_taken_0x14b8dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b8dc) {
            ctx->pc = 0x14B8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B8DCu;
            // 0x14b8e0: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B970u;
            goto label_14b970;
        }
    }
    ctx->pc = 0x14B8E4u;
label_14b8e4:
    // 0x14b8e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_14b8e8:
    // 0x14b8e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14b8ec:
    // 0x14b8ec: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x14b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_14b8f0:
    // 0x14b8f0: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x14b8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_14b8f4:
    // 0x14b8f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14b8f8:
    // 0x14b8f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x14b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_14b8fc:
    // 0x14b8fc: 0x24e50060  addiu       $a1, $a3, 0x60
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_14b900:
    // 0x14b900: 0xa0e60020  sb          $a2, 0x20($a3)
    ctx->pc = 0x14b900u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 6));
label_14b904:
    // 0x14b904: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x14b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_14b908:
    // 0x14b908: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x14b908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_14b90c:
    // 0x14b90c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_14b910:
    // 0x14b910: 0x24e30080  addiu       $v1, $a3, 0x80
    ctx->pc = 0x14b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_14b914:
    // 0x14b914: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x14b914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_14b918:
    // 0x14b918: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14b918u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_14b91c:
    // 0x14b91c: 0xc4e00084  lwc1        $f0, 0x84($a3)
    ctx->pc = 0x14b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14b920:
    // 0x14b920: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14b924:
    // 0x14b924: 0xace2009c  sw          $v0, 0x9C($a3)
    ctx->pc = 0x14b924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 2));
label_14b928:
    // 0x14b928: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14b928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b92c:
    // 0x14b92c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14b930:
    // 0x14b930: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x14b930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
label_14b934:
    // 0x14b934: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x14b934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
label_14b938:
    // 0x14b938: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14b93c:
    // 0x14b93c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14b940:
    // 0x14b940: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14b940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b944:
    // 0x14b944: 0xe4e00084  swc1        $f0, 0x84($a3)
    ctx->pc = 0x14b944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 132), bits); }
label_14b948:
    // 0x14b948: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x14b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_14b94c:
    // 0x14b94c: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x14b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_14b950:
    // 0x14b950: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x14b950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
label_14b954:
    // 0x14b954: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14b958:
    // 0x14b958: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14b95c:
    // 0x14b95c: 0x40f809  jalr        $v0
label_14b960:
    if (ctx->pc == 0x14B960u) {
        ctx->pc = 0x14B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B95Cu;
        // 0x14b960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B964u;
        goto label_14b964;
    }
    ctx->pc = 0x14B95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B964u);
        ctx->pc = 0x14B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B95Cu;
        // 0x14b960: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B95Cu, 0x14B964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B964u;
label_14b964:
    // 0x14b964: 0x1000001e  b           . + 4 + (0x1E << 2)
label_14b968:
    if (ctx->pc == 0x14B968u) {
        ctx->pc = 0x14B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B964u;
        // 0x14b968: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B96Cu;
        goto label_14b96c;
    }
    ctx->pc = 0x14B964u;
    {
        const bool branch_taken_0x14b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B964u;
        // 0x14b968: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b964) {
            ctx->pc = 0x14B9E0u;
            goto label_14b9e0;
        }
    }
    ctx->pc = 0x14B96Cu;
label_14b96c:
    // 0x14b96c: 0x0  nop
    ctx->pc = 0x14b96cu;
    // NOP
label_14b970:
    // 0x14b970: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14b970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_14b974:
    // 0x14b974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14b978:
    // 0x14b978: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_14b97c:
    if (ctx->pc == 0x14B97Cu) {
        ctx->pc = 0x14B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B978u;
        // 0x14b97c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B980u;
        goto label_14b980;
    }
    ctx->pc = 0x14B978u;
    {
        const bool branch_taken_0x14b978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b978) {
            ctx->pc = 0x14B97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B978u;
            // 0x14b97c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9E0u;
            goto label_14b9e0;
        }
    }
    ctx->pc = 0x14B980u;
label_14b980:
    // 0x14b980: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_14b984:
    // 0x14b984: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_14b988:
    if (ctx->pc == 0x14B988u) {
        ctx->pc = 0x14B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B984u;
        // 0x14b988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B98Cu;
        goto label_14b98c;
    }
    ctx->pc = 0x14B984u;
    {
        const bool branch_taken_0x14b984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B984u;
        // 0x14b988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b984) {
            ctx->pc = 0x14B9B8u;
            goto label_14b9b8;
        }
    }
    ctx->pc = 0x14B98Cu;
label_14b98c:
    // 0x14b98c: 0x26060140  addiu       $a2, $s0, 0x140
    ctx->pc = 0x14b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_14b990:
    // 0x14b990: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14b990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b994:
    // 0x14b994: 0xc055d70  jal         func_1575C0
label_14b998:
    if (ctx->pc == 0x14B998u) {
        ctx->pc = 0x14B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B994u;
        // 0x14b998: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B99Cu;
        goto label_14b99c;
    }
    ctx->pc = 0x14B994u;
    SET_GPR_U32(ctx, 31, 0x14B99Cu);
    ctx->pc = 0x14B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B994u;
    // 0x14b998: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1575C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1575C0u, 0x14B994u, 0x14B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B99Cu;
label_14b99c:
    // 0x14b99c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_14b9a0:
    if (ctx->pc == 0x14B9A0u) {
        ctx->pc = 0x14B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B99Cu;
        // 0x14b9a0: 0x8e64006c  lw          $a0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B9A4u;
        goto label_14b9a4;
    }
    ctx->pc = 0x14B99Cu;
    {
        const bool branch_taken_0x14b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b99c) {
            ctx->pc = 0x14B9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B99Cu;
            // 0x14b9a0: 0x8e64006c  lw          $a0, 0x6C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9BCu;
            goto label_14b9bc;
        }
    }
    ctx->pc = 0x14B9A4u;
label_14b9a4:
    // 0x14b9a4: 0x16a0000d  bnez        $s5, . + 4 + (0xD << 2)
label_14b9a8:
    if (ctx->pc == 0x14B9A8u) {
        ctx->pc = 0x14B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9A4u;
        // 0x14b9a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B9ACu;
        goto label_14b9ac;
    }
    ctx->pc = 0x14B9A4u;
    {
        const bool branch_taken_0x14b9a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9A4u;
        // 0x14b9a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9a4) {
            ctx->pc = 0x14B9DCu;
            goto label_14b9dc;
        }
    }
    ctx->pc = 0x14B9ACu;
label_14b9ac:
    // 0x14b9ac: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_14b9b0:
    // 0x14b9b0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_14b9b4:
    // 0x14b9b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_14b9b8:
    // 0x14b9b8: 0x8e64006c  lw          $a0, 0x6C($s3)
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_14b9bc:
    // 0x14b9bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_14b9c0:
    if (ctx->pc == 0x14B9C0u) {
        ctx->pc = 0x14B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9BCu;
        // 0x14b9c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B9C4u;
        goto label_14b9c4;
    }
    ctx->pc = 0x14B9BCu;
    {
        const bool branch_taken_0x14b9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9BCu;
        // 0x14b9c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9bc) {
            ctx->pc = 0x14B9DCu;
            goto label_14b9dc;
        }
    }
    ctx->pc = 0x14B9C4u;
label_14b9c4:
    // 0x14b9c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14b9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b9c8:
    // 0x14b9c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x14b9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14b9cc:
    // 0x14b9cc: 0xc055e0a  jal         func_157828
label_14b9d0:
    if (ctx->pc == 0x14B9D0u) {
        ctx->pc = 0x14B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9CCu;
        // 0x14b9d0: 0x24a60140  addiu       $a2, $a1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B9D4u;
        goto label_14b9d4;
    }
    ctx->pc = 0x14B9CCu;
    SET_GPR_U32(ctx, 31, 0x14B9D4u);
    ctx->pc = 0x14B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9CCu;
    // 0x14b9d0: 0x24a60140  addiu       $a2, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157828u, 0x14B9CCu, 0x14B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9D4u;
label_14b9d4:
    // 0x14b9d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b9d8:
    // 0x14b9d8: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x14b9d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_14b9dc:
    // 0x14b9dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x14b9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14b9e0:
    // 0x14b9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b9e4:
    // 0x14b9e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14b9e8:
    // 0x14b9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14b9ec:
    // 0x14b9ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14b9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14b9f0:
    // 0x14b9f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14b9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14b9f4:
    // 0x14b9f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14b9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_14b9f8:
    // 0x14b9f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x14b9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14b9fc:
    // 0x14b9fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14b9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_14ba00:
    // 0x14ba00: 0x3e00008  jr          $ra
label_14ba04:
    if (ctx->pc == 0x14BA04u) {
        ctx->pc = 0x14BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA00u;
        // 0x14ba04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BA08u;
        goto label_fallthrough_0x14ba00;
    }
    ctx->pc = 0x14BA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA00u;
        // 0x14ba04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14ba00:
    ctx->pc = 0x14BA08u;
}
