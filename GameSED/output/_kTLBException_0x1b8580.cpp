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

// Function: _kTLBException
// Address: 0x1b8580 - 0x1b869c
void _kTLBException_0x1b8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kTLBException_0x1b8580");
#endif

    switch (ctx->pc) {
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8584u: goto label_1b8584;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b8590u: goto label_1b8590;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b859cu: goto label_1b859c;
        case 0x1b85a0u: goto label_1b85a0;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85a8u: goto label_1b85a8;
        case 0x1b85acu: goto label_1b85ac;
        case 0x1b85b0u: goto label_1b85b0;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85b8u: goto label_1b85b8;
        case 0x1b85bcu: goto label_1b85bc;
        case 0x1b85c0u: goto label_1b85c0;
        case 0x1b85c4u: goto label_1b85c4;
        case 0x1b85c8u: goto label_1b85c8;
        case 0x1b85ccu: goto label_1b85cc;
        case 0x1b85d0u: goto label_1b85d0;
        case 0x1b85d4u: goto label_1b85d4;
        case 0x1b85d8u: goto label_1b85d8;
        case 0x1b85dcu: goto label_1b85dc;
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b85e4u: goto label_1b85e4;
        case 0x1b85e8u: goto label_1b85e8;
        case 0x1b85ecu: goto label_1b85ec;
        case 0x1b85f0u: goto label_1b85f0;
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b85fcu: goto label_1b85fc;
        case 0x1b8600u: goto label_1b8600;
        case 0x1b8604u: goto label_1b8604;
        case 0x1b8608u: goto label_1b8608;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8614u: goto label_1b8614;
        case 0x1b8618u: goto label_1b8618;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8620u: goto label_1b8620;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8628u: goto label_1b8628;
        case 0x1b862cu: goto label_1b862c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8638u: goto label_1b8638;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8640u: goto label_1b8640;
        case 0x1b8644u: goto label_1b8644;
        case 0x1b8648u: goto label_1b8648;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b8650u: goto label_1b8650;
        case 0x1b8654u: goto label_1b8654;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        default: break;
    }

    ctx->pc = 0x1b8580u;

label_1b8580:
    // 0x1b8580: 0x3c1a0041  lui         $k0, 0x41
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)65 << 16));
label_1b8584:
    // 0x1b8584: 0x275ad180  addiu       $k0, $k0, -0x2E80
    ctx->pc = 0x1b8584u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294955392));
label_1b8588:
    // 0x1b8588: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1b8588u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1b858c:
    // 0x1b858c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1b858cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1b8590:
    // 0x1b8590: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1b8590u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1b8594:
    // 0x1b8594: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1b8594u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1b8598:
    // 0x1b8598: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1b8598u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1b859c:
    // 0x1b859c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1b859cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1b85a0:
    // 0x1b85a0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1b85a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1b85a4:
    // 0x1b85a4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1b85a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1b85a8:
    // 0x1b85a8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1b85a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1b85ac:
    // 0x1b85ac: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1b85acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1b85b0:
    // 0x1b85b0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1b85b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1b85b4:
    // 0x1b85b4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1b85b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1b85b8:
    // 0x1b85b8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1b85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1b85bc:
    // 0x1b85bc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1b85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1b85c0:
    // 0x1b85c0: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1b85c0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1b85c4:
    // 0x1b85c4: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1b85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1b85c8:
    // 0x1b85c8: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1b85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1b85cc:
    // 0x1b85cc: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1b85ccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1b85d0:
    // 0x1b85d0: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1b85d0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1b85d4:
    // 0x1b85d4: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1b85d4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1b85d8:
    // 0x1b85d8: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1b85d8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1b85dc:
    // 0x1b85dc: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1b85dcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1b85e0:
    // 0x1b85e0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1b85e0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1b85e4:
    // 0x1b85e4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1b85e4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1b85e8:
    // 0x1b85e8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1b85e8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1b85ec:
    // 0x1b85ec: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1b85ecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1b85f0:
    // 0x1b85f0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1b85f0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1b85f4:
    // 0x1b85f4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1b85f4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1b85f8:
    // 0x1b85f8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1b85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1b85fc:
    // 0x1b85fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b85fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b8600:
    // 0x1b8600: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8604:
    // 0x1b8604: 0xfc22d380  sd          $v0, -0x2C80($at)
    ctx->pc = 0x1b8604u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955904), GPR_U64(ctx, 2));
