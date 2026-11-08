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

// Function: __sjpopnthrow
// Address: 0x1cd930 - 0x1cda58
void ps2___sjpopnthrow_0x1cd930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sjpopnthrow_0x1cd930");
#endif

    switch (ctx->pc) {
        case 0x1cd930u: goto label_1cd930;
        case 0x1cd934u: goto label_1cd934;
        case 0x1cd938u: goto label_1cd938;
        case 0x1cd93cu: goto label_1cd93c;
        case 0x1cd940u: goto label_1cd940;
        case 0x1cd944u: goto label_1cd944;
        case 0x1cd948u: goto label_1cd948;
        case 0x1cd94cu: goto label_1cd94c;
        case 0x1cd950u: goto label_1cd950;
        case 0x1cd954u: goto label_1cd954;
        case 0x1cd958u: goto label_1cd958;
        case 0x1cd95cu: goto label_1cd95c;
        case 0x1cd960u: goto label_1cd960;
        case 0x1cd964u: goto label_1cd964;
        case 0x1cd968u: goto label_1cd968;
        case 0x1cd96cu: goto label_1cd96c;
        case 0x1cd970u: goto label_1cd970;
        case 0x1cd974u: goto label_1cd974;
        case 0x1cd978u: goto label_1cd978;
        case 0x1cd97cu: goto label_1cd97c;
        case 0x1cd980u: goto label_1cd980;
        case 0x1cd984u: goto label_1cd984;
        case 0x1cd988u: goto label_1cd988;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd990u: goto label_1cd990;
        case 0x1cd994u: goto label_1cd994;
        case 0x1cd998u: goto label_1cd998;
        case 0x1cd99cu: goto label_1cd99c;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9a4u: goto label_1cd9a4;
        case 0x1cd9a8u: goto label_1cd9a8;
        case 0x1cd9acu: goto label_1cd9ac;
        case 0x1cd9b0u: goto label_1cd9b0;
        case 0x1cd9b4u: goto label_1cd9b4;
        case 0x1cd9b8u: goto label_1cd9b8;
        case 0x1cd9bcu: goto label_1cd9bc;
        case 0x1cd9c0u: goto label_1cd9c0;
        case 0x1cd9c4u: goto label_1cd9c4;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9ccu: goto label_1cd9cc;
        case 0x1cd9d0u: goto label_1cd9d0;
        case 0x1cd9d4u: goto label_1cd9d4;
        case 0x1cd9d8u: goto label_1cd9d8;
        case 0x1cd9dcu: goto label_1cd9dc;
        case 0x1cd9e0u: goto label_1cd9e0;
        case 0x1cd9e4u: goto label_1cd9e4;
        case 0x1cd9e8u: goto label_1cd9e8;
        case 0x1cd9ecu: goto label_1cd9ec;
        case 0x1cd9f0u: goto label_1cd9f0;
        case 0x1cd9f4u: goto label_1cd9f4;
        case 0x1cd9f8u: goto label_1cd9f8;
        case 0x1cd9fcu: goto label_1cd9fc;
        case 0x1cda00u: goto label_1cda00;
        case 0x1cda04u: goto label_1cda04;
        case 0x1cda08u: goto label_1cda08;
        case 0x1cda0cu: goto label_1cda0c;
        case 0x1cda10u: goto label_1cda10;
        case 0x1cda14u: goto label_1cda14;
        case 0x1cda18u: goto label_1cda18;
        case 0x1cda1cu: goto label_1cda1c;
        case 0x1cda20u: goto label_1cda20;
        case 0x1cda24u: goto label_1cda24;
        case 0x1cda28u: goto label_1cda28;
        case 0x1cda2cu: goto label_1cda2c;
        case 0x1cda30u: goto label_1cda30;
        case 0x1cda34u: goto label_1cda34;
        case 0x1cda38u: goto label_1cda38;
        case 0x1cda3cu: goto label_1cda3c;
        case 0x1cda40u: goto label_1cda40;
        case 0x1cda44u: goto label_1cda44;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cda4cu: goto label_1cda4c;
        case 0x1cda50u: goto label_1cda50;
        case 0x1cda54u: goto label_1cda54;
        default: break;
    }

    ctx->pc = 0x1cd930u;

label_1cd930:
    // 0x1cd930: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_1cd934:
    // 0x1cd934: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cd934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1cd938:
    // 0x1cd938: 0x7fb00650  sq          $s0, 0x650($sp)
    ctx->pc = 0x1cd938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 16));
label_1cd93c:
    // 0x1cd93c: 0x7fb10660  sq          $s1, 0x660($sp)
    ctx->pc = 0x1cd93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 17));
label_1cd940:
    // 0x1cd940: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x1cd940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_1cd944:
    // 0x1cd944: 0x7fb30680  sq          $s3, 0x680($sp)
    ctx->pc = 0x1cd944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 19));
label_1cd948:
    // 0x1cd948: 0x7fb40690  sq          $s4, 0x690($sp)
    ctx->pc = 0x1cd948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 20));
