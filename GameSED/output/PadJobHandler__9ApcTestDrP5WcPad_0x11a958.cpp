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

// Function: PadJobHandler__9ApcTestDrP5WcPad
// Address: 0x11a958 - 0x11ac10
void PadJobHandler__9ApcTestDrP5WcPad_0x11a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PadJobHandler__9ApcTestDrP5WcPad_0x11a958");
#endif

    switch (ctx->pc) {
        case 0x11a958u: goto label_11a958;
        case 0x11a95cu: goto label_11a95c;
        case 0x11a960u: goto label_11a960;
        case 0x11a964u: goto label_11a964;
        case 0x11a968u: goto label_11a968;
        case 0x11a96cu: goto label_11a96c;
        case 0x11a970u: goto label_11a970;
        case 0x11a974u: goto label_11a974;
        case 0x11a978u: goto label_11a978;
        case 0x11a97cu: goto label_11a97c;
        case 0x11a980u: goto label_11a980;
        case 0x11a984u: goto label_11a984;
        case 0x11a988u: goto label_11a988;
        case 0x11a98cu: goto label_11a98c;
        case 0x11a990u: goto label_11a990;
        case 0x11a994u: goto label_11a994;
        case 0x11a998u: goto label_11a998;
        case 0x11a99cu: goto label_11a99c;
        case 0x11a9a0u: goto label_11a9a0;
        case 0x11a9a4u: goto label_11a9a4;
        case 0x11a9a8u: goto label_11a9a8;
        case 0x11a9acu: goto label_11a9ac;
        case 0x11a9b0u: goto label_11a9b0;
        case 0x11a9b4u: goto label_11a9b4;
        case 0x11a9b8u: goto label_11a9b8;
        case 0x11a9bcu: goto label_11a9bc;
        case 0x11a9c0u: goto label_11a9c0;
        case 0x11a9c4u: goto label_11a9c4;
        case 0x11a9c8u: goto label_11a9c8;
        case 0x11a9ccu: goto label_11a9cc;
        case 0x11a9d0u: goto label_11a9d0;
        case 0x11a9d4u: goto label_11a9d4;
        case 0x11a9d8u: goto label_11a9d8;
        case 0x11a9dcu: goto label_11a9dc;
        case 0x11a9e0u: goto label_11a9e0;
        case 0x11a9e4u: goto label_11a9e4;
        case 0x11a9e8u: goto label_11a9e8;
        case 0x11a9ecu: goto label_11a9ec;
        case 0x11a9f0u: goto label_11a9f0;
        case 0x11a9f4u: goto label_11a9f4;
        case 0x11a9f8u: goto label_11a9f8;
        case 0x11a9fcu: goto label_11a9fc;
        case 0x11aa00u: goto label_11aa00;
        case 0x11aa04u: goto label_11aa04;
        case 0x11aa08u: goto label_11aa08;
        case 0x11aa0cu: goto label_11aa0c;
        case 0x11aa10u: goto label_11aa10;
        case 0x11aa14u: goto label_11aa14;
        case 0x11aa18u: goto label_11aa18;
        case 0x11aa1cu: goto label_11aa1c;
        case 0x11aa20u: goto label_11aa20;
        case 0x11aa24u: goto label_11aa24;
        case 0x11aa28u: goto label_11aa28;
        case 0x11aa2cu: goto label_11aa2c;
        case 0x11aa30u: goto label_11aa30;
        case 0x11aa34u: goto label_11aa34;
        case 0x11aa38u: goto label_11aa38;
        case 0x11aa3cu: goto label_11aa3c;
        case 0x11aa40u: goto label_11aa40;
        case 0x11aa44u: goto label_11aa44;
        case 0x11aa48u: goto label_11aa48;
        case 0x11aa4cu: goto label_11aa4c;
        case 0x11aa50u: goto label_11aa50;
        case 0x11aa54u: goto label_11aa54;
        case 0x11aa58u: goto label_11aa58;
        case 0x11aa5cu: goto label_11aa5c;
        case 0x11aa60u: goto label_11aa60;
        case 0x11aa64u: goto label_11aa64;
        case 0x11aa68u: goto label_11aa68;
        case 0x11aa6cu: goto label_11aa6c;
        case 0x11aa70u: goto label_11aa70;
        case 0x11aa74u: goto label_11aa74;
        case 0x11aa78u: goto label_11aa78;
        case 0x11aa7cu: goto label_11aa7c;
        case 0x11aa80u: goto label_11aa80;
        case 0x11aa84u: goto label_11aa84;
        case 0x11aa88u: goto label_11aa88;
        case 0x11aa8cu: goto label_11aa8c;
        case 0x11aa90u: goto label_11aa90;
        case 0x11aa94u: goto label_11aa94;
        case 0x11aa98u: goto label_11aa98;
        case 0x11aa9cu: goto label_11aa9c;
        case 0x11aaa0u: goto label_11aaa0;
        case 0x11aaa4u: goto label_11aaa4;
        case 0x11aaa8u: goto label_11aaa8;
        case 0x11aaacu: goto label_11aaac;
        case 0x11aab0u: goto label_11aab0;
        case 0x11aab4u: goto label_11aab4;
        case 0x11aab8u: goto label_11aab8;
        case 0x11aabcu: goto label_11aabc;
        case 0x11aac0u: goto label_11aac0;
        case 0x11aac4u: goto label_11aac4;
        case 0x11aac8u: goto label_11aac8;
        case 0x11aaccu: goto label_11aacc;
        case 0x11aad0u: goto label_11aad0;
        case 0x11aad4u: goto label_11aad4;
        case 0x11aad8u: goto label_11aad8;
        case 0x11aadcu: goto label_11aadc;
        case 0x11aae0u: goto label_11aae0;
        case 0x11aae4u: goto label_11aae4;
        case 0x11aae8u: goto label_11aae8;
        case 0x11aaecu: goto label_11aaec;
        case 0x11aaf0u: goto label_11aaf0;
        case 0x11aaf4u: goto label_11aaf4;
        case 0x11aaf8u: goto label_11aaf8;
        case 0x11aafcu: goto label_11aafc;
        case 0x11ab00u: goto label_11ab00;
        case 0x11ab04u: goto label_11ab04;
        case 0x11ab08u: goto label_11ab08;
        case 0x11ab0cu: goto label_11ab0c;
        case 0x11ab10u: goto label_11ab10;
        case 0x11ab14u: goto label_11ab14;
        case 0x11ab18u: goto label_11ab18;
        case 0x11ab1cu: goto label_11ab1c;
        case 0x11ab20u: goto label_11ab20;
        case 0x11ab24u: goto label_11ab24;
        case 0x11ab28u: goto label_11ab28;
        case 0x11ab2cu: goto label_11ab2c;
        case 0x11ab30u: goto label_11ab30;
        case 0x11ab34u: goto label_11ab34;
        case 0x11ab38u: goto label_11ab38;
        case 0x11ab3cu: goto label_11ab3c;
        case 0x11ab40u: goto label_11ab40;
        case 0x11ab44u: goto label_11ab44;
        case 0x11ab48u: goto label_11ab48;
        case 0x11ab4cu: goto label_11ab4c;
        case 0x11ab50u: goto label_11ab50;
        case 0x11ab54u: goto label_11ab54;
        case 0x11ab58u: goto label_11ab58;
        case 0x11ab5cu: goto label_11ab5c;
        case 0x11ab60u: goto label_11ab60;
        case 0x11ab64u: goto label_11ab64;
        case 0x11ab68u: goto label_11ab68;
        case 0x11ab6cu: goto label_11ab6c;
        case 0x11ab70u: goto label_11ab70;
        case 0x11ab74u: goto label_11ab74;
        case 0x11ab78u: goto label_11ab78;
        case 0x11ab7cu: goto label_11ab7c;
        case 0x11ab80u: goto label_11ab80;
        case 0x11ab84u: goto label_11ab84;
        case 0x11ab88u: goto label_11ab88;
        case 0x11ab8cu: goto label_11ab8c;
        case 0x11ab90u: goto label_11ab90;
        case 0x11ab94u: goto label_11ab94;
        case 0x11ab98u: goto label_11ab98;
        case 0x11ab9cu: goto label_11ab9c;
        case 0x11aba0u: goto label_11aba0;
        case 0x11aba4u: goto label_11aba4;
        case 0x11aba8u: goto label_11aba8;
        case 0x11abacu: goto label_11abac;
        case 0x11abb0u: goto label_11abb0;
        case 0x11abb4u: goto label_11abb4;
        case 0x11abb8u: goto label_11abb8;
        case 0x11abbcu: goto label_11abbc;
        case 0x11abc0u: goto label_11abc0;
        case 0x11abc4u: goto label_11abc4;
        case 0x11abc8u: goto label_11abc8;
        case 0x11abccu: goto label_11abcc;
        case 0x11abd0u: goto label_11abd0;
        case 0x11abd4u: goto label_11abd4;
        case 0x11abd8u: goto label_11abd8;
        case 0x11abdcu: goto label_11abdc;
        case 0x11abe0u: goto label_11abe0;
        case 0x11abe4u: goto label_11abe4;
        case 0x11abe8u: goto label_11abe8;
        case 0x11abecu: goto label_11abec;
        case 0x11abf0u: goto label_11abf0;
        case 0x11abf4u: goto label_11abf4;
        case 0x11abf8u: goto label_11abf8;
        case 0x11abfcu: goto label_11abfc;
        case 0x11ac00u: goto label_11ac00;
        case 0x11ac04u: goto label_11ac04;
        case 0x11ac08u: goto label_11ac08;
        case 0x11ac0cu: goto label_11ac0c;
        default: break;
    }

    ctx->pc = 0x11a958u;

