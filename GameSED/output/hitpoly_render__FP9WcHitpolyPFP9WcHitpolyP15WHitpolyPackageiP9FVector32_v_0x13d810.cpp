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

// Function: hitpoly_render__FP9WcHitpolyPFP9WcHitpolyP15WHitpolyPackageiP9FVector32_v
// Address: 0x13d810 - 0x13da24
void hitpoly_render__FP9WcHitpolyPFP9WcHitpolyP15WHitpolyPackageiP9FVector32_v_0x13d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hitpoly_render__FP9WcHitpolyPFP9WcHitpolyP15WHitpolyPackageiP9FVector32_v_0x13d810");
#endif

    switch (ctx->pc) {
        case 0x13d810u: goto label_13d810;
        case 0x13d814u: goto label_13d814;
        case 0x13d818u: goto label_13d818;
        case 0x13d81cu: goto label_13d81c;
        case 0x13d820u: goto label_13d820;
        case 0x13d824u: goto label_13d824;
        case 0x13d828u: goto label_13d828;
        case 0x13d82cu: goto label_13d82c;
        case 0x13d830u: goto label_13d830;
        case 0x13d834u: goto label_13d834;
        case 0x13d838u: goto label_13d838;
        case 0x13d83cu: goto label_13d83c;
        case 0x13d840u: goto label_13d840;
        case 0x13d844u: goto label_13d844;
        case 0x13d848u: goto label_13d848;
        case 0x13d84cu: goto label_13d84c;
        case 0x13d850u: goto label_13d850;
        case 0x13d854u: goto label_13d854;
        case 0x13d858u: goto label_13d858;
        case 0x13d85cu: goto label_13d85c;
        case 0x13d860u: goto label_13d860;
        case 0x13d864u: goto label_13d864;
        case 0x13d868u: goto label_13d868;
        case 0x13d86cu: goto label_13d86c;
        case 0x13d870u: goto label_13d870;
        case 0x13d874u: goto label_13d874;
        case 0x13d878u: goto label_13d878;
        case 0x13d87cu: goto label_13d87c;
        case 0x13d880u: goto label_13d880;
        case 0x13d884u: goto label_13d884;
        case 0x13d888u: goto label_13d888;
        case 0x13d88cu: goto label_13d88c;
        case 0x13d890u: goto label_13d890;
        case 0x13d894u: goto label_13d894;
        case 0x13d898u: goto label_13d898;
        case 0x13d89cu: goto label_13d89c;
        case 0x13d8a0u: goto label_13d8a0;
        case 0x13d8a4u: goto label_13d8a4;
        case 0x13d8a8u: goto label_13d8a8;
        case 0x13d8acu: goto label_13d8ac;
        case 0x13d8b0u: goto label_13d8b0;
        case 0x13d8b4u: goto label_13d8b4;
        case 0x13d8b8u: goto label_13d8b8;
        case 0x13d8bcu: goto label_13d8bc;
        case 0x13d8c0u: goto label_13d8c0;
        case 0x13d8c4u: goto label_13d8c4;
        case 0x13d8c8u: goto label_13d8c8;
        case 0x13d8ccu: goto label_13d8cc;
        case 0x13d8d0u: goto label_13d8d0;
        case 0x13d8d4u: goto label_13d8d4;
        case 0x13d8d8u: goto label_13d8d8;
        case 0x13d8dcu: goto label_13d8dc;
        case 0x13d8e0u: goto label_13d8e0;
        case 0x13d8e4u: goto label_13d8e4;
        case 0x13d8e8u: goto label_13d8e8;
        case 0x13d8ecu: goto label_13d8ec;
        case 0x13d8f0u: goto label_13d8f0;
        case 0x13d8f4u: goto label_13d8f4;
        case 0x13d8f8u: goto label_13d8f8;
        case 0x13d8fcu: goto label_13d8fc;
        case 0x13d900u: goto label_13d900;
        case 0x13d904u: goto label_13d904;
        case 0x13d908u: goto label_13d908;
        case 0x13d90cu: goto label_13d90c;
        case 0x13d910u: goto label_13d910;
        case 0x13d914u: goto label_13d914;
        case 0x13d918u: goto label_13d918;
        case 0x13d91cu: goto label_13d91c;
        case 0x13d920u: goto label_13d920;
        case 0x13d924u: goto label_13d924;
        case 0x13d928u: goto label_13d928;
        case 0x13d92cu: goto label_13d92c;
        case 0x13d930u: goto label_13d930;
        case 0x13d934u: goto label_13d934;
        case 0x13d938u: goto label_13d938;
        case 0x13d93cu: goto label_13d93c;
        case 0x13d940u: goto label_13d940;
        case 0x13d944u: goto label_13d944;
        case 0x13d948u: goto label_13d948;
        case 0x13d94cu: goto label_13d94c;
        case 0x13d950u: goto label_13d950;
        case 0x13d954u: goto label_13d954;
        case 0x13d958u: goto label_13d958;
        case 0x13d95cu: goto label_13d95c;
        case 0x13d960u: goto label_13d960;
        case 0x13d964u: goto label_13d964;
        case 0x13d968u: goto label_13d968;
        case 0x13d96cu: goto label_13d96c;
        case 0x13d970u: goto label_13d970;
        case 0x13d974u: goto label_13d974;
        case 0x13d978u: goto label_13d978;
        case 0x13d97cu: goto label_13d97c;
        case 0x13d980u: goto label_13d980;
        case 0x13d984u: goto label_13d984;
        case 0x13d988u: goto label_13d988;
        case 0x13d98cu: goto label_13d98c;
        case 0x13d990u: goto label_13d990;
        case 0x13d994u: goto label_13d994;
        case 0x13d998u: goto label_13d998;
        case 0x13d99cu: goto label_13d99c;
        case 0x13d9a0u: goto label_13d9a0;
        case 0x13d9a4u: goto label_13d9a4;
        case 0x13d9a8u: goto label_13d9a8;
        case 0x13d9acu: goto label_13d9ac;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13d9b4u: goto label_13d9b4;
        case 0x13d9b8u: goto label_13d9b8;
        case 0x13d9bcu: goto label_13d9bc;
        case 0x13d9c0u: goto label_13d9c0;
        case 0x13d9c4u: goto label_13d9c4;
        case 0x13d9c8u: goto label_13d9c8;
        case 0x13d9ccu: goto label_13d9cc;
        case 0x13d9d0u: goto label_13d9d0;
        case 0x13d9d4u: goto label_13d9d4;
        case 0x13d9d8u: goto label_13d9d8;
        case 0x13d9dcu: goto label_13d9dc;
        case 0x13d9e0u: goto label_13d9e0;
        case 0x13d9e4u: goto label_13d9e4;
        case 0x13d9e8u: goto label_13d9e8;
        case 0x13d9ecu: goto label_13d9ec;
        case 0x13d9f0u: goto label_13d9f0;
        case 0x13d9f4u: goto label_13d9f4;
        case 0x13d9f8u: goto label_13d9f8;
        case 0x13d9fcu: goto label_13d9fc;
        case 0x13da00u: goto label_13da00;
        case 0x13da04u: goto label_13da04;
        case 0x13da08u: goto label_13da08;
        case 0x13da0cu: goto label_13da0c;
        case 0x13da10u: goto label_13da10;
        case 0x13da14u: goto label_13da14;
        case 0x13da18u: goto label_13da18;
        case 0x13da1cu: goto label_13da1c;
        case 0x13da20u: goto label_13da20;
        default: break;
    }

    ctx->pc = 0x13d810u;

