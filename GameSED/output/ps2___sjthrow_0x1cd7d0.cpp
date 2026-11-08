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

// Function: __sjthrow
// Address: 0x1cd7d0 - 0x1cd930
void ps2___sjthrow_0x1cd7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sjthrow_0x1cd7d0");
#endif

    switch (ctx->pc) {
        case 0x1cd7d0u: goto label_1cd7d0;
        case 0x1cd7d4u: goto label_1cd7d4;
        case 0x1cd7d8u: goto label_1cd7d8;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e0u: goto label_1cd7e0;
        case 0x1cd7e4u: goto label_1cd7e4;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7ecu: goto label_1cd7ec;
        case 0x1cd7f0u: goto label_1cd7f0;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd7fcu: goto label_1cd7fc;
        case 0x1cd800u: goto label_1cd800;
        case 0x1cd804u: goto label_1cd804;
        case 0x1cd808u: goto label_1cd808;
        case 0x1cd80cu: goto label_1cd80c;
        case 0x1cd810u: goto label_1cd810;
        case 0x1cd814u: goto label_1cd814;
        case 0x1cd818u: goto label_1cd818;
        case 0x1cd81cu: goto label_1cd81c;
        case 0x1cd820u: goto label_1cd820;
        case 0x1cd824u: goto label_1cd824;
        case 0x1cd828u: goto label_1cd828;
        case 0x1cd82cu: goto label_1cd82c;
        case 0x1cd830u: goto label_1cd830;
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd838u: goto label_1cd838;
        case 0x1cd83cu: goto label_1cd83c;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd844u: goto label_1cd844;
        case 0x1cd848u: goto label_1cd848;
        case 0x1cd84cu: goto label_1cd84c;
        case 0x1cd850u: goto label_1cd850;
        case 0x1cd854u: goto label_1cd854;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd85cu: goto label_1cd85c;
        case 0x1cd860u: goto label_1cd860;
        case 0x1cd864u: goto label_1cd864;
        case 0x1cd868u: goto label_1cd868;
        case 0x1cd86cu: goto label_1cd86c;
        case 0x1cd870u: goto label_1cd870;
        case 0x1cd874u: goto label_1cd874;
        case 0x1cd878u: goto label_1cd878;
        case 0x1cd87cu: goto label_1cd87c;
        case 0x1cd880u: goto label_1cd880;
        case 0x1cd884u: goto label_1cd884;
        case 0x1cd888u: goto label_1cd888;
        case 0x1cd88cu: goto label_1cd88c;
        case 0x1cd890u: goto label_1cd890;
        case 0x1cd894u: goto label_1cd894;
        case 0x1cd898u: goto label_1cd898;
        case 0x1cd89cu: goto label_1cd89c;
        case 0x1cd8a0u: goto label_1cd8a0;
        case 0x1cd8a4u: goto label_1cd8a4;
        case 0x1cd8a8u: goto label_1cd8a8;
        case 0x1cd8acu: goto label_1cd8ac;
        case 0x1cd8b0u: goto label_1cd8b0;
        case 0x1cd8b4u: goto label_1cd8b4;
        case 0x1cd8b8u: goto label_1cd8b8;
        case 0x1cd8bcu: goto label_1cd8bc;
        case 0x1cd8c0u: goto label_1cd8c0;
        case 0x1cd8c4u: goto label_1cd8c4;
        case 0x1cd8c8u: goto label_1cd8c8;
        case 0x1cd8ccu: goto label_1cd8cc;
        case 0x1cd8d0u: goto label_1cd8d0;
        case 0x1cd8d4u: goto label_1cd8d4;
        case 0x1cd8d8u: goto label_1cd8d8;
        case 0x1cd8dcu: goto label_1cd8dc;
        case 0x1cd8e0u: goto label_1cd8e0;
        case 0x1cd8e4u: goto label_1cd8e4;
        case 0x1cd8e8u: goto label_1cd8e8;
        case 0x1cd8ecu: goto label_1cd8ec;
        case 0x1cd8f0u: goto label_1cd8f0;
        case 0x1cd8f4u: goto label_1cd8f4;
        case 0x1cd8f8u: goto label_1cd8f8;
        case 0x1cd8fcu: goto label_1cd8fc;
        case 0x1cd900u: goto label_1cd900;
        case 0x1cd904u: goto label_1cd904;
        case 0x1cd908u: goto label_1cd908;
        case 0x1cd90cu: goto label_1cd90c;
        case 0x1cd910u: goto label_1cd910;
        case 0x1cd914u: goto label_1cd914;
        case 0x1cd918u: goto label_1cd918;
        case 0x1cd91cu: goto label_1cd91c;
        case 0x1cd920u: goto label_1cd920;
        case 0x1cd924u: goto label_1cd924;
        case 0x1cd928u: goto label_1cd928;
        case 0x1cd92cu: goto label_1cd92c;
        default: break;
    }

    ctx->pc = 0x1cd7d0u;