label_1b8608:
    // 0x1b8608: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1b8608u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1b860c:
    // 0x1b860c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8610:
    // 0x1b8610: 0xfc22d388  sd          $v0, -0x2C78($at)
    ctx->pc = 0x1b8610u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955912), GPR_U64(ctx, 2));
label_1b8614:
    // 0x1b8614: 0x1012  mflo        $v0
    ctx->pc = 0x1b8614u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b8618:
    // 0x1b8618: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b861c:
    // 0x1b861c: 0xfc22d390  sd          $v0, -0x2C70($at)
    ctx->pc = 0x1b861cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955920), GPR_U64(ctx, 2));
label_1b8620:
    // 0x1b8620: 0x70001012  mflo1       $v0
    ctx->pc = 0x1b8620u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1b8624:
    // 0x1b8624: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8628:
    // 0x1b8628: 0xfc22d398  sd          $v0, -0x2C68($at)
    ctx->pc = 0x1b8628u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955928), GPR_U64(ctx, 2));
label_1b862c:
    // 0x1b862c: 0x1028  mfsa        $v0
    ctx->pc = 0x1b862cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1b8630:
    // 0x1b8630: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8634:
    // 0x1b8634: 0xfc22d3a0  sd          $v0, -0x2C60($at)
    ctx->pc = 0x1b8634u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294955936), GPR_U64(ctx, 2));
label_1b8638:
    // 0x1b8638: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1b8638u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1b863c:
    // 0x1b863c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1b863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1b8640:
    // 0x1b8640: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1b8640u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1b8644:
    // 0x1b8644: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1b8644u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1b8648:
    // 0x1b8648: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x1b8648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
label_1b864c:
    // 0x1b864c: 0x2508d180  addiu       $t0, $t0, -0x2E80
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955392));
label_1b8650:
    // 0x1b8650: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_1b8654:
    // 0x1b8654: 0xac26d3a8  sw          $a2, -0x2C58($at)
    ctx->pc = 0x1b8654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955944), GPR_U32(ctx, 6));
label_1b8658:
    // 0x1b8658: 0x3c01001c  lui         $at, 0x1C
    ctx->pc = 0x1b8658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28 << 16));
label_1b865c:
    // 0x1b865c: 0x24218680  addiu       $at, $at, -0x7980
    ctx->pc = 0x1b865cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936192));
label_1b8660:
    // 0x1b8660: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1b8660u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1b8664:
    // 0x1b8664: 0x40f  sync.p
    ctx->pc = 0x1b8664u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1b8668:
    // 0x1b8668: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1b866c:
    // 0x1b866c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b8670:
    // 0x1b8670: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1b8670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1b8674:
    // 0x1b8674: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1b8674u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1b8678:
    // 0x1b8678: 0x40f  sync.p
    ctx->pc = 0x1b8678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1b867c:
    // 0x1b867c: 0x42000018  eret
    ctx->pc = 0x1b867cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1b8680:
    // 0x1b8680: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1b8680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_1b8684:
    // 0x1b8684: 0x8c21bcf0  lw          $at, -0x4310($at)
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950128)));
label_1b8688:
    // 0x1b8688: 0x3c1d0041  lui         $sp, 0x41
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)65 << 16));
label_1b868c:
    // 0x1b868c: 0x20f809  jalr        $at
label_1b8690:
    if (ctx->pc == 0x1B8690u) {
        ctx->pc = 0x1B8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B868Cu;
        // 0x1b8690: 0x27bdd180  addiu       $sp, $sp, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8694u;
        goto label_1b8694;
    }
    ctx->pc = 0x1B868Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1B8694u);
        ctx->pc = 0x1B8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B868Cu;
        // 0x1b8690: 0x27bdd180  addiu       $sp, $sp, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B868Cu, 0x1B8694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8694u;
label_1b8694:
    // 0x1b8694: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_1b8698:
    // 0x1b8698: 0xc  syscall     0
    ctx->pc = 0x1b8698u;
    ctx->pc = 0x1B869Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x1b869cu;
}