label_13d810:
    // 0x13d810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_13d814:
    // 0x13d814: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_13d818:
    // 0x13d818: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x13d818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_13d81c:
    // 0x13d81c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x13d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_13d820:
    // 0x13d820: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x13d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_13d824:
    // 0x13d824: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x13d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_13d828:
    // 0x13d828: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x13d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_13d82c:
    // 0x13d82c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x13d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_13d830:
    // 0x13d830: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13d830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13d834:
    // 0x13d834: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x13d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_13d838:
    // 0x13d838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d83c:
    // 0x13d83c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x13d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_13d840:
    // 0x13d840: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13d840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d844:
    // 0x13d844: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x13d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_13d848:
    // 0x13d848: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13d848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d84c:
    // 0x13d84c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_13d850:
    // 0x13d850: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x13d850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13d854:
    // 0x13d854: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x13d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_13d858:
    // 0x13d858: 0x2457eb70  addiu       $s7, $v0, -0x1490
    ctx->pc = 0x13d858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_13d85c:
    // 0x13d85c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x13d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_13d860:
    // 0x13d860: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
label_13d864:
    // 0x13d864: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_13d868:
    // 0x13d868: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13d868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d86c:
    // 0x13d86c: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x13d86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_13d870:
    // 0x13d870: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x13d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_13d874:
    // 0x13d874: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x13d874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_13d878:
    // 0x13d878: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x13d878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_13d87c:
    // 0x13d87c: 0x10640054  beq         $v1, $a0, . + 4 + (0x54 << 2)