label_1cd7d0:
    // 0x1cd7d0: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x1cd7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_1cd7d4:
    // 0x1cd7d4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1cd7d8:
    // 0x1cd7d8: 0x7fbe06d0  sq          $fp, 0x6D0($sp)
    ctx->pc = 0x1cd7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 30));
label_1cd7dc:
    // 0x1cd7dc: 0x7fb00650  sq          $s0, 0x650($sp)
    ctx->pc = 0x1cd7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 16));
label_1cd7e0:
    // 0x1cd7e0: 0x7fb10660  sq          $s1, 0x660($sp)
    ctx->pc = 0x1cd7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 17));
label_1cd7e4:
    // 0x1cd7e4: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x1cd7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_1cd7e8:
    // 0x1cd7e8: 0x7fb30680  sq          $s3, 0x680($sp)
    ctx->pc = 0x1cd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 19));
label_1cd7ec:
    // 0x1cd7ec: 0x7fb40690  sq          $s4, 0x690($sp)
    ctx->pc = 0x1cd7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 20));
label_1cd7f0:
    // 0x1cd7f0: 0x7fb506a0  sq          $s5, 0x6A0($sp)
    ctx->pc = 0x1cd7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 21));
label_1cd7f4:
    // 0x1cd7f4: 0x7fb606b0  sq          $s6, 0x6B0($sp)
    ctx->pc = 0x1cd7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 22));
label_1cd7f8:
    // 0x1cd7f8: 0x7fb706c0  sq          $s7, 0x6C0($sp)
    ctx->pc = 0x1cd7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 23));
label_1cd7fc:
    // 0x1cd7fc: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x1cd7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_1cd800:
    // 0x1cd800: 0xe7bf0740  swc1        $f31, 0x740($sp)
    ctx->pc = 0x1cd800u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_1cd804:
    // 0x1cd804: 0xe7be0738  swc1        $f30, 0x738($sp)
    ctx->pc = 0x1cd804u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_1cd808:
    // 0x1cd808: 0xe7bd0730  swc1        $f29, 0x730($sp)
    ctx->pc = 0x1cd808u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1cd80c:
    // 0x1cd80c: 0xe7bc0728  swc1        $f28, 0x728($sp)
    ctx->pc = 0x1cd80cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_1cd810:
    // 0x1cd810: 0xe7bb0720  swc1        $f27, 0x720($sp)
    ctx->pc = 0x1cd810u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_1cd814:
    // 0x1cd814: 0xe7ba0718  swc1        $f26, 0x718($sp)
    ctx->pc = 0x1cd814u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_1cd818:
    // 0x1cd818: 0xe7b90710  swc1        $f25, 0x710($sp)
    ctx->pc = 0x1cd818u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_1cd81c:
    // 0x1cd81c: 0xe7b80708  swc1        $f24, 0x708($sp)
    ctx->pc = 0x1cd81cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_1cd820:
    // 0x1cd820: 0xe7b70700  swc1        $f23, 0x700($sp)
    ctx->pc = 0x1cd820u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_1cd824:
    // 0x1cd824: 0xe7b606f8  swc1        $f22, 0x6F8($sp)
    ctx->pc = 0x1cd824u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_1cd828:
    // 0x1cd828: 0xe7b506f0  swc1        $f21, 0x6F0($sp)
    ctx->pc = 0x1cd828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_1cd82c:
    // 0x1cd82c: 0xe7b406e8  swc1        $f20, 0x6E8($sp)
    ctx->pc = 0x1cd82cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_1cd830:
    // 0x1cd830: 0x8c62de14  lw          $v0, -0x21EC($v1)
    ctx->pc = 0x1cd830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958612)));
label_1cd834:
    // 0x1cd834: 0x40f809  jalr        $v0
label_1cd838:
    if (ctx->pc == 0x1CD838u) {
        ctx->pc = 0x1CD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD834u;
        // 0x1cd838: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD83Cu;
        goto label_1cd83c;
    }
    ctx->pc = 0x1CD834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD83Cu);
        ctx->pc = 0x1CD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD834u;
        // 0x1cd838: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD834u, 0x1CD83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD83Cu;
