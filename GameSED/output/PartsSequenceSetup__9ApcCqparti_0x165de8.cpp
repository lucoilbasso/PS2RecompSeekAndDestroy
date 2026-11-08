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

// Function: PartsSequenceSetup__9ApcCqparti
// Address: 0x165de8 - 0x166244
void PartsSequenceSetup__9ApcCqparti_0x165de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsSequenceSetup__9ApcCqparti_0x165de8");
#endif

    switch (ctx->pc) {
        case 0x165de8u: goto label_165de8;
        case 0x165decu: goto label_165dec;
        case 0x165df0u: goto label_165df0;
        case 0x165df4u: goto label_165df4;
        case 0x165df8u: goto label_165df8;
        case 0x165dfcu: goto label_165dfc;
        case 0x165e00u: goto label_165e00;
        case 0x165e04u: goto label_165e04;
        case 0x165e08u: goto label_165e08;
        case 0x165e0cu: goto label_165e0c;
        case 0x165e10u: goto label_165e10;
        case 0x165e14u: goto label_165e14;
        case 0x165e18u: goto label_165e18;
        case 0x165e1cu: goto label_165e1c;
        case 0x165e20u: goto label_165e20;
        case 0x165e24u: goto label_165e24;
        case 0x165e28u: goto label_165e28;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e30u: goto label_165e30;
        case 0x165e34u: goto label_165e34;
        case 0x165e38u: goto label_165e38;
        case 0x165e3cu: goto label_165e3c;
        case 0x165e40u: goto label_165e40;
        case 0x165e44u: goto label_165e44;
        case 0x165e48u: goto label_165e48;
        case 0x165e4cu: goto label_165e4c;
        case 0x165e50u: goto label_165e50;
        case 0x165e54u: goto label_165e54;
        case 0x165e58u: goto label_165e58;
        case 0x165e5cu: goto label_165e5c;
        case 0x165e60u: goto label_165e60;
        case 0x165e64u: goto label_165e64;
        case 0x165e68u: goto label_165e68;
        case 0x165e6cu: goto label_165e6c;
        case 0x165e70u: goto label_165e70;
        case 0x165e74u: goto label_165e74;
        case 0x165e78u: goto label_165e78;
        case 0x165e7cu: goto label_165e7c;
        case 0x165e80u: goto label_165e80;
        case 0x165e84u: goto label_165e84;
        case 0x165e88u: goto label_165e88;
        case 0x165e8cu: goto label_165e8c;
        case 0x165e90u: goto label_165e90;
        case 0x165e94u: goto label_165e94;
        case 0x165e98u: goto label_165e98;
        case 0x165e9cu: goto label_165e9c;
        case 0x165ea0u: goto label_165ea0;
        case 0x165ea4u: goto label_165ea4;
        case 0x165ea8u: goto label_165ea8;
        case 0x165eacu: goto label_165eac;
        case 0x165eb0u: goto label_165eb0;
        case 0x165eb4u: goto label_165eb4;
        case 0x165eb8u: goto label_165eb8;
        case 0x165ebcu: goto label_165ebc;
        case 0x165ec0u: goto label_165ec0;
        case 0x165ec4u: goto label_165ec4;
        case 0x165ec8u: goto label_165ec8;
        case 0x165eccu: goto label_165ecc;
        case 0x165ed0u: goto label_165ed0;
        case 0x165ed4u: goto label_165ed4;
        case 0x165ed8u: goto label_165ed8;
        case 0x165edcu: goto label_165edc;
        case 0x165ee0u: goto label_165ee0;
        case 0x165ee4u: goto label_165ee4;
        case 0x165ee8u: goto label_165ee8;
        case 0x165eecu: goto label_165eec;
        case 0x165ef0u: goto label_165ef0;
        case 0x165ef4u: goto label_165ef4;
        case 0x165ef8u: goto label_165ef8;
        case 0x165efcu: goto label_165efc;
        case 0x165f00u: goto label_165f00;
        case 0x165f04u: goto label_165f04;
        case 0x165f08u: goto label_165f08;
        case 0x165f0cu: goto label_165f0c;
        case 0x165f10u: goto label_165f10;
        case 0x165f14u: goto label_165f14;
        case 0x165f18u: goto label_165f18;
        case 0x165f1cu: goto label_165f1c;
        case 0x165f20u: goto label_165f20;
        case 0x165f24u: goto label_165f24;
        case 0x165f28u: goto label_165f28;
        case 0x165f2cu: goto label_165f2c;
        case 0x165f30u: goto label_165f30;
        case 0x165f34u: goto label_165f34;
        case 0x165f38u: goto label_165f38;
        case 0x165f3cu: goto label_165f3c;
        case 0x165f40u: goto label_165f40;
        case 0x165f44u: goto label_165f44;
        case 0x165f48u: goto label_165f48;
        case 0x165f4cu: goto label_165f4c;
        case 0x165f50u: goto label_165f50;
        case 0x165f54u: goto label_165f54;
        case 0x165f58u: goto label_165f58;
        case 0x165f5cu: goto label_165f5c;
        case 0x165f60u: goto label_165f60;
        case 0x165f64u: goto label_165f64;
        case 0x165f68u: goto label_165f68;
        case 0x165f6cu: goto label_165f6c;
        case 0x165f70u: goto label_165f70;
        case 0x165f74u: goto label_165f74;
        case 0x165f78u: goto label_165f78;
        case 0x165f7cu: goto label_165f7c;
        case 0x165f80u: goto label_165f80;
        case 0x165f84u: goto label_165f84;
        case 0x165f88u: goto label_165f88;
        case 0x165f8cu: goto label_165f8c;
        case 0x165f90u: goto label_165f90;
        case 0x165f94u: goto label_165f94;
        case 0x165f98u: goto label_165f98;
        case 0x165f9cu: goto label_165f9c;
        case 0x165fa0u: goto label_165fa0;
        case 0x165fa4u: goto label_165fa4;
        case 0x165fa8u: goto label_165fa8;
        case 0x165facu: goto label_165fac;
        case 0x165fb0u: goto label_165fb0;
        case 0x165fb4u: goto label_165fb4;
        case 0x165fb8u: goto label_165fb8;
        case 0x165fbcu: goto label_165fbc;
        case 0x165fc0u: goto label_165fc0;
        case 0x165fc4u: goto label_165fc4;
        case 0x165fc8u: goto label_165fc8;
        case 0x165fccu: goto label_165fcc;
        case 0x165fd0u: goto label_165fd0;
        case 0x165fd4u: goto label_165fd4;
        case 0x165fd8u: goto label_165fd8;
        case 0x165fdcu: goto label_165fdc;
        case 0x165fe0u: goto label_165fe0;
        case 0x165fe4u: goto label_165fe4;
        case 0x165fe8u: goto label_165fe8;
        case 0x165fecu: goto label_165fec;
        case 0x165ff0u: goto label_165ff0;
        case 0x165ff4u: goto label_165ff4;
        case 0x165ff8u: goto label_165ff8;
        case 0x165ffcu: goto label_165ffc;
        case 0x166000u: goto label_166000;
        case 0x166004u: goto label_166004;
        case 0x166008u: goto label_166008;
        case 0x16600cu: goto label_16600c;
        case 0x166010u: goto label_166010;
        case 0x166014u: goto label_166014;
        case 0x166018u: goto label_166018;
        case 0x16601cu: goto label_16601c;
        case 0x166020u: goto label_166020;
        case 0x166024u: goto label_166024;
        case 0x166028u: goto label_166028;
        case 0x16602cu: goto label_16602c;
        case 0x166030u: goto label_166030;
        case 0x166034u: goto label_166034;
        case 0x166038u: goto label_166038;
        case 0x16603cu: goto label_16603c;
        case 0x166040u: goto label_166040;
        case 0x166044u: goto label_166044;
        case 0x166048u: goto label_166048;
        case 0x16604cu: goto label_16604c;
        case 0x166050u: goto label_166050;
        case 0x166054u: goto label_166054;
        case 0x166058u: goto label_166058;
        case 0x16605cu: goto label_16605c;
        case 0x166060u: goto label_166060;
        case 0x166064u: goto label_166064;
        case 0x166068u: goto label_166068;
        case 0x16606cu: goto label_16606c;
        case 0x166070u: goto label_166070;
        case 0x166074u: goto label_166074;
        case 0x166078u: goto label_166078;
        case 0x16607cu: goto label_16607c;
        case 0x166080u: goto label_166080;
        case 0x166084u: goto label_166084;
        case 0x166088u: goto label_166088;
        case 0x16608cu: goto label_16608c;
        case 0x166090u: goto label_166090;
        case 0x166094u: goto label_166094;
        case 0x166098u: goto label_166098;
        case 0x16609cu: goto label_16609c;
        case 0x1660a0u: goto label_1660a0;
        case 0x1660a4u: goto label_1660a4;
        case 0x1660a8u: goto label_1660a8;
        case 0x1660acu: goto label_1660ac;
        case 0x1660b0u: goto label_1660b0;
        case 0x1660b4u: goto label_1660b4;
        case 0x1660b8u: goto label_1660b8;
        case 0x1660bcu: goto label_1660bc;
        case 0x1660c0u: goto label_1660c0;
        case 0x1660c4u: goto label_1660c4;
        case 0x1660c8u: goto label_1660c8;
        case 0x1660ccu: goto label_1660cc;
        case 0x1660d0u: goto label_1660d0;
        case 0x1660d4u: goto label_1660d4;
        case 0x1660d8u: goto label_1660d8;
        case 0x1660dcu: goto label_1660dc;
        case 0x1660e0u: goto label_1660e0;
        case 0x1660e4u: goto label_1660e4;
        case 0x1660e8u: goto label_1660e8;
        case 0x1660ecu: goto label_1660ec;
        case 0x1660f0u: goto label_1660f0;
        case 0x1660f4u: goto label_1660f4;
        case 0x1660f8u: goto label_1660f8;
        case 0x1660fcu: goto label_1660fc;
        case 0x166100u: goto label_166100;
        case 0x166104u: goto label_166104;
        case 0x166108u: goto label_166108;
        case 0x16610cu: goto label_16610c;
        case 0x166110u: goto label_166110;
        case 0x166114u: goto label_166114;
        case 0x166118u: goto label_166118;
        case 0x16611cu: goto label_16611c;
        case 0x166120u: goto label_166120;
        case 0x166124u: goto label_166124;
        case 0x166128u: goto label_166128;
        case 0x16612cu: goto label_16612c;
        case 0x166130u: goto label_166130;
        case 0x166134u: goto label_166134;
        case 0x166138u: goto label_166138;
        case 0x16613cu: goto label_16613c;
        case 0x166140u: goto label_166140;
        case 0x166144u: goto label_166144;
        case 0x166148u: goto label_166148;
        case 0x16614cu: goto label_16614c;
        case 0x166150u: goto label_166150;
        case 0x166154u: goto label_166154;
        case 0x166158u: goto label_166158;
        case 0x16615cu: goto label_16615c;
        case 0x166160u: goto label_166160;
        case 0x166164u: goto label_166164;
        case 0x166168u: goto label_166168;
        case 0x16616cu: goto label_16616c;
        case 0x166170u: goto label_166170;
        case 0x166174u: goto label_166174;
        case 0x166178u: goto label_166178;
        case 0x16617cu: goto label_16617c;
        case 0x166180u: goto label_166180;
        case 0x166184u: goto label_166184;
        case 0x166188u: goto label_166188;
        case 0x16618cu: goto label_16618c;
        case 0x166190u: goto label_166190;
        case 0x166194u: goto label_166194;
        case 0x166198u: goto label_166198;
        case 0x16619cu: goto label_16619c;
        case 0x1661a0u: goto label_1661a0;
        case 0x1661a4u: goto label_1661a4;
        case 0x1661a8u: goto label_1661a8;
        case 0x1661acu: goto label_1661ac;
        case 0x1661b0u: goto label_1661b0;
        case 0x1661b4u: goto label_1661b4;
        case 0x1661b8u: goto label_1661b8;
        case 0x1661bcu: goto label_1661bc;
        case 0x1661c0u: goto label_1661c0;
        case 0x1661c4u: goto label_1661c4;
        case 0x1661c8u: goto label_1661c8;
        case 0x1661ccu: goto label_1661cc;
        case 0x1661d0u: goto label_1661d0;
        case 0x1661d4u: goto label_1661d4;
        case 0x1661d8u: goto label_1661d8;
        case 0x1661dcu: goto label_1661dc;
        case 0x1661e0u: goto label_1661e0;
        case 0x1661e4u: goto label_1661e4;
        case 0x1661e8u: goto label_1661e8;
        case 0x1661ecu: goto label_1661ec;
        case 0x1661f0u: goto label_1661f0;
        case 0x1661f4u: goto label_1661f4;
        case 0x1661f8u: goto label_1661f8;
        case 0x1661fcu: goto label_1661fc;
        case 0x166200u: goto label_166200;
        case 0x166204u: goto label_166204;
        case 0x166208u: goto label_166208;
        case 0x16620cu: goto label_16620c;
        case 0x166210u: goto label_166210;
        case 0x166214u: goto label_166214;
        case 0x166218u: goto label_166218;
        case 0x16621cu: goto label_16621c;
        case 0x166220u: goto label_166220;
        case 0x166224u: goto label_166224;
        case 0x166228u: goto label_166228;
        case 0x16622cu: goto label_16622c;
        case 0x166230u: goto label_166230;
        case 0x166234u: goto label_166234;
        case 0x166238u: goto label_166238;
        case 0x16623cu: goto label_16623c;
        case 0x166240u: goto label_166240;
        default: break;
    }

    ctx->pc = 0x165de8u;