label_11a958:
    // 0x11a958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_11a95c:
    // 0x11a95c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_11a960:
    // 0x11a960: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11a960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a964:
    // 0x11a964: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_11a968:
    // 0x11a968: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11a968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11a96c:
    // 0x11a96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11a970:
    // 0x11a970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_11a974:
    // 0x11a974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_11a978:
    // 0x11a978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_11a97c:
    // 0x11a97c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11a980:
    // 0x11a980: 0xe7b70050  swc1        $f23, 0x50($sp)
    ctx->pc = 0x11a980u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11a984:
    // 0x11a984: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x11a984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_11a988:
    // 0x11a988: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x11a988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11a98c:
    // 0x11a98c: 0xc06665c  jal         func_199970
label_11a990:
    if (ctx->pc == 0x11A990u) {
        ctx->pc = 0x11A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A98Cu;
        // 0x11a990: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A994u;
        goto label_11a994;
    }
    ctx->pc = 0x11A98Cu;
    SET_GPR_U32(ctx, 31, 0x11A994u);
    ctx->pc = 0x11A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A98Cu;
    // 0x11a990: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x199970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199970u, 0x11A98Cu, 0x11A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A994u;
label_11a994:
    // 0x11a994: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x11a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_11a998:
    // 0x11a998: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11a998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11a99c:
    // 0x11a99c: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