label_1cd94c:
    // 0x1cd94c: 0x7fb506a0  sq          $s5, 0x6A0($sp)
    ctx->pc = 0x1cd94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 21));
label_1cd950:
    // 0x1cd950: 0x7fb606b0  sq          $s6, 0x6B0($sp)
    ctx->pc = 0x1cd950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 22));
label_1cd954:
    // 0x1cd954: 0x7fb706c0  sq          $s7, 0x6C0($sp)
    ctx->pc = 0x1cd954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 23));
label_1cd958:
    // 0x1cd958: 0x7fbe06d0  sq          $fp, 0x6D0($sp)
    ctx->pc = 0x1cd958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 30));
label_1cd95c:
    // 0x1cd95c: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x1cd95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_1cd960:
    // 0x1cd960: 0xe7bf0740  swc1        $f31, 0x740($sp)
    ctx->pc = 0x1cd960u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_1cd964:
    // 0x1cd964: 0xe7be0738  swc1        $f30, 0x738($sp)
    ctx->pc = 0x1cd964u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_1cd968:
    // 0x1cd968: 0xe7bd0730  swc1        $f29, 0x730($sp)
    ctx->pc = 0x1cd968u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1cd96c:
    // 0x1cd96c: 0xe7bc0728  swc1        $f28, 0x728($sp)
    ctx->pc = 0x1cd96cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_1cd970:
    // 0x1cd970: 0xe7bb0720  swc1        $f27, 0x720($sp)
    ctx->pc = 0x1cd970u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_1cd974:
    // 0x1cd974: 0xe7ba0718  swc1        $f26, 0x718($sp)
    ctx->pc = 0x1cd974u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_1cd978:
    // 0x1cd978: 0xe7b90710  swc1        $f25, 0x710($sp)
    ctx->pc = 0x1cd978u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_1cd97c:
    // 0x1cd97c: 0xe7b80708  swc1        $f24, 0x708($sp)
    ctx->pc = 0x1cd97cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_1cd980:
    // 0x1cd980: 0xe7b70700  swc1        $f23, 0x700($sp)
    ctx->pc = 0x1cd980u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_1cd984:
    // 0x1cd984: 0xe7b606f8  swc1        $f22, 0x6F8($sp)
    ctx->pc = 0x1cd984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_1cd988:
    // 0x1cd988: 0xe7b506f0  swc1        $f21, 0x6F0($sp)
    ctx->pc = 0x1cd988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_1cd98c:
    // 0x1cd98c: 0xe7b406e8  swc1        $f20, 0x6E8($sp)
    ctx->pc = 0x1cd98cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_1cd990:
    // 0x1cd990: 0x8c62de14  lw          $v0, -0x21EC($v1)
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958612)));
label_1cd994:
    // 0x1cd994: 0x40f809  jalr        $v0
label_1cd998:
    if (ctx->pc == 0x1CD998u) {
        ctx->pc = 0x1CD99Cu;
        goto label_1cd99c;
    }
    ctx->pc = 0x1CD994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD99Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD994u, 0x1CD99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD99Cu;
label_1cd99c:
    // 0x1cd99c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1cd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1cd9a0:
    // 0x1cd9a0: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x1cd9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_1cd9a4:
    // 0x1cd9a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd9a8:
    // 0x1cd9a8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cd9ac:
    // 0x1cd9ac: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x1cd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_1cd9b0:
    // 0x1cd9b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd9b4:
    // 0x1cd9b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1cd9b8:
    if (ctx->pc == 0x1CD9B8u) {
        ctx->pc = 0x1CD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9B4u;
        // 0x1cd9b8: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD9BCu;
        goto label_1cd9bc;
    }
    ctx->pc = 0x1CD9B4u;
    {
        const bool branch_taken_0x1cd9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9B4u;
        // 0x1cd9b8: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9b4) {
            ctx->pc = 0x1CDA48u;
            goto label_1cda48;
        }
    }
    ctx->pc = 0x1CD9BCu;
label_1cd9bc:
    // 0x1cd9bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1cd9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1cd9c0:
    // 0x1cd9c0: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1cd9c4:
    // 0x1cd9c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cd9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1cd9c8:
    // 0x1cd9c8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1cd9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1cd9cc:
    // 0x1cd9cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cd9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9d0:
    // 0x1cd9d0: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x1cd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_1cd9d4:
    // 0x1cd9d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cd9d8:
    if (ctx->pc == 0x1CD9D8u) {
        ctx->pc = 0x1CD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9D4u;
        // 0x1cd9d8: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD9DCu;
        goto label_1cd9dc;
    }
    ctx->pc = 0x1CD9D4u;
    {
        const bool branch_taken_0x1cd9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9D4u;
        // 0x1cd9d8: 0xafbd0010  sw          $sp, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9d4) {
            ctx->pc = 0x1CD9E4u;
            goto label_1cd9e4;
        }
    }
    ctx->pc = 0x1CD9DCu;