label_165de8:
    // 0x165de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_165dec:
    // 0x165dec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x165decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_165df0:
    // 0x165df0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x165df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_165df4:
    // 0x165df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165df8:
    // 0x165df8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_165dfc:
    // 0x165dfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x165dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_165e00:
    // 0x165e00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x165e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_165e04:
    // 0x165e04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x165e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_165e08:
    // 0x165e08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x165e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_165e0c:
    // 0x165e0c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x165e0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_165e10:
    // 0x165e10: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x165e10u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_165e14:
    // 0x165e14: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x165e14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_165e18:
    // 0x165e18: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x165e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_165e1c:
    // 0x165e1c: 0x92060c00  lbu         $a2, 0xC00($s0)
    ctx->pc = 0x165e1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
label_165e20:
    // 0x165e20: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x165e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_165e24:
    // 0x165e24: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x165e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_165e28:
    // 0x165e28: 0x50400103  beql        $v0, $zero, . + 4 + (0x103 << 2)
label_165e2c:
    if (ctx->pc == 0x165E2Cu) {
        ctx->pc = 0x165E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E28u;
        // 0x165e2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E30u;
        goto label_165e30;
    }
    ctx->pc = 0x165E28u;
    {
        const bool branch_taken_0x165e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e28) {
            ctx->pc = 0x165E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E28u;
            // 0x165e2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x165E30u;
label_165e30:
    // 0x165e30: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x165e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_165e34:
    // 0x165e34: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165e38:
    // 0x165e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_165e3c:
    // 0x165e3c: 0x8c637140  lw          $v1, 0x7140($v1)
    ctx->pc = 0x165e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28992)));