label_11a9a0:
    if (ctx->pc == 0x11A9A0u) {
        ctx->pc = 0x11A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A99Cu;
        // 0x11a9a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A9A4u;
        goto label_11a9a4;
    }
    ctx->pc = 0x11A99Cu;
    {
        const bool branch_taken_0x11a99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A99Cu;
        // 0x11a9a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a99c) {
            ctx->pc = 0x11ABE0u;
            goto label_11abe0;
        }
    }
    ctx->pc = 0x11A9A4u;
label_11a9a4:
    // 0x11a9a4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11a9a8:
    // 0x11a9a8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_11a9ac:
    // 0x11a9ac: 0x24523640  addiu       $s2, $v0, 0x3640
    ctx->pc = 0x11a9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13888));
label_11a9b0:
    // 0x11a9b0: 0x24713620  addiu       $s1, $v1, 0x3620
    ctx->pc = 0x11a9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_11a9b4:
    // 0x11a9b4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x11a9b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_11a9b8:
    // 0x11a9b8: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x11a9b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_11a9bc:
    // 0x11a9bc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11a9bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a9c0:
    // 0x11a9c0: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x11a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_11a9c4:
    // 0x11a9c4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11a9c8:
    // 0x11a9c8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_11a9cc:
    // 0x11a9cc: 0x24533650  addiu       $s3, $v0, 0x3650
    ctx->pc = 0x11a9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
label_11a9d0:
    // 0x11a9d0: 0x24703630  addiu       $s0, $v1, 0x3630
    ctx->pc = 0x11a9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13872));