label_13d880:
    if (ctx->pc == 0x13D880u) {
        ctx->pc = 0x13D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D87Cu;
        // 0x13d880: 0x33180  sll         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D884u;
        goto label_13d884;
    }
    ctx->pc = 0x13D87Cu;
    {
        const bool branch_taken_0x13d87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D87Cu;
        // 0x13d880: 0x33180  sll         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d87c) {
            ctx->pc = 0x13D9D0u;
            goto label_13d9d0;
        }
    }
    ctx->pc = 0x13D884u;
label_13d884:
    // 0x13d884: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x13d884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_13d888:
    // 0x13d888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d88c:
    // 0x13d88c: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x13d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_13d890:
    // 0x13d890: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13d894:
    // 0x13d894: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x13d894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_13d898:
    // 0x13d898: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x13d898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_13d89c:
    // 0x13d89c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x13d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_13d8a0:
    // 0x13d8a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13d8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_13d8a4:
    // 0x13d8a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13d8a8:
    // 0x13d8a8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x13d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13d8ac:
    // 0x13d8ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13d8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13d8b0:
    // 0x13d8b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13d8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_13d8b4:
    // 0x13d8b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13d8b8:
    // 0x13d8b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13d8bc:
    // 0x13d8bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13d8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13d8c0:
    // 0x13d8c0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x13d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_13d8c4:
    // 0x13d8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d8c8:
    // 0x13d8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13d8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13d8cc:
    // 0x13d8cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13d8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_13d8d0:
    // 0x13d8d0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13d8d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13d8d4:
    // 0x13d8d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13d8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13d8d8:
    // 0x13d8d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13d8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13d8dc:
    // 0x13d8dc: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x13d8dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_13d8e0:
    // 0x13d8e0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x13d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13d8e4:
    // 0x13d8e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13d8e8:
    // 0x13d8e8: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x13d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_13d8ec:
    // 0x13d8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d8f0:
    // 0x13d8f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13d8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13d8f4:
    // 0x13d8f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13d8f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13d8f8:
    // 0x13d8f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13d8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13d8fc:
    // 0x13d8fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x13d8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13d900:
    // 0x13d900: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_13d904:
    // 0x13d904: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x13d904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_13d908:
    // 0x13d908: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x13d908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13d90c:
    // 0x13d90c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13d910:
    // 0x13d910: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_13d914:
    // 0x13d914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d918:
    // 0x13d918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13d918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13d91c:
    // 0x13d91c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13d91cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_13d920:
    // 0x13d920: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13d920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13d924:
    // 0x13d924: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x13d924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_13d928:
    // 0x13d928: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x13d928u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d92c:
    // 0x13d92c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x13d92cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_13d930:
    // 0x13d930: 0xdae50010  lqc2        $vf5, 0x10($s7)
    ctx->pc = 0x13d930u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_13d934:
    // 0x13d934: 0xdae60020  lqc2        $vf6, 0x20($s7)
    ctx->pc = 0x13d934u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