label_1cd83c:
    // 0x1cd83c: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x1cd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_1cd840:
    // 0x1cd840: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1cd840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1cd844:
    // 0x1cd844: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x1cd844u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_1cd848:
    // 0x1cd848: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd84c:
    // 0x1cd84c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1cd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cd850:
    // 0x1cd850: 0xafc40648  sw          $a0, 0x648($fp)
    ctx->pc = 0x1cd850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 4));
label_1cd854:
    // 0x1cd854: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd858:
    // 0x1cd858: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1cd85c:
    if (ctx->pc == 0x1CD85Cu) {
        ctx->pc = 0x1CD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD858u;
        // 0x1cd85c: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD860u;
        goto label_1cd860;
    }
    ctx->pc = 0x1CD858u;
    {
        const bool branch_taken_0x1cd858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD858u;
        // 0x1cd85c: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd858) {
            ctx->pc = 0x1CD8E8u;
            goto label_1cd8e8;
        }
    }
    ctx->pc = 0x1CD860u;
label_1cd860:
    // 0x1cd860: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1cd860u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_1cd864:
    // 0x1cd864: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x1cd864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
label_1cd868:
    // 0x1cd868: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x1cd868u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1cd86c:
    // 0x1cd86c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x1cd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1cd870:
    // 0x1cd870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cd870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd874:
    // 0x1cd874: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x1cd874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_1cd878:
    // 0x1cd878: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cd87c:
    if (ctx->pc == 0x1CD87Cu) {
        ctx->pc = 0x1CD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD878u;
        // 0x1cd87c: 0xafdd0010  sw          $sp, 0x10($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD880u;
        goto label_1cd880;
    }
    ctx->pc = 0x1CD878u;
    {
        const bool branch_taken_0x1cd878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD878u;
        // 0x1cd87c: 0xafdd0010  sw          $sp, 0x10($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd878) {
            ctx->pc = 0x1CD884u;
            goto label_1cd884;
        }
    }
    ctx->pc = 0x1CD880u;
label_1cd880:
    // 0x1cd880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd884:
    // 0x1cd884: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1cd888:
    if (ctx->pc == 0x1CD888u) {
        ctx->pc = 0x1CD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD884u;
        // 0x1cd888: 0x8fc60644  lw          $a2, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD88Cu;
        goto label_1cd88c;
    }
    ctx->pc = 0x1CD884u;
    {
        const bool branch_taken_0x1cd884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD884u;
        // 0x1cd888: 0x8fc60644  lw          $a2, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd884) {
            ctx->pc = 0x1CD8E0u;
            goto label_1cd8e0;
        }
    }
    ctx->pc = 0x1CD88Cu;
label_1cd88c:
    // 0x1cd88c: 0xacde0000  sw          $fp, 0x0($a2)
    ctx->pc = 0x1cd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 30));
label_1cd890:
    // 0x1cd890: 0x8fc20648  lw          $v0, 0x648($fp)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1cd894:
    // 0x1cd894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd898:
    // 0x1cd898: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1cd89c:
    if (ctx->pc == 0x1CD89Cu) {
        ctx->pc = 0x1CD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD898u;
        // 0x1cd89c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8A0u;
        goto label_1cd8a0;
    }
    ctx->pc = 0x1CD898u;
    {
        const bool branch_taken_0x1cd898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD898u;
        // 0x1cd89c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd898) {
            ctx->pc = 0x1CD8D0u;
            goto label_1cd8d0;
        }
    }
    ctx->pc = 0x1CD8A0u;
label_1cd8a0:
    // 0x1cd8a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cd8a4:
    // 0x1cd8a4: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1cd8a8:
    // 0x1cd8a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cd8ac:
    // 0x1cd8ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cd8acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1cd8b0:
    // 0x1cd8b0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cd8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cd8b4:
    // 0x1cd8b4: 0x60f809  jalr        $v1
label_1cd8b8:
    if (ctx->pc == 0x1CD8B8u) {
        ctx->pc = 0x1CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B4u;
        // 0x1cd8b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8BCu;
        goto label_1cd8bc;
    }
    ctx->pc = 0x1CD8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD8BCu);
        ctx->pc = 0x1CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B4u;
        // 0x1cd8b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD8B4u, 0x1CD8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD8BCu;