label_11a9d4:
    // 0x11a9d4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x11a9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_11a9d8:
    // 0x11a9d8: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x11a9d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_11a9dc:
    // 0x11a9dc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11a9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11a9e0:
    // 0x11a9e0: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x11a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_11a9e4:
    // 0x11a9e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x11a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a9e8:
    // 0x11a9e8: 0x3c01c3a0  lui         $at, 0xC3A0
    ctx->pc = 0x11a9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50080 << 16));
label_11a9ec:
    // 0x11a9ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11a9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11a9f0:
    // 0x11a9f0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x11a9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a9f4:
    // 0x11a9f4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_11a9f8:
    if (ctx->pc == 0x11A9F8u) {
        ctx->pc = 0x11A9FCu;
        goto label_11a9fc;
    }
    ctx->pc = 0x11A9F4u;
    {
        const bool branch_taken_0x11a9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a9f4) {
            ctx->pc = 0x11AA1Cu;
            goto label_11aa1c;
        }
    }
    ctx->pc = 0x11A9FCu;
label_11a9fc:
    // 0x11a9fc: 0xc066f2c  jal         func_19BCB0
label_11aa00:
    if (ctx->pc == 0x11AA00u) {
        ctx->pc = 0x11AA04u;
        goto label_11aa04;
    }
    ctx->pc = 0x11A9FCu;
    SET_GPR_U32(ctx, 31, 0x11AA04u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11A9FCu, 0x11AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA04u;
label_11aa04:
    // 0x11aa04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11aa08:
    // 0x11aa08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11aa0c:
    // 0x11aa0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11aa10:
    // 0x11aa10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11aa10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11aa14:
    // 0x11aa14: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x11aa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_11aa18:
    // 0x11aa18: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x11aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11aa1c:
    // 0x11aa1c: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x11aa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
label_11aa20:
    // 0x11aa20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x11aa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_11aa24:
    // 0x11aa24: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x11aa24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11aa28:
    // 0x11aa28: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_11aa2c:
    if (ctx->pc == 0x11AA2Cu) {
        ctx->pc = 0x11AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA28u;
        // 0x11aa2c: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AA30u;
        goto label_11aa30;
    }
    ctx->pc = 0x11AA28u;
    {
        const bool branch_taken_0x11aa28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa28) {
            ctx->pc = 0x11AA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA28u;
            // 0x11aa2c: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AA54u;
            goto label_11aa54;
        }
    }
    ctx->pc = 0x11AA30u;
label_11aa30:
    // 0x11aa30: 0xc066f2c  jal         func_19BCB0
label_11aa34:
    if (ctx->pc == 0x11AA34u) {
        ctx->pc = 0x11AA38u;
        goto label_11aa38;
    }
    ctx->pc = 0x11AA30u;
    SET_GPR_U32(ctx, 31, 0x11AA38u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AA30u, 0x11AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA38u;
label_11aa38:
    // 0x11aa38: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11aa3c:
    // 0x11aa3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11aa40:
    // 0x11aa40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11aa40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11aa44:
    // 0x11aa44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11aa48:
    // 0x11aa48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11aa48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11aa4c:
    // 0x11aa4c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x11aa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_11aa50:
    // 0x11aa50: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11aa54:
    // 0x11aa54: 0x3c01c370  lui         $at, 0xC370
    ctx->pc = 0x11aa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50032 << 16));
label_11aa58:
    // 0x11aa58: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x11aa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11aa5c:
    // 0x11aa5c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x11aa5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11aa60:
    // 0x11aa60: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_11aa64:
    if (ctx->pc == 0x11AA64u) {
        ctx->pc = 0x11AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA60u;
        // 0x11aa64: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AA68u;
        goto label_11aa68;
    }
    ctx->pc = 0x11AA60u;
    {
        const bool branch_taken_0x11aa60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa60) {
            ctx->pc = 0x11AA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA60u;
            // 0x11aa64: 0xc6200004  lwc1        $f0, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AA88u;
            goto label_11aa88;
        }
    }
    ctx->pc = 0x11AA68u;
label_11aa68:
    // 0x11aa68: 0xc066f2c  jal         func_19BCB0