label_13d938:
    // 0x13d938: 0xdae70030  lqc2        $vf7, 0x30($s7)
    ctx->pc = 0x13d938u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
label_13d93c:
    // 0x13d93c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13d93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d940:
    // 0x13d940: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13d940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d944:
    // 0x13d944: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13d944u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_13d948:
    // 0x13d948: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13d948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_13d94c:
    // 0x13d94c: 0xfacc0000  sqc2        $vf12, 0x0($s6)
    ctx->pc = 0x13d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_13d950:
    // 0x13d950: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x13d950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d954:
    // 0x13d954: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
label_13d958:
    // 0x13d958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13d958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13d95c:
    // 0x13d95c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13d95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_13d960:
    // 0x13d960: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13d964:
    // 0x13d964: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13d964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d968:
    // 0x13d968: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
label_13d96c:
    if (ctx->pc == 0x13D96Cu) {
        ctx->pc = 0x13D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D968u;
        // 0x13d96c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D970u;
        goto label_13d970;
    }
    ctx->pc = 0x13D968u;
    {
        const bool branch_taken_0x13d968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d968) {
            ctx->pc = 0x13D96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D968u;
            // 0x13d96c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D9D4u;
            goto label_13d9d4;
        }
    }
    ctx->pc = 0x13D970u;
label_13d970:
    // 0x13d970: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x13d970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13d974:
    // 0x13d974: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
label_13d978:
    if (ctx->pc == 0x13D978u) {
        ctx->pc = 0x13D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D974u;
        // 0x13d978: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D97Cu;
        goto label_13d97c;
    }
    ctx->pc = 0x13D974u;
    {
        const bool branch_taken_0x13d974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13d974) {
            ctx->pc = 0x13D978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D974u;
            // 0x13d978: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D9D4u;
            goto label_13d9d4;
        }
    }
    ctx->pc = 0x13D97Cu;
label_13d97c:
    // 0x13d97c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d980:
    // 0x13d980: 0x27c5ebb0  addiu       $a1, $fp, -0x1450
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962096));
label_13d984:
    // 0x13d984: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13d984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d988:
    // 0x13d988: 0xc06f136  jal         func_1BC4D8
label_13d98c:
    if (ctx->pc == 0x13D98Cu) {
        ctx->pc = 0x13D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D988u;
        // 0x13d98c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D990u;
        goto label_13d990;
    }
    ctx->pc = 0x13D988u;
    SET_GPR_U32(ctx, 31, 0x13D990u);
    ctx->pc = 0x13D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D988u;
    // 0x13d98c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC4D8u, 0x13D988u, 0x13D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D990u;
label_13d990:
    // 0x13d990: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13d994:
    // 0x13d994: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x13d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
label_13d998:
    // 0x13d998: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x13d998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
label_13d99c:
    // 0x13d99c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_13d9a0:
    if (ctx->pc == 0x13D9A0u) {
        ctx->pc = 0x13D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D99Cu;
        // 0x13d9a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9A4u;
        goto label_13d9a4;
    }
    ctx->pc = 0x13D99Cu;
    {
        const bool branch_taken_0x13d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d99c) {
            ctx->pc = 0x13D9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D99Cu;
            // 0x13d9a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D9D4u;
            goto label_13d9d4;
        }
    }
    ctx->pc = 0x13D9A4u;
label_13d9a4:
    // 0x13d9a4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_13d9a8:
    // 0x13d9a8: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x13d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
label_13d9ac:
    // 0x13d9ac: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x13d9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