label_1cd8bc:
    // 0x1cd8bc: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_1cd8c0:
    // 0x1cd8c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cd8c4:
    // 0x1cd8c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cd8c8:
    if (ctx->pc == 0x1CD8C8u) {
        ctx->pc = 0x1CD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8C4u;
        // 0x1cd8c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8CCu;
        goto label_1cd8cc;
    }
    ctx->pc = 0x1CD8C4u;
    {
        const bool branch_taken_0x1cd8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8C4u;
        // 0x1cd8c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8c4) {
            ctx->pc = 0x1CD8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd8a0;
        }
    }
    ctx->pc = 0x1CD8CCu;
label_1cd8cc:
    // 0x1cd8cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1cd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cd8d0:
    // 0x1cd8d0: 0x8fc40644  lw          $a0, 0x644($fp)
    ctx->pc = 0x1cd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1cd8d4:
    // 0x1cd8d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cd8d8:
    if (ctx->pc == 0x1CD8D8u) {
        ctx->pc = 0x1CD8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8D4u;
        // 0x1cd8d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8DCu;
        goto label_1cd8dc;
    }
    ctx->pc = 0x1CD8D4u;
    {
        const bool branch_taken_0x1cd8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8D4u;
        // 0x1cd8d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8d4) {
            ctx->pc = 0x1CD8E8u;
            goto label_1cd8e8;
        }
    }
    ctx->pc = 0x1CD8DCu;
label_1cd8dc:
    // 0x1cd8dc: 0x0  nop
    ctx->pc = 0x1cd8dcu;
    // NOP
label_1cd8e0:
    // 0x1cd8e0: 0xc073468  jal         func_1CD1A0
label_1cd8e4:
    if (ctx->pc == 0x1CD8E4u) {
        ctx->pc = 0x1CD8E8u;
        goto label_1cd8e8;
    }
    ctx->pc = 0x1CD8E0u;
    SET_GPR_U32(ctx, 31, 0x1CD8E8u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD8E0u, 0x1CD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8E8u;
label_1cd8e8:
    // 0x1cd8e8: 0x8fc60640  lw          $a2, 0x640($fp)
    ctx->pc = 0x1cd8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_1cd8ec:
    // 0x1cd8ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1cd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1cd8f0:
    // 0x1cd8f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1cd8f4:
    if (ctx->pc == 0x1CD8F4u) {
        ctx->pc = 0x1CD8F8u;
        goto label_1cd8f8;
    }
    ctx->pc = 0x1CD8F0u;
    {
        const bool branch_taken_0x1cd8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8f0) {
            ctx->pc = 0x1CD90Cu;
            goto label_1cd90c;
        }
    }
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0x8fc30644  lw          $v1, 0x644($fp)
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_1cd8fc:
    // 0x1cd8fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cd900:
    // 0x1cd900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd904:
    // 0x1cd904: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1cd908:
    if (ctx->pc == 0x1CD908u) {
        ctx->pc = 0x1CD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD904u;
        // 0x1cd908: 0x8fc40644  lw          $a0, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD90Cu;
        goto label_1cd90c;
    }
    ctx->pc = 0x1CD904u;
    {
        const bool branch_taken_0x1cd904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD904u;
        // 0x1cd908: 0x8fc40644  lw          $a0, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd904) {
            ctx->pc = 0x1CD918u;
            goto label_1cd918;
        }
    }
    ctx->pc = 0x1CD90Cu;
label_1cd90c:
    // 0x1cd90c: 0xc073468  jal         func_1CD1A0
label_1cd910:
    if (ctx->pc == 0x1CD910u) {
        ctx->pc = 0x1CD914u;
        goto label_1cd914;
    }
    ctx->pc = 0x1CD90Cu;
    SET_GPR_U32(ctx, 31, 0x1CD914u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD90Cu, 0x1CD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD914u;
label_1cd914:
    // 0x1cd914: 0x0  nop
    ctx->pc = 0x1cd914u;
    // NOP
label_1cd918:
    // 0x1cd918: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1cd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1cd91c:
    // 0x1cd91c: 0x8c5d0008  lw          $sp, 0x8($v0)
    ctx->pc = 0x1cd91cu;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cd920:
    // 0x1cd920: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1cd920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1cd924:
    // 0x1cd924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cd928:
    // 0x1cd928: 0x600008  jr          $v1
label_1cd92c:
    if (ctx->pc == 0x1CD92Cu) {
        ctx->pc = 0x1CD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD928u;
        // 0x1cd92c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD930u;
        goto label_fallthrough_0x1cd928;
    }
    ctx->pc = 0x1CD928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x1CD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD928u;
        // 0x1cd92c: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cd928:
    ctx->pc = 0x1CD930u;
}