label_11aa6c:
    if (ctx->pc == 0x11AA6Cu) {
        ctx->pc = 0x11AA70u;
        goto label_11aa70;
    }
    ctx->pc = 0x11AA68u;
    SET_GPR_U32(ctx, 31, 0x11AA70u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AA68u, 0x11AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA70u;
label_11aa70:
    // 0x11aa70: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11aa74:
    // 0x11aa74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11aa78:
    // 0x11aa78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11aa7c:
    // 0x11aa7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11aa7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11aa80:
    // 0x11aa80: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x11aa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_11aa84:
    // 0x11aa84: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11aa88:
    // 0x11aa88: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
label_11aa8c:
    // 0x11aa8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11aa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11aa90:
    // 0x11aa90: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x11aa90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11aa94:
    // 0x11aa94: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_11aa98:
    if (ctx->pc == 0x11AA98u) {
        ctx->pc = 0x11AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA94u;
        // 0x11aa98: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AA9Cu;
        goto label_11aa9c;
    }
    ctx->pc = 0x11AA94u;
    {
        const bool branch_taken_0x11aa94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aa94) {
            ctx->pc = 0x11AA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AA94u;
            // 0x11aa98: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AAC0u;
            goto label_11aac0;
        }
    }
    ctx->pc = 0x11AA9Cu;
label_11aa9c:
    // 0x11aa9c: 0xc066f2c  jal         func_19BCB0
label_11aaa0:
    if (ctx->pc == 0x11AAA0u) {
        ctx->pc = 0x11AAA4u;
        goto label_11aaa4;
    }
    ctx->pc = 0x11AA9Cu;
    SET_GPR_U32(ctx, 31, 0x11AAA4u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AA9Cu, 0x11AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAA4u;
label_11aaa4:
    // 0x11aaa4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11aaa8:
    // 0x11aaa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11aaac:
    // 0x11aaac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11aaacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11aab0:
    // 0x11aab0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11aab4:
    // 0x11aab4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11aab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11aab8:
    // 0x11aab8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x11aab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_11aabc:
    // 0x11aabc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11aac0:
    // 0x11aac0: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x11aac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11aac4:
    // 0x11aac4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_11aac8:
    if (ctx->pc == 0x11AAC8u) {
        ctx->pc = 0x11AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAC4u;
        // 0x11aac8: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AACCu;
        goto label_11aacc;
    }
    ctx->pc = 0x11AAC4u;
    {
        const bool branch_taken_0x11aac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aac4) {
            ctx->pc = 0x11AAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAC4u;
            // 0x11aac8: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AAECu;
            goto label_11aaec;
        }
    }
    ctx->pc = 0x11AACCu;
label_11aacc:
    // 0x11aacc: 0xc066f2c  jal         func_19BCB0
label_11aad0:
    if (ctx->pc == 0x11AAD0u) {
        ctx->pc = 0x11AAD4u;
        goto label_11aad4;
    }
    ctx->pc = 0x11AACCu;
    SET_GPR_U32(ctx, 31, 0x11AAD4u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AACCu, 0x11AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAD4u;
label_11aad4:
    // 0x11aad4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11aad8:
    // 0x11aad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11aadc:
    // 0x11aadc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11aae0:
    // 0x11aae0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11aae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11aae4:
    // 0x11aae4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x11aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_11aae8:
    // 0x11aae8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11aaec:
    // 0x11aaec: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x11aaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11aaf0:
    // 0x11aaf0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_11aaf4:
    if (ctx->pc == 0x11AAF4u) {
        ctx->pc = 0x11AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF0u;
        // 0x11aaf4: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AAF8u;
        goto label_11aaf8;
    }
    ctx->pc = 0x11AAF0u;
    {
        const bool branch_taken_0x11aaf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11aaf0) {
            ctx->pc = 0x11AAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAF0u;
            // 0x11aaf4: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB1Cu;
            goto label_11ab1c;
        }
    }
    ctx->pc = 0x11AAF8u;
label_11aaf8:
    // 0x11aaf8: 0xc066f2c  jal         func_19BCB0
