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

// Function: _kDebugException
// Address: 0x1b87c0 - 0x1b88dc
void _kDebugException_0x1b87c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kDebugException_0x1b87c0");
#endif

    switch (ctx->pc) {
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87ccu: goto label_1b87cc;
        case 0x1b87d0u: goto label_1b87d0;
        case 0x1b87d4u: goto label_1b87d4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87e4u: goto label_1b87e4;
        case 0x1b87e8u: goto label_1b87e8;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f0u: goto label_1b87f0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b87f8u: goto label_1b87f8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8808u: goto label_1b8808;
        case 0x1b880cu: goto label_1b880c;
        case 0x1b8810u: goto label_1b8810;
        case 0x1b8814u: goto label_1b8814;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b881cu: goto label_1b881c;
        case 0x1b8820u: goto label_1b8820;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8828u: goto label_1b8828;
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8834u: goto label_1b8834;
        case 0x1b8838u: goto label_1b8838;
        case 0x1b883cu: goto label_1b883c;
        case 0x1b8840u: goto label_1b8840;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b884cu: goto label_1b884c;
        case 0x1b8850u: goto label_1b8850;
        case 0x1b8854u: goto label_1b8854;
        case 0x1b8858u: goto label_1b8858;
        case 0x1b885cu: goto label_1b885c;
        case 0x1b8860u: goto label_1b8860;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b886cu: goto label_1b886c;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8874u: goto label_1b8874;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b887cu: goto label_1b887c;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8884u: goto label_1b8884;
        case 0x1b8888u: goto label_1b8888;
        case 0x1b888cu: goto label_1b888c;
        case 0x1b8890u: goto label_1b8890;
        case 0x1b8894u: goto label_1b8894;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88a4u: goto label_1b88a4;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88b4u: goto label_1b88b4;
        case 0x1b88b8u: goto label_1b88b8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c0u: goto label_1b88c0;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88ccu: goto label_1b88cc;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88d8u: goto label_1b88d8;
        default: break;
    }

    ctx->pc = 0x1b87c0u;

label_1b87c0:
    // 0x1b87c0: 0x3c1a0041  lui         $k0, 0x41
    ctx->pc = 0x1b87c0u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)65 << 16));
label_1b87c4:
    // 0x1b87c4: 0x275ad180  addiu       $k0, $k0, -0x2E80
    ctx->pc = 0x1b87c4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294955392));
label_1b87c8:
    // 0x1b87c8: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1b87c8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1b87cc:
    // 0x1b87cc: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1b87ccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1b87d0:
    // 0x1b87d0: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1b87d0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1b87d4:
    // 0x1b87d4: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1b87d4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1b87d8:
    // 0x1b87d8: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1b87d8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1b87dc:
    // 0x1b87dc: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1b87dcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1b87e0:
    // 0x1b87e0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1b87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1b87e4:
    // 0x1b87e4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1b87e4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1b87e8:
    // 0x1b87e8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1b87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1b87ec:
    // 0x1b87ec: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1b87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1b87f0:
    // 0x1b87f0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1b87f0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1b87f4:
    // 0x1b87f4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1b87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1b87f8:
    // 0x1b87f8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1b87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1b87fc:
    // 0x1b87fc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1b87fcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1b8800:
    // 0x1b8800: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1b8800u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1b8804:
    // 0x1b8804: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1b8804u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1b8808:
    // 0x1b8808: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1b8808u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1b880c:
    // 0x1b880c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1b880cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1b8810:
    // 0x1b8810: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1b8810u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1b8814:
    // 0x1b8814: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1b8814u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1b8818:
    // 0x1b8818: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1b8818u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1b881c:
    // 0x1b881c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1b881cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1b8820:
    // 0x1b8820: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1b8820u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1b8824:
    // 0x1b8824: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1b8824u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1b8828:
    // 0x1b8828: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1b8828u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1b882c:
    // 0x1b882c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1b882cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1b8830:
    // 0x1b8830: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1b8830u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1b8834:
    // 0x1b8834: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1b8834u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1b8838:
    // 0x1b8838: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1b8838u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1b883c:
    // 0x1b883c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b883cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b8840:
    // 0x1b8840: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8844:
    // 0x1b8844: 0xfc22d380  sd          $v0, -0x2C80($at)
    ctx->pc = 0x1b8844u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955904), GPR_U64(ctx, 2));