label_165e40:
    // 0x165e40: 0x600008  jr          $v1
label_165e44:
    if (ctx->pc == 0x165E44u) {
        ctx->pc = 0x165E48u;
        goto label_165e48;
    }
    ctx->pc = 0x165E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165E48u: goto label_165e48;
            case 0x165E70u: goto label_165e70;
            case 0x165E98u: goto label_165e98;
            case 0x165EC0u: goto label_165ec0;
            case 0x165EE0u: goto label_165ee0;
            case 0x165F28u: goto label_165f28;
            case 0x165F68u: goto label_165f68;
            case 0x165F90u: goto label_165f90;
            case 0x165FD8u: goto label_165fd8;
            case 0x165FF0u: goto label_165ff0;
            case 0x166078u: goto label_166078;
            case 0x166090u: goto label_166090;
            case 0x1660F8u: goto label_1660f8;
            case 0x166110u: goto label_166110;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661E8u: goto label_1661e8;
            case 0x166234u: goto label_166234;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x165E48u;
label_165e48:
    // 0x165e48: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165e4c:
    // 0x165e4c: 0x544000f8  bnel        $v0, $zero, . + 4 + (0xF8 << 2)
label_165e50:
    if (ctx->pc == 0x165E50u) {
        ctx->pc = 0x165E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E4Cu;
        // 0x165e50: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E54u;
        goto label_165e54;
    }
    ctx->pc = 0x165E4Cu;
    {
        const bool branch_taken_0x165e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e4c) {
            ctx->pc = 0x165E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E4Cu;
            // 0x165e50: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165E54u;
label_165e54:
    // 0x165e54: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_165e58:
    // 0x165e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165e5c:
    // 0x165e5c: 0xc068584  jal         func_1A1610
label_165e60:
    if (ctx->pc == 0x165E60u) {
        ctx->pc = 0x165E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E5Cu;
        // 0x165e60: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E64u;
        goto label_165e64;
    }
    ctx->pc = 0x165E5Cu;
    SET_GPR_U32(ctx, 31, 0x165E64u);
    ctx->pc = 0x165E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E5Cu;
    // 0x165e60: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165E5Cu, 0x165E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E64u;
label_165e64:
    // 0x165e64: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165e68:
    // 0x165e68: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_165e6c:
    if (ctx->pc == 0x165E6Cu) {
        ctx->pc = 0x165E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E68u;
        // 0x165e6c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E70u;
        goto label_165e70;
    }
    ctx->pc = 0x165E68u;
    {
        const bool branch_taken_0x165e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E68u;
        // 0x165e6c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e68) {
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165E70u;
label_165e70:
    // 0x165e70: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165e74:
    // 0x165e74: 0x544000ee  bnel        $v0, $zero, . + 4 + (0xEE << 2)
label_165e78:
    if (ctx->pc == 0x165E78u) {
        ctx->pc = 0x165E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E74u;
        // 0x165e78: 0x34420084  ori         $v0, $v0, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E7Cu;
        goto label_165e7c;
    }
    ctx->pc = 0x165E74u;
    {
        const bool branch_taken_0x165e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e74) {
            ctx->pc = 0x165E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E74u;
            // 0x165e78: 0x34420084  ori         $v0, $v0, 0x84 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165E7Cu;
label_165e7c:
    // 0x165e7c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_165e80:
    // 0x165e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165e84:
    // 0x165e84: 0xc068584  jal         func_1A1610
label_165e88:
    if (ctx->pc == 0x165E88u) {
        ctx->pc = 0x165E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E84u;
        // 0x165e88: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E8Cu;
        goto label_165e8c;
    }
    ctx->pc = 0x165E84u;
    SET_GPR_U32(ctx, 31, 0x165E8Cu);
    ctx->pc = 0x165E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E84u;
    // 0x165e88: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165E84u, 0x165E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E8Cu;
label_165e8c:
    // 0x165e8c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165e90:
    // 0x165e90: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_165e94:
    if (ctx->pc == 0x165E94u) {
        ctx->pc = 0x165E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E90u;
        // 0x165e94: 0x34420084  ori         $v0, $v0, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165E98u;
        goto label_165e98;
    }
    ctx->pc = 0x165E90u;
    {
        const bool branch_taken_0x165e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E90u;
        // 0x165e94: 0x34420084  ori         $v0, $v0, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e90) {
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165E98u;
label_165e98:
    // 0x165e98: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165e9c:
    // 0x165e9c: 0x544000e4  bnel        $v0, $zero, . + 4 + (0xE4 << 2)
label_165ea0:
    if (ctx->pc == 0x165EA0u) {
        ctx->pc = 0x165EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E9Cu;
        // 0x165ea0: 0x3442008c  ori         $v0, $v0, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165EA4u;
        goto label_165ea4;
    }
    ctx->pc = 0x165E9Cu;
    {
        const bool branch_taken_0x165e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e9c) {
            ctx->pc = 0x165EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E9Cu;
            // 0x165ea0: 0x3442008c  ori         $v0, $v0, 0x8C (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165EA4u;
label_165ea4:
    // 0x165ea4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_165ea8:
    // 0x165ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165eac:
    // 0x165eac: 0xc068584  jal         func_1A1610
label_165eb0:
    if (ctx->pc == 0x165EB0u) {
        ctx->pc = 0x165EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EACu;
        // 0x165eb0: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165EB4u;
        goto label_165eb4;
    }
    ctx->pc = 0x165EACu;
    SET_GPR_U32(ctx, 31, 0x165EB4u);
    ctx->pc = 0x165EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EACu;
    // 0x165eb0: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165EACu, 0x165EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EB4u;
label_165eb4:
    // 0x165eb4: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165eb8:
    // 0x165eb8: 0x100000dd  b           . + 4 + (0xDD << 2)
label_165ebc:
    if (ctx->pc == 0x165EBCu) {
        ctx->pc = 0x165EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EB8u;
        // 0x165ebc: 0x3442008c  ori         $v0, $v0, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165EC0u;
        goto label_165ec0;
    }
    ctx->pc = 0x165EB8u;
    {
        const bool branch_taken_0x165eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EB8u;
        // 0x165ebc: 0x3442008c  ori         $v0, $v0, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165eb8) {
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165EC0u;
label_165ec0:
    // 0x165ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165ec4:
    // 0x165ec4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x165ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_165ec8:
    // 0x165ec8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165ecc:
    // 0x165ecc: 0xc0596d8  jal         func_165B60
label_165ed0:
    if (ctx->pc == 0x165ED0u) {
        ctx->pc = 0x165ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ECCu;
        // 0x165ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165ED4u;
        goto label_165ed4;
    }
    ctx->pc = 0x165ECCu;
    SET_GPR_U32(ctx, 31, 0x165ED4u);
    ctx->pc = 0x165ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165ECCu;
    // 0x165ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165ECCu, 0x165ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165ED4u;
label_165ed4:
    // 0x165ed4: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_165ed8:
    if (ctx->pc == 0x165ED8u) {
        ctx->pc = 0x165ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ED4u;
        // 0x165ed8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165EDCu;
        goto label_165edc;
    }
    ctx->pc = 0x165ED4u;
    {
        const bool branch_taken_0x165ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ED4u;
        // 0x165ed8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ed4) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x165EDCu;
label_165edc:
    // 0x165edc: 0x0  nop
    ctx->pc = 0x165edcu;
    // NOP
label_165ee0:
    // 0x165ee0: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165ee4:
    // 0x165ee4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_165ee8:
    if (ctx->pc == 0x165EE8u) {
        ctx->pc = 0x165EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EE4u;
        // 0x165ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165EECu;
        goto label_165eec;
    }
    ctx->pc = 0x165EE4u;
    {
        const bool branch_taken_0x165ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ee4) {
            ctx->pc = 0x165EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165EE4u;
            // 0x165ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165F04u;
            goto label_165f04;
        }
    }
    ctx->pc = 0x165EECu;
label_165eec:
    // 0x165eec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_165ef0:
    // 0x165ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165ef4:
    // 0x165ef4: 0xc068584  jal         func_1A1610
label_165ef8:
    if (ctx->pc == 0x165EF8u) {
        ctx->pc = 0x165EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EF4u;
        // 0x165ef8: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165EFCu;
        goto label_165efc;
    }
    ctx->pc = 0x165EF4u;
    SET_GPR_U32(ctx, 31, 0x165EFCu);
    ctx->pc = 0x165EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EF4u;
    // 0x165ef8: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165EF4u, 0x165EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EFCu;
label_165efc:
    // 0x165efc: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165f00:
    // 0x165f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165f04:
    // 0x165f04: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_165f08:
    // 0x165f08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_165f0c:
    // 0x165f0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x165f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_165f10:
    // 0x165f10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x165f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165f14:
    // 0x165f14: 0xc0596d8  jal         func_165B60
label_165f18:
    if (ctx->pc == 0x165F18u) {
        ctx->pc = 0x165F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F14u;
        // 0x165f18: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F1Cu;
        goto label_165f1c;
    }
    ctx->pc = 0x165F14u;
    SET_GPR_U32(ctx, 31, 0x165F1Cu);
    ctx->pc = 0x165F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F14u;
    // 0x165f18: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165F14u, 0x165F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F1Cu;
label_165f1c:
    // 0x165f1c: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_165f20:
    if (ctx->pc == 0x165F20u) {
        ctx->pc = 0x165F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F1Cu;
        // 0x165f20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F24u;
        goto label_165f24;
    }
    ctx->pc = 0x165F1Cu;
    {
        const bool branch_taken_0x165f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F1Cu;
        // 0x165f20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f1c) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x165F24u;
label_165f24:
    // 0x165f24: 0x0  nop
    ctx->pc = 0x165f24u;
    // NOP
label_165f28:
    // 0x165f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165f2c:
    // 0x165f2c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x165f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_165f30:
    // 0x165f30: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x165f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_165f34:
    // 0x165f34: 0xc0596d8  jal         func_165B60
label_165f38:
    if (ctx->pc == 0x165F38u) {
        ctx->pc = 0x165F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F34u;
        // 0x165f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F3Cu;
        goto label_165f3c;
    }
    ctx->pc = 0x165F34u;
    SET_GPR_U32(ctx, 31, 0x165F3Cu);
    ctx->pc = 0x165F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F34u;
    // 0x165f38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165F34u, 0x165F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F3Cu;
label_165f3c:
    // 0x165f3c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165f40:
    // 0x165f40: 0x544000bb  bnel        $v0, $zero, . + 4 + (0xBB << 2)
label_165f44:
    if (ctx->pc == 0x165F44u) {
        ctx->pc = 0x165F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F40u;
        // 0x165f44: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F48u;
        goto label_165f48;
    }
    ctx->pc = 0x165F40u;
    {
        const bool branch_taken_0x165f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165f40) {
            ctx->pc = 0x165F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165F40u;
            // 0x165f44: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165F48u;
label_165f48:
    // 0x165f48: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_165f4c:
    // 0x165f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165f50:
    // 0x165f50: 0xc068584  jal         func_1A1610
label_165f54:
    if (ctx->pc == 0x165F54u) {
        ctx->pc = 0x165F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F50u;
        // 0x165f54: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F58u;
        goto label_165f58;
    }
    ctx->pc = 0x165F50u;
    SET_GPR_U32(ctx, 31, 0x165F58u);
    ctx->pc = 0x165F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F50u;
    // 0x165f54: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165F50u, 0x165F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F58u;
label_165f58:
    // 0x165f58: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165f5c:
    // 0x165f5c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_165f60:
    if (ctx->pc == 0x165F60u) {
        ctx->pc = 0x165F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F5Cu;
        // 0x165f60: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F64u;
        goto label_165f64;
    }
    ctx->pc = 0x165F5Cu;
    {
        const bool branch_taken_0x165f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F5Cu;
        // 0x165f60: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f5c) {
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165F64u;
label_165f64:
    // 0x165f64: 0x0  nop
    ctx->pc = 0x165f64u;
    // NOP
label_165f68:
    // 0x165f68: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165f6c:
    // 0x165f6c: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_165f70:
    if (ctx->pc == 0x165F70u) {
        ctx->pc = 0x165F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F6Cu;
        // 0x165f70: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F74u;
        goto label_165f74;
    }
    ctx->pc = 0x165F6Cu;
    {
        const bool branch_taken_0x165f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165f6c) {
            ctx->pc = 0x165F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165F6Cu;
            // 0x165f70: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165F74u;
label_165f74:
    // 0x165f74: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_165f78:
    // 0x165f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165f7c:
    // 0x165f7c: 0xc068584  jal         func_1A1610
label_165f80:
    if (ctx->pc == 0x165F80u) {
        ctx->pc = 0x165F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F7Cu;
        // 0x165f80: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F84u;
        goto label_165f84;
    }
    ctx->pc = 0x165F7Cu;
    SET_GPR_U32(ctx, 31, 0x165F84u);
    ctx->pc = 0x165F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F7Cu;
    // 0x165f80: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165F7Cu, 0x165F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F84u;
label_165f84:
    // 0x165f84: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_165f88:
    // 0x165f88: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_165f8c:
    if (ctx->pc == 0x165F8Cu) {
        ctx->pc = 0x165F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F88u;
        // 0x165f8c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x165F90u;
        goto label_165f90;
    }
    ctx->pc = 0x165F88u;
    {
        const bool branch_taken_0x165f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F88u;
        // 0x165f8c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f88) {
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x165F90u;
label_165f90:
    // 0x165f90: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_165f94:
    // 0x165f94: 0xc782836c  lwc1        $f2, -0x7C94($gp)
    ctx->pc = 0x165f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_165f98:
    // 0x165f98: 0xc441d3b8  lwc1        $f1, -0x2C48($v0)
    ctx->pc = 0x165f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_165f9c:
    // 0x165f9c: 0xc7808370  lwc1        $f0, -0x7C90($gp)
    ctx->pc = 0x165f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_165fa0:
    // 0x165fa0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x165fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_165fa4:
    // 0x165fa4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x165fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_165fa8:
    // 0x165fa8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x165fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_165fac:
    // 0x165fac: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x165facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_165fb0:
    // 0x165fb0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x165fb0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_165fb4:
    // 0x165fb4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x165fb4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_165fb8:
    // 0x165fb8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x165fb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_165fbc:
    // 0x165fbc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x165fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_165fc0:
    // 0x165fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165fc4:
    // 0x165fc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x165fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_165fc8:
    // 0x165fc8: 0xc059478  jal         func_1651E0
label_165fcc:
    if (ctx->pc == 0x165FCCu) {
        ctx->pc = 0x165FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FC8u;
        // 0x165fcc: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FD0u;
        goto label_165fd0;
    }
    ctx->pc = 0x165FC8u;
    SET_GPR_U32(ctx, 31, 0x165FD0u);
    ctx->pc = 0x165FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FC8u;
    // 0x165fcc: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651E0u, 0x165FC8u, 0x165FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FD0u;
label_165fd0:
    // 0x165fd0: 0x10000099  b           . + 4 + (0x99 << 2)
label_165fd4:
    if (ctx->pc == 0x165FD4u) {
        ctx->pc = 0x165FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FD0u;
        // 0x165fd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FD8u;
        goto label_165fd8;
    }
    ctx->pc = 0x165FD0u;
    {
        const bool branch_taken_0x165fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FD0u;
        // 0x165fd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fd0) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x165FD8u;
label_165fd8:
    // 0x165fd8: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
label_165fdc:
    // 0x165fdc: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_165fe0:
    // 0x165fe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165fe4:
    // 0x165fe4: 0x10000084  b           . + 4 + (0x84 << 2)
label_165fe8:
    if (ctx->pc == 0x165FE8u) {
        ctx->pc = 0x165FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FE4u;
        // 0x165fe8: 0x24c665d0  addiu       $a2, $a2, 0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165FECu;
        goto label_165fec;
    }
    ctx->pc = 0x165FE4u;
    {
        const bool branch_taken_0x165fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FE4u;
        // 0x165fe8: 0x24c665d0  addiu       $a2, $a2, 0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fe4) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x165FECu;
label_165fec:
    // 0x165fec: 0x0  nop
    ctx->pc = 0x165fecu;
    // NOP
label_165ff0:
    // 0x165ff0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x165ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
label_165ff4:
    // 0x165ff4: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x165ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_165ff8:
    // 0x165ff8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165ffc:
    // 0x165ffc: 0x24c673e0  addiu       $a2, $a2, 0x73E0
    ctx->pc = 0x165ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29664));
label_166000:
    // 0x166000: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x166000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_166004:
    // 0x166004: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x166004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_166008:
    // 0x166008: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x166008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_16600c:
    // 0x16600c: 0xc0f809  jalr        $a2
label_166010:
    if (ctx->pc == 0x166010u) {
        ctx->pc = 0x166010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16600Cu;
        // 0x166010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166014u;
        goto label_166014;
    }
    ctx->pc = 0x16600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x166014u);
        ctx->pc = 0x166010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16600Cu;
        // 0x166010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16600Cu, 0x166014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166014u;
label_166014:
    // 0x166014: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x166014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166018:
    // 0x166018: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_16601c:
    if (ctx->pc == 0x16601Cu) {
        ctx->pc = 0x16601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166018u;
        // 0x16601c: 0x8e060c04  lw          $a2, 0xC04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166020u;
        goto label_166020;
    }
    ctx->pc = 0x166018u;
    {
        const bool branch_taken_0x166018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166018) {
            ctx->pc = 0x16601Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166018u;
            // 0x16601c: 0x8e060c04  lw          $a2, 0xC04($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166034u;
            goto label_166034;
        }
    }
    ctx->pc = 0x166020u;
label_166020:
    // 0x166020: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_166024:
    // 0x166024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166028:
    // 0x166028: 0xc068584  jal         func_1A1610
label_16602c:
    if (ctx->pc == 0x16602Cu) {
        ctx->pc = 0x16602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166028u;
        // 0x16602c: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166030u;
        goto label_166030;
    }
    ctx->pc = 0x166028u;
    SET_GPR_U32(ctx, 31, 0x166030u);
    ctx->pc = 0x16602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166028u;
    // 0x16602c: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x166028u, 0x166030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166030u;
label_166030:
    // 0x166030: 0x8e060c04  lw          $a2, 0xC04($s0)
    ctx->pc = 0x166030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166034:
    // 0x166034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166038:
    // 0x166038: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x166038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_16603c:
    // 0x16603c: 0xae060c04  sw          $a2, 0xC04($s0)
    ctx->pc = 0x16603cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 6));
label_166040:
    // 0x166040: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166044:
    // 0x166044: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166048:
    // 0x166048: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x166048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16604c:
    // 0x16604c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16604cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166050:
    // 0x166050: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166050u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166054:
    // 0x166054: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166054u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166058:
    // 0x166058: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166058u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16605c:
    // 0x16605c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166060:
    // 0x166060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166064:
    // 0x166064: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166068:
    // 0x166068: 0xc059478  jal         func_1651E0
label_16606c:
    if (ctx->pc == 0x16606Cu) {
        ctx->pc = 0x16606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166068u;
        // 0x16606c: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166070u;
        goto label_166070;
    }
    ctx->pc = 0x166068u;
    SET_GPR_U32(ctx, 31, 0x166070u);
    ctx->pc = 0x16606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166068u;
    // 0x16606c: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651E0u, 0x166068u, 0x166070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166070u;
label_166070:
    // 0x166070: 0x10000071  b           . + 4 + (0x71 << 2)
label_166074:
    if (ctx->pc == 0x166074u) {
        ctx->pc = 0x166074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166070u;
        // 0x166074: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166078u;
        goto label_166078;
    }
    ctx->pc = 0x166070u;
    {
        const bool branch_taken_0x166070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166070u;
        // 0x166074: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166070) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x166078u;
label_166078:
    // 0x166078: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x166078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_16607c:
    // 0x16607c: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x16607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_166080:
    // 0x166080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166084:
    // 0x166084: 0x1000005c  b           . + 4 + (0x5C << 2)
label_166088:
    if (ctx->pc == 0x166088u) {
        ctx->pc = 0x166088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166084u;
        // 0x166088: 0x24c6afb8  addiu       $a2, $a2, -0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16608Cu;
        goto label_16608c;
    }
    ctx->pc = 0x166084u;
    {
        const bool branch_taken_0x166084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166084u;
        // 0x166088: 0x24c6afb8  addiu       $a2, $a2, -0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166084) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x16608Cu;
label_16608c:
    // 0x16608c: 0x0  nop
    ctx->pc = 0x16608cu;
    // NOP
label_166090:
    // 0x166090: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_166094:
    // 0x166094: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_166098:
    // 0x166098: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16609c:
    // 0x16609c: 0x24c6af58  addiu       $a2, $a2, -0x50A8
    ctx->pc = 0x16609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946648));
label_1660a0:
    // 0x1660a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1660a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1660a4:
    // 0x1660a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1660a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1660a8:
    // 0x1660a8: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x1660a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_1660ac:
    // 0x1660ac: 0xc0f809  jalr        $a2
label_1660b0:
    if (ctx->pc == 0x1660B0u) {
        ctx->pc = 0x1660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ACu;
        // 0x1660b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660B4u;
        goto label_1660b4;
    }
    ctx->pc = 0x1660ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1660B4u);
        ctx->pc = 0x1660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ACu;
        // 0x1660b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660ACu, 0x1660B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1660B4u;
label_1660b4:
    // 0x1660b4: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_1660b8:
    // 0x1660b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1660bc:
    if (ctx->pc == 0x1660BCu) {
        ctx->pc = 0x1660BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660B8u;
        // 0x1660bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660C0u;
        goto label_1660c0;
    }
    ctx->pc = 0x1660B8u;
    {
        const bool branch_taken_0x1660b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1660b8) {
            ctx->pc = 0x1660BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1660B8u;
            // 0x1660bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1660D8u;
            goto label_1660d8;
        }
    }
    ctx->pc = 0x1660C0u;
label_1660c0:
    // 0x1660c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1660c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1660c4:
    // 0x1660c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1660c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1660c8:
    // 0x1660c8: 0xc068584  jal         func_1A1610
label_1660cc:
    if (ctx->pc == 0x1660CCu) {
        ctx->pc = 0x1660CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660C8u;
        // 0x1660cc: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660D0u;
        goto label_1660d0;
    }
    ctx->pc = 0x1660C8u;
    SET_GPR_U32(ctx, 31, 0x1660D0u);
    ctx->pc = 0x1660CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660C8u;
    // 0x1660cc: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1660C8u, 0x1660D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660D0u;
label_1660d0:
    // 0x1660d0: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_1660d4:
    // 0x1660d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1660d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1660d8:
    // 0x1660d8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1660dc:
    // 0x1660dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1660dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1660e0:
    // 0x1660e0: 0x34420022  ori         $v0, $v0, 0x22
    ctx->pc = 0x1660e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34);
label_1660e4:
    // 0x1660e4: 0xc05945a  jal         func_165168
label_1660e8:
    if (ctx->pc == 0x1660E8u) {
        ctx->pc = 0x1660E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660E4u;
        // 0x1660e8: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660ECu;
        goto label_1660ec;
    }
    ctx->pc = 0x1660E4u;
    SET_GPR_U32(ctx, 31, 0x1660ECu);
    ctx->pc = 0x1660E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660E4u;
    // 0x1660e8: 0xae020c04  sw          $v0, 0xC04($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165168u, 0x1660E4u, 0x1660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660ECu;
label_1660ec:
    // 0x1660ec: 0x10000052  b           . + 4 + (0x52 << 2)
label_1660f0:
    if (ctx->pc == 0x1660F0u) {
        ctx->pc = 0x1660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ECu;
        // 0x1660f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1660F4u;
        goto label_1660f4;
    }
    ctx->pc = 0x1660ECu;
    {
        const bool branch_taken_0x1660ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ECu;
        // 0x1660f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660ec) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x1660F4u;
label_1660f4:
    // 0x1660f4: 0x0  nop
    ctx->pc = 0x1660f4u;
    // NOP
label_1660f8:
    // 0x1660f8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_1660fc:
    // 0x1660fc: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_166100:
    // 0x166100: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166104:
    // 0x166104: 0x1000003c  b           . + 4 + (0x3C << 2)
label_166108:
    if (ctx->pc == 0x166108u) {
        ctx->pc = 0x166108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166104u;
        // 0x166108: 0x24c6af78  addiu       $a2, $a2, -0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16610Cu;
        goto label_16610c;
    }
    ctx->pc = 0x166104u;
    {
        const bool branch_taken_0x166104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166104u;
        // 0x166108: 0x24c6af78  addiu       $a2, $a2, -0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166104) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x16610Cu;
label_16610c:
    // 0x16610c: 0x0  nop
    ctx->pc = 0x16610cu;
    // NOP
label_166110:
    // 0x166110: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x166110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
label_166114:
    // 0x166114: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x166114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_166118:
    // 0x166118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16611c:
    // 0x16611c: 0x24c673e0  addiu       $a2, $a2, 0x73E0
    ctx->pc = 0x16611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29664));
label_166120:
    // 0x166120: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x166120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_166124:
    // 0x166124: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_166128:
    // 0x166128: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x166128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_16612c:
    // 0x16612c: 0xc0f809  jalr        $a2
label_166130:
    if (ctx->pc == 0x166130u) {
        ctx->pc = 0x166130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16612Cu;
        // 0x166130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166134u;
        goto label_166134;
    }
    ctx->pc = 0x16612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x166134u);
        ctx->pc = 0x166130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16612Cu;
        // 0x166130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16612Cu, 0x166134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166134u;
label_166134:
    // 0x166134: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x166134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166138:
    // 0x166138: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16613c:
    if (ctx->pc == 0x16613Cu) {
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166140u;
        goto label_166140;
    }
    ctx->pc = 0x166138u;
    {
        const bool branch_taken_0x166138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166138) {
            ctx->pc = 0x166150u;
            goto label_166150;
        }
    }
    ctx->pc = 0x166140u;
label_166140:
    // 0x166140: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_166144:
    // 0x166144: 0xc068584  jal         func_1A1610
label_166148:
    if (ctx->pc == 0x166148u) {
        ctx->pc = 0x166148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166144u;
        // 0x166148: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16614Cu;
        goto label_16614c;
    }
    ctx->pc = 0x166144u;
    SET_GPR_U32(ctx, 31, 0x16614Cu);
    ctx->pc = 0x166148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166144u;
    // 0x166148: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x166144u, 0x16614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16614Cu;
label_16614c:
    // 0x16614c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x16614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166150:
    // 0x166150: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x166150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_166154:
    // 0x166154: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x166154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_166158:
    // 0x166158: 0xc7818374  lwc1        $f1, -0x7C8C($gp)
    ctx->pc = 0x166158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16615c:
    // 0x16615c: 0xae020c04  sw          $v0, 0xC04($s0)
    ctx->pc = 0x16615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
label_166160:
    // 0x166160: 0xc7808378  lwc1        $f0, -0x7C88($gp)
    ctx->pc = 0x166160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166164:
    // 0x166164: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x166164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166168:
    // 0x166168: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x166168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16616c:
    // 0x16616c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16616cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166170:
    // 0x166170: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166174:
    // 0x166174: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166174u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166178:
    // 0x166178: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166178u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16617c:
    // 0x16617c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16617cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166180:
    // 0x166180: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166184:
    // 0x166184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166188:
    // 0x166188: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16618c:
    // 0x16618c: 0xc059478  jal         func_1651E0
label_166190:
    if (ctx->pc == 0x166190u) {
        ctx->pc = 0x166190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16618Cu;
        // 0x166190: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166194u;
        goto label_166194;
    }
    ctx->pc = 0x16618Cu;
    SET_GPR_U32(ctx, 31, 0x166194u);
    ctx->pc = 0x166190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16618Cu;
    // 0x166190: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651E0u, 0x16618Cu, 0x166194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166194u;
label_166194:
    // 0x166194: 0x10000028  b           . + 4 + (0x28 << 2)
label_166198:
    if (ctx->pc == 0x166198u) {
        ctx->pc = 0x166198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166194u;
        // 0x166198: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16619Cu;
        goto label_16619c;
    }
    ctx->pc = 0x166194u;
    {
        const bool branch_taken_0x166194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166194u;
        // 0x166198: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166194) {
            ctx->pc = 0x166238u;
            goto label_166238;
        }
    }
    ctx->pc = 0x16619Cu;
label_16619c:
    // 0x16619c: 0x0  nop
    ctx->pc = 0x16619cu;
    // NOP
label_1661a0:
    // 0x1661a0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_1661a4:
    // 0x1661a4: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_1661a8:
    // 0x1661a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1661ac:
    // 0x1661ac: 0x10000012  b           . + 4 + (0x12 << 2)
label_1661b0:
    if (ctx->pc == 0x1661B0u) {
        ctx->pc = 0x1661B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661ACu;
        // 0x1661b0: 0x24c6afd8  addiu       $a2, $a2, -0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661B4u;
        goto label_1661b4;
    }
    ctx->pc = 0x1661ACu;
    {
        const bool branch_taken_0x1661ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661ACu;
        // 0x1661b0: 0x24c6afd8  addiu       $a2, $a2, -0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661ac) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x1661B4u;
label_1661b4:
    // 0x1661b4: 0x0  nop
    ctx->pc = 0x1661b4u;
    // NOP
label_1661b8:
    // 0x1661b8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_1661bc:
    // 0x1661bc: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_1661c0:
    // 0x1661c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1661c4:
    // 0x1661c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1661c8:
    if (ctx->pc == 0x1661C8u) {
        ctx->pc = 0x1661C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661C4u;
        // 0x1661c8: 0x24c6af98  addiu       $a2, $a2, -0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661CCu;
        goto label_1661cc;
    }
    ctx->pc = 0x1661C4u;
    {
        const bool branch_taken_0x1661c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661C4u;
        // 0x1661c8: 0x24c6af98  addiu       $a2, $a2, -0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661c4) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x1661CCu;
label_1661cc:
    // 0x1661cc: 0x0  nop
    ctx->pc = 0x1661ccu;
    // NOP
label_1661d0:
    // 0x1661d0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_1661d4:
    // 0x1661d4: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_1661d8:
    // 0x1661d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1661dc:
    // 0x1661dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1661e0:
    if (ctx->pc == 0x1661E0u) {
        ctx->pc = 0x1661E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661DCu;
        // 0x1661e0: 0x24c69110  addiu       $a2, $a2, -0x6EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1661E4u;
        goto label_1661e4;
    }
    ctx->pc = 0x1661DCu;
    {
        const bool branch_taken_0x1661dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661DCu;
        // 0x1661e0: 0x24c69110  addiu       $a2, $a2, -0x6EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661dc) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x1661E4u;
label_1661e4:
    // 0x1661e4: 0x0  nop
    ctx->pc = 0x1661e4u;
    // NOP
label_1661e8:
    // 0x1661e8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_1661ec:
    // 0x1661ec: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
label_1661f0:
    // 0x1661f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1661f4:
    // 0x1661f4: 0x24c69460  addiu       $a2, $a2, -0x6BA0
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939744));
label_1661f8:
    // 0x1661f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1661f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1661fc:
    // 0x1661fc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1661fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_166200:
    // 0x166200: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x166200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_166204:
    // 0x166204: 0xc0f809  jalr        $a2
label_166208:
    if (ctx->pc == 0x166208u) {
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166204u;
        // 0x166208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16620Cu;
        goto label_16620c;
    }
    ctx->pc = 0x166204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16620Cu);
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166204u;
        // 0x166208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166204u, 0x16620Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16620Cu;
label_16620c:
    // 0x16620c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x16620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_166210:
    // 0x166210: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_166214:
    if (ctx->pc == 0x166214u) {
        ctx->pc = 0x166214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166210u;
        // 0x166214: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166218u;
        goto label_166218;
    }
    ctx->pc = 0x166210u;
    {
        const bool branch_taken_0x166210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166210) {
            ctx->pc = 0x166214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166210u;
            // 0x166214: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            goto label_166230;
        }
    }
    ctx->pc = 0x166218u;