label_11aafc:
    if (ctx->pc == 0x11AAFCu) {
        ctx->pc = 0x11AB00u;
        goto label_11ab00;
    }
    ctx->pc = 0x11AAF8u;
    SET_GPR_U32(ctx, 31, 0x11AB00u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AAF8u, 0x11AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB00u;
label_11ab00:
    // 0x11ab00: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11ab04:
    // 0x11ab04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11ab08:
    // 0x11ab08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11ab08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11ab0c:
    // 0x11ab0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ab0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11ab10:
    // 0x11ab10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ab10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11ab14:
    // 0x11ab14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x11ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_11ab18:
    // 0x11ab18: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ab1c:
    // 0x11ab1c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x11ab1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ab20:
    // 0x11ab20: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_11ab24:
    if (ctx->pc == 0x11AB24u) {
        ctx->pc = 0x11AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB20u;
        // 0x11ab24: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB28u;
        goto label_11ab28;
    }
    ctx->pc = 0x11AB20u;
    {
        const bool branch_taken_0x11ab20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ab20) {
            ctx->pc = 0x11AB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AB20u;
            // 0x11ab24: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB48u;
            goto label_11ab48;
        }
    }
    ctx->pc = 0x11AB28u;
label_11ab28:
    // 0x11ab28: 0xc066f2c  jal         func_19BCB0
label_11ab2c:
    if (ctx->pc == 0x11AB2Cu) {
        ctx->pc = 0x11AB30u;
        goto label_11ab30;
    }
    ctx->pc = 0x11AB28u;
    SET_GPR_U32(ctx, 31, 0x11AB30u);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AB28u, 0x11AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB30u;
label_11ab30:
    // 0x11ab30: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11ab34:
    // 0x11ab34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ab34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11ab38:
    // 0x11ab38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ab38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11ab3c:
    // 0x11ab3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ab3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_11ab40:
    // 0x11ab40: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x11ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_11ab44:
    // 0x11ab44: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11ab48:
    // 0x11ab48: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x11ab48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11ab4c:
    // 0x11ab4c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_11ab50:
    if (ctx->pc == 0x11AB50u) {
        ctx->pc = 0x11AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB4Cu;
        // 0x11ab50: 0x8f848978  lw          $a0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB54u;
        goto label_11ab54;
    }
    ctx->pc = 0x11AB4Cu;
    {
        const bool branch_taken_0x11ab4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB4Cu;
        // 0x11ab50: 0x8f848978  lw          $a0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab4c) {
            ctx->pc = 0x11AB78u;
            goto label_11ab78;
        }
    }
    ctx->pc = 0x11AB54u;
label_11ab54:
    // 0x11ab54: 0xc066f2c  jal         func_19BCB0
label_11ab58:
    if (ctx->pc == 0x11AB58u) {
        ctx->pc = 0x11AB5Cu;
        goto label_11ab5c;
    }
    ctx->pc = 0x11AB54u;
    SET_GPR_U32(ctx, 31, 0x11AB5Cu);
    ctx->pc = 0x19BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCB0u, 0x11AB54u, 0x11AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB5Cu;
label_11ab5c:
    // 0x11ab5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_11ab60:
    // 0x11ab60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ab60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11ab64:
    // 0x11ab64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11ab64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11ab68:
    // 0x11ab68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ab68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11ab6c:
    // 0x11ab6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ab6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11ab70:
    // 0x11ab70: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x11ab70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_11ab74:
    // 0x11ab74: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x11ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11ab78:
    // 0x11ab78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11ab78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11ab7c:
    // 0x11ab7c: 0xc0640ca  jal         func_190328
label_11ab80:
    if (ctx->pc == 0x11AB80u) {
        ctx->pc = 0x11AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB7Cu;
        // 0x11ab80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB84u;
        goto label_11ab84;
    }
    ctx->pc = 0x11AB7Cu;
    SET_GPR_U32(ctx, 31, 0x11AB84u);
    ctx->pc = 0x11AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB7Cu;
    // 0x11ab80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11AB7Cu, 0x11AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB84u;
label_11ab84:
    // 0x11ab84: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x11ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11ab88:
    // 0x11ab88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ab88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ab8c:
    // 0x11ab8c: 0xc0640ca  jal         func_190328