label_1b8848:
    // 0x1b8848: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1b8848u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1b884c:
    // 0x1b884c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8850:
    // 0x1b8850: 0xfc22d388  sd          $v0, -0x2C78($at)
    ctx->pc = 0x1b8850u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955912), GPR_U64(ctx, 2));
label_1b8854:
    // 0x1b8854: 0x1012  mflo        $v0
    ctx->pc = 0x1b8854u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b8858:
    // 0x1b8858: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b885c:
    // 0x1b885c: 0xfc22d390  sd          $v0, -0x2C70($at)
    ctx->pc = 0x1b885cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955920), GPR_U64(ctx, 2));
label_1b8860:
    // 0x1b8860: 0x70001012  mflo1       $v0
    ctx->pc = 0x1b8860u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1b8864:
    // 0x1b8864: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8868:
    // 0x1b8868: 0xfc22d398  sd          $v0, -0x2C68($at)
    ctx->pc = 0x1b8868u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955928), GPR_U64(ctx, 2));
label_1b886c:
    // 0x1b886c: 0x1028  mfsa        $v0
    ctx->pc = 0x1b886cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1b8870:
    // 0x1b8870: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8874:
    // 0x1b8874: 0xfc22d3a0  sd          $v0, -0x2C60($at)
    ctx->pc = 0x1b8874u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955936), GPR_U64(ctx, 2));
label_1b8878:
    // 0x1b8878: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1b8878u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1b887c:
    // 0x1b887c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1b887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1b8880:
    // 0x1b8880: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1b8884:
    // 0x1b8884: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1b8888:
    // 0x1b8888: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x1b8888u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_1b888c:
    // 0x1b888c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1b888cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
label_1b8890:
    // 0x1b8890: 0x2529d180  addiu       $t1, $t1, -0x2E80
    ctx->pc = 0x1b8890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955392));
label_1b8894:
    // 0x1b8894: 0x3c01001c  lui         $at, 0x1C
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28 << 16));
label_1b8898:
    // 0x1b8898: 0x242188bc  addiu       $at, $at, -0x7744
    ctx->pc = 0x1b8898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936764));
label_1b889c:
    // 0x1b889c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1b889cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1b88a0:
    // 0x1b88a0: 0x40f  sync.p
    ctx->pc = 0x1b88a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1b88a4:
    // 0x1b88a4: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1b88a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1b88a8:
    // 0x1b88a8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b88ac:
    // 0x1b88ac: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1b88acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1b88b0:
    // 0x1b88b0: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1b88b0u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1b88b4:
    // 0x1b88b4: 0x40f  sync.p
    ctx->pc = 0x1b88b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1b88b8:
    // 0x1b88b8: 0x42000018  eret
    ctx->pc = 0x1b88b8u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1b88bc:
    // 0x1b88bc: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x1b88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_1b88c0:
    // 0x1b88c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1b88c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_1b88c4:
    // 0x1b88c4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b88c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1b88c8:
    // 0x1b88c8: 0x8c21bcf8  lw          $at, -0x4308($at)
    ctx->pc = 0x1b88c8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
label_1b88cc:
    // 0x1b88cc: 0x3c1d0041  lui         $sp, 0x41
    ctx->pc = 0x1b88ccu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)65 << 16));
label_1b88d0:
    // 0x1b88d0: 0x20f809  jalr        $at
label_1b88d4:
    if (ctx->pc == 0x1B88D4u) {
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0x27bdd180  addiu       $sp, $sp, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88D8u;
        goto label_1b88d8;
    }
    ctx->pc = 0x1B88D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1B88D8u);
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0x27bdd180  addiu       $sp, $sp, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B88D0u, 0x1B88D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B88D8u;
label_1b88d8:
    // 0x1b88d8: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x1b88d8u;
    runtime->handleBreak(rdram, ctx);
    ctx->pc = 0x1b88dcu;
}