label_1cd9dc:
    // 0x1cd9dc: 0x0  nop
    ctx->pc = 0x1cd9dcu;
    // NOP
label_1cd9e0:
    // 0x1cd9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd9e4:
    // 0x1cd9e4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1cd9e8:
    if (ctx->pc == 0x1CD9E8u) {
        ctx->pc = 0x1CD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9E4u;
        // 0x1cd9e8: 0x8fa30640  lw          $v1, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD9ECu;
        goto label_1cd9ec;
    }
    ctx->pc = 0x1CD9E4u;
    {
        const bool branch_taken_0x1cd9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9E4u;
        // 0x1cd9e8: 0x8fa30640  lw          $v1, 0x640($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9e4) {
            ctx->pc = 0x1CDA40u;
            goto label_1cda40;
        }
    }
    ctx->pc = 0x1CD9ECu;
label_1cd9ec:
    // 0x1cd9ec: 0xac7d0000  sw          $sp, 0x0($v1)
    ctx->pc = 0x1cd9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 29));
label_1cd9f0:
    // 0x1cd9f0: 0x8fa40644  lw          $a0, 0x644($sp)
    ctx->pc = 0x1cd9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1cd9f4:
    // 0x1cd9f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd9f8:
    // 0x1cd9f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1cd9fc:
    if (ctx->pc == 0x1CD9FCu) {
        ctx->pc = 0x1CD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F8u;
        // 0x1cd9fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA00u;
        goto label_1cda00;
    }
    ctx->pc = 0x1CD9F8u;
    {
        const bool branch_taken_0x1cd9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F8u;
        // 0x1cd9fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9f8) {
            ctx->pc = 0x1CDA30u;
            goto label_1cda30;
        }
    }
    ctx->pc = 0x1CDA00u;
label_1cda00:
    // 0x1cda00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cda04:
    // 0x1cda04: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x1cda04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1cda08:
    // 0x1cda08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cda08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cda0c:
    // 0x1cda0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1cda10:
    // 0x1cda10: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cda14:
    // 0x1cda14: 0x60f809  jalr        $v1
label_1cda18:
    if (ctx->pc == 0x1CDA18u) {
        ctx->pc = 0x1CDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA14u;
        // 0x1cda18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA1Cu;
        goto label_1cda1c;
    }
    ctx->pc = 0x1CDA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDA1Cu);
        ctx->pc = 0x1CDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA14u;
        // 0x1cda18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA14u, 0x1CDA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA1Cu;
label_1cda1c:
    // 0x1cda1c: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_1cda20:
    // 0x1cda20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cda24:
    // 0x1cda24: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cda28:
    if (ctx->pc == 0x1CDA28u) {
        ctx->pc = 0x1CDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA24u;
        // 0x1cda28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA2Cu;
        goto label_1cda2c;
    }
    ctx->pc = 0x1CDA24u;
    {
        const bool branch_taken_0x1cda24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA24u;
        // 0x1cda28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda24) {
            ctx->pc = 0x1CDA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cda00;
        }
    }
    ctx->pc = 0x1CDA2Cu;
label_1cda2c:
    // 0x1cda2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cda30:
    // 0x1cda30: 0x8fa40640  lw          $a0, 0x640($sp)
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_1cda34:
    // 0x1cda34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cda34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cda38:
    // 0x1cda38: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cda3c:
    if (ctx->pc == 0x1CDA3Cu) {
        ctx->pc = 0x1CDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA38u;
        // 0x1cda3c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA40u;
        goto label_1cda40;
    }
    ctx->pc = 0x1CDA38u;
    {
        const bool branch_taken_0x1cda38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA38u;
        // 0x1cda3c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda38) {
            ctx->pc = 0x1CDA48u;
            goto label_1cda48;
        }
    }
    ctx->pc = 0x1CDA40u;
label_1cda40:
    // 0x1cda40: 0xc073468  jal         func_1CD1A0
label_1cda44:
    if (ctx->pc == 0x1CDA44u) {
        ctx->pc = 0x1CDA48u;
        goto label_1cda48;
    }
    ctx->pc = 0x1CDA40u;
    SET_GPR_U32(ctx, 31, 0x1CDA48u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CDA40u, 0x1CDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA48u;
label_1cda48:
    // 0x1cda48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cda4c:
    // 0x1cda4c: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x1cda4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_1cda50:
    // 0x1cda50: 0xc0735f4  jal         func_1CD7D0
label_1cda54:
    if (ctx->pc == 0x1CDA54u) {
        ctx->pc = 0x1CDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA50u;
        // 0x1cda54: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA58u;
        goto label_fallthrough_0x1cda50;
    }
    ctx->pc = 0x1CDA50u;
    SET_GPR_U32(ctx, 31, 0x1CDA58u);
    ctx->pc = 0x1CDA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA50u;
    // 0x1cda54: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD7D0u, 0x1CDA50u, 0x1CDA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1cda50:
    ctx->pc = 0x1CDA58u;
}