label_11ab90:
    if (ctx->pc == 0x11AB90u) {
        ctx->pc = 0x11AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB8Cu;
        // 0x11ab90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AB94u;
        goto label_11ab94;
    }
    ctx->pc = 0x11AB8Cu;
    SET_GPR_U32(ctx, 31, 0x11AB94u);
    ctx->pc = 0x11AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB8Cu;
    // 0x11ab90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11AB8Cu, 0x11AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB94u;
label_11ab94:
    // 0x11ab94: 0x96b00020  lhu         $s0, 0x20($s5)
    ctx->pc = 0x11ab94u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
label_11ab98:
    // 0x11ab98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ab9c:
    // 0x11ab9c: 0xc05be74  jal         func_16F9D0
label_11aba0:
    if (ctx->pc == 0x11ABA0u) {
        ctx->pc = 0x11ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB9Cu;
        // 0x11aba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABA4u;
        goto label_11aba4;
    }
    ctx->pc = 0x11AB9Cu;
    SET_GPR_U32(ctx, 31, 0x11ABA4u);
    ctx->pc = 0x11ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB9Cu;
    // 0x11aba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x11AB9Cu, 0x11ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABA4u;
label_11aba4:
    // 0x11aba4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x11aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_11aba8:
    // 0x11aba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11aba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11abac:
    // 0x11abac: 0x32100900  andi        $s0, $s0, 0x900
    ctx->pc = 0x11abacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2304);
label_11abb0:
    // 0x11abb0: 0xc05bca8  jal         func_16F2A0
label_11abb4:
    if (ctx->pc == 0x11ABB4u) {
        ctx->pc = 0x11ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABB0u;
        // 0x11abb4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABB8u;
        goto label_11abb8;
    }
    ctx->pc = 0x11ABB0u;
    SET_GPR_U32(ctx, 31, 0x11ABB8u);
    ctx->pc = 0x11ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABB0u;
    // 0x11abb4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x11ABB0u, 0x11ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABB8u;
label_11abb8:
    // 0x11abb8: 0x24020900  addiu       $v0, $zero, 0x900
    ctx->pc = 0x11abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
label_11abbc:
    // 0x11abbc: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
label_11abc0:
    if (ctx->pc == 0x11ABC0u) {
        ctx->pc = 0x11ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABBCu;
        // 0x11abc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABC4u;
        goto label_11abc4;
    }
    ctx->pc = 0x11ABBCu;
    {
        const bool branch_taken_0x11abbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11abbc) {
            ctx->pc = 0x11ABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ABBCu;
            // 0x11abc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ABE0u;
            goto label_11abe0;
        }
    }
    ctx->pc = 0x11ABC4u;
label_11abc4:
    // 0x11abc4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x11abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_11abc8:
    // 0x11abc8: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11abcc:
    // 0x11abcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11abccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11abd0:
    // 0x11abd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11abd4:
    // 0x11abd4: 0x60f809  jalr        $v1
label_11abd8:
    if (ctx->pc == 0x11ABD8u) {
        ctx->pc = 0x11ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD4u;
        // 0x11abd8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ABDCu;
        goto label_11abdc;
    }
    ctx->pc = 0x11ABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11ABDCu);
        ctx->pc = 0x11ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABD4u;
        // 0x11abd8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABD4u, 0x11ABDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ABDCu;
label_11abdc:
    // 0x11abdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11abdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11abe0:
    // 0x11abe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11abe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11abe4:
    // 0x11abe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11abe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11abe8:
    // 0x11abe8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11abe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11abec:
    // 0x11abec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11abecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11abf0:
    // 0x11abf0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_11abf4:
    // 0x11abf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11abf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11abf8:
    // 0x11abf8: 0xc7b70050  lwc1        $f23, 0x50($sp)
    ctx->pc = 0x11abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11abfc:
    // 0x11abfc: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x11abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11ac00:
    // 0x11ac00: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x11ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11ac04:
    // 0x11ac04: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x11ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11ac08:
    // 0x11ac08: 0x3e00008  jr          $ra
label_11ac0c:
    if (ctx->pc == 0x11AC0Cu) {
        ctx->pc = 0x11AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC08u;
        // 0x11ac0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AC10u;
        goto label_fallthrough_0x11ac08;
    }
    ctx->pc = 0x11AC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC08u;
        // 0x11ac0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11ac08:
    ctx->pc = 0x11AC10u;
}