label_13d9b0:
    // 0x13d9b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_13d9b4:
    if (ctx->pc == 0x13D9B4u) {
        ctx->pc = 0x13D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9B0u;
        // 0x13d9b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9B8u;
        goto label_13d9b8;
    }
    ctx->pc = 0x13D9B0u;
    {
        const bool branch_taken_0x13d9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d9b0) {
            ctx->pc = 0x13D9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D9B0u;
            // 0x13d9b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D9D4u;
            goto label_13d9d4;
        }
    }
    ctx->pc = 0x13D9B8u;
label_13d9b8:
    // 0x13d9b8: 0x2933026  xor         $a2, $s4, $s3
    ctx->pc = 0x13d9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 19));
label_13d9bc:
    // 0x13d9bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d9c0:
    // 0x13d9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d9c4:
    // 0x13d9c4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x13d9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d9c8:
    // 0x13d9c8: 0x2a0f809  jalr        $s5
label_13d9cc:
    if (ctx->pc == 0x13D9CCu) {
        ctx->pc = 0x13D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9C8u;
        // 0x13d9cc: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9D0u;
        goto label_13d9d0;
    }
    ctx->pc = 0x13D9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x13D9D0u);
        ctx->pc = 0x13D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9C8u;
        // 0x13d9cc: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D9C8u, 0x13D9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D9D0u;
label_13d9d0:
    // 0x13d9d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13d9d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_13d9d4:
    // 0x13d9d4: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x13d9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
label_13d9d8:
    // 0x13d9d8: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_13d9dc:
    if (ctx->pc == 0x13D9DCu) {
        ctx->pc = 0x13D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9D8u;
        // 0x13d9dc: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9E0u;
        goto label_13d9e0;
    }
    ctx->pc = 0x13D9D8u;
    {
        const bool branch_taken_0x13d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9D8u;
        // 0x13d9dc: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9d8) {
            ctx->pc = 0x13D870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d870;
        }
    }
    ctx->pc = 0x13D9E0u;
label_13d9e0:
    // 0x13d9e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13d9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_13d9e4:
    // 0x13d9e4: 0x2a820080  slti        $v0, $s4, 0x80
    ctx->pc = 0x13d9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)128) ? 1 : 0);
label_13d9e8:
    // 0x13d9e8: 0x5440ff9f  bnel        $v0, $zero, . + 4 + (-0x61 << 2)
label_13d9ec:
    if (ctx->pc == 0x13D9ECu) {
        ctx->pc = 0x13D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9E8u;
        // 0x13d9ec: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D9F0u;
        goto label_13d9f0;
    }
    ctx->pc = 0x13D9E8u;
    {
        const bool branch_taken_0x13d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d9e8) {
            ctx->pc = 0x13D9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D9E8u;
            // 0x13d9ec: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d868;
        }
    }
    ctx->pc = 0x13D9F0u;
label_13d9f0:
    // 0x13d9f0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13d9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13d9f4:
    // 0x13d9f4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x13d9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_13d9f8:
    // 0x13d9f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x13d9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13d9fc:
    // 0x13d9fc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x13d9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_13da00:
    // 0x13da00: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13da00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13da04:
    // 0x13da04: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x13da04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_13da08:
    // 0x13da08: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13da08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13da0c:
    // 0x13da0c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x13da0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_13da10:
    // 0x13da10: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x13da10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_13da14:
    // 0x13da14: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x13da14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_13da18:
    // 0x13da18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x13da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13da1c:
    // 0x13da1c: 0x3e00008  jr          $ra
label_13da20:
    if (ctx->pc == 0x13DA20u) {
        ctx->pc = 0x13DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA1Cu;
        // 0x13da20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DA24u;
        goto label_fallthrough_0x13da1c;
    }
    ctx->pc = 0x13DA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA1Cu;
        // 0x13da20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13da1c:
    ctx->pc = 0x13DA24u;
}