label_166218:
    // 0x166218: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x166218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_16621c:
    // 0x16621c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16621cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166220:
    // 0x166220: 0xc068584  jal         func_1A1610
label_166224:
    if (ctx->pc == 0x166224u) {
        ctx->pc = 0x166224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166220u;
        // 0x166224: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166228u;
        goto label_166228;
    }
    ctx->pc = 0x166220u;
    SET_GPR_U32(ctx, 31, 0x166228u);
    ctx->pc = 0x166224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166220u;
    // 0x166224: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x166220u, 0x166228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166228u;
label_166228:
    // 0x166228: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x166228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_16622c:
    // 0x16622c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x16622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_166230:
    // 0x166230: 0xae020c04  sw          $v0, 0xC04($s0)
    ctx->pc = 0x166230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
label_166234:
    // 0x166234: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x166234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166238:
    // 0x166238: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x166238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16623c:
    // 0x16623c: 0x3e00008  jr          $ra
label_166240:
    if (ctx->pc == 0x166240u) {
        ctx->pc = 0x166240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16623Cu;
        // 0x166240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166244u;
        goto label_fallthrough_0x16623c;
    }
    ctx->pc = 0x16623Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16623Cu;
        // 0x166240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16623Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16623c:
    ctx->pc = 0x166244u;
}
