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

// Function: EffectStungunDraw__FP16ST_EffectSpecialP9ApcPtcSplff
// Address: 0x128218 - 0x128a08
void EffectStungunDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x128218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStungunDraw__FP16ST_EffectSpecialP9ApcPtcSplff_0x128218");
#endif

    switch (ctx->pc) {
        case 0x128328u: goto label_128328;
        case 0x128338u: goto label_128338;
        case 0x12836cu: goto label_12836c;
        case 0x128498u: goto label_128498;
        case 0x128768u: goto label_128768;
        case 0x1287a8u: goto label_1287a8;
        case 0x128938u: goto label_128938;
        case 0x128940u: goto label_128940;
        case 0x128960u: goto label_128960;
        case 0x128968u: goto label_128968;
        case 0x128990u: goto label_128990;
        default: break;
    }

    ctx->pc = 0x128218u;

    // 0x128218: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x128218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x12821c: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x12821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x128220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128224: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x128224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x128228: 0x263701b0  addiu       $s7, $s1, 0x1B0
    ctx->pc = 0x128228u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x12822c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x12822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x128230: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x128230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x128234: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x128234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x128238: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x128238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x12823c: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x12823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x128240: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x128240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x128244: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x128244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x128248: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x128248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x12824c: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x12824cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x128250: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x128250u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x128254: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x128254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x128258: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x128258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x12825c: 0x8ef30048  lw          $s3, 0x48($s7)
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x128260: 0x526001da  beql        $s3, $zero, . + 4 + (0x1DA << 2)
    ctx->pc = 0x128260u;
    {
        const bool branch_taken_0x128260 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x128260) {
            ctx->pc = 0x128264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128260u;
            // 0x128264: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1289CCu;
            goto label_1289cc;
        }
    }
    ctx->pc = 0x128268u;
    // 0x128268: 0x122001d7  beqz        $s1, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x128268u;
    {
        const bool branch_taken_0x128268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128268u;
        // 0x12826c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128268) {
            ctx->pc = 0x1289C8u;
            goto label_1289c8;
        }
    }
    ctx->pc = 0x128270u;
    // 0x128270: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x128270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x128274: 0x546201d5  bnel        $v1, $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x128274u;
    {
        const bool branch_taken_0x128274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x128274) {
            ctx->pc = 0x128278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128274u;
            // 0x128278: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1289CCu;
            goto label_1289cc;
        }
    }
    ctx->pc = 0x12827Cu;
    // 0x12827c: 0xc6f70000  lwc1        $f23, 0x0($s7)
    ctx->pc = 0x12827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x128280: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x128280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128284: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x128284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x128288: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x128288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12828c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12828cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x128290: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x128294: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x128294u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x128298: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x128298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12829c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12829cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282a0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1282a4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1282a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282a8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1282ac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1282acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282b0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1282b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1282b4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1282b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282b8: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x1282b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1282bc: 0x86e30006  lh          $v1, 0x6($s7)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1282c0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1282C0u;
    {
        const bool branch_taken_0x1282c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1282C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282C0u;
        // 0x1282c4: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282c0) {
            ctx->pc = 0x1282E0u;
            goto label_1282e0;
        }
    }
    ctx->pc = 0x1282C8u;
    // 0x1282c8: 0x93a200b3  lbu         $v0, 0xB3($sp)
    ctx->pc = 0x1282c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    // 0x1282cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1282CCu;
    {
        const bool branch_taken_0x1282cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282cc) {
            ctx->pc = 0x1282D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1282CCu;
            // 0x1282d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1282D4u;
            goto label_1282d4;
        }
    }
    ctx->pc = 0x1282D4u;
label_1282d4:
    // 0x1282d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1282d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1282d8: 0x1012  mflo        $v0
    ctx->pc = 0x1282d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1282dc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1282dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_1282e0:
    // 0x1282e0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1282e4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x1282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1282e8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1282e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1282ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1282ECu;
    {
        const bool branch_taken_0x1282ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282ECu;
        // 0x1282f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282ec) {
            ctx->pc = 0x128318u;
            goto label_128318;
        }
    }
    ctx->pc = 0x1282F4u;
    // 0x1282f4: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1282f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1282f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1282fc: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x128300: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128304: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x128308: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x128308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12830c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x12830cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128310: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128310u;
        // 0x128314: 0xac830098  sw          $v1, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x12836Cu;
            goto label_12836c;
        }
    }
    ctx->pc = 0x128318u;
label_128318:
    // 0x128318: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x12831c: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x12831cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x128320: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128320u;
    SET_GPR_U32(ctx, 31, 0x128328u);
    ctx->pc = 0x128324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128320u;
    // 0x128324: 0x8cc40084  lw          $a0, 0x84($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128320u, 0x128328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128328u;
label_128328:
    // 0x128328: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12832c: 0x2442d650  addiu       $v0, $v0, -0x29B0
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x128330: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128330u;
    SET_GPR_U32(ctx, 31, 0x128338u);
    ctx->pc = 0x128334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128330u;
    // 0x128334: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128330u, 0x128338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128338u;
label_128338:
    // 0x128338: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12833c: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x12833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x128340: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x128344: 0x8c70008c  lw          $s0, 0x8C($v1)
    ctx->pc = 0x128344u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x21D6DCu));
    // 0x128348: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x128348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x12834c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x12834cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6D0u));
    // 0x128350: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x128350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128354: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x128354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128358: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x128358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12835c: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x12835cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6D8u));
    // 0x128360: 0xacc5008c  sw          $a1, 0x8C($a2)
    ctx->pc = 0x128360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D6DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6DCu, _value); } while (0);
    // 0x128364: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x128364u;
    SET_GPR_U32(ctx, 31, 0x12836Cu);
    ctx->pc = 0x128368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128364u;
    // 0x128368: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x128364u, 0x12836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12836Cu;
label_12836c:
    // 0x12836c: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x12836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x128370: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x128374: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x128374u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x128378: 0x354a8005  ori         $t2, $t2, 0x8005
    ctx->pc = 0x128378u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32773);
    // 0x12837c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x12837cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x128380: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x128380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x128384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128388: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x12838c: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x12838cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x128390: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x128390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x128394: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x128394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x128398: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12839c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1283a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1283a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1283a4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1283a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1283a8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1283a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1283ac: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1283b0: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1283b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x1283b4: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1283b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1283b8: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1283b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1283bc: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1283bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1283c0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x1283c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x1283c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1283c8: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x1283c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1283cc: 0x24490050  addiu       $t1, $v0, 0x50
    ctx->pc = 0x1283ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1283d0: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1283d4: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x1283d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1283d8: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1283d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1283dc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1283dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1283e0: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x1283e0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x1283e4: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1283e8: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1283e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1283ec: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1283ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1283f0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1283f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1283f4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1283f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1283f8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1283f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1283fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1283fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x128400: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x128400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x128404: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x128404u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x128408: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x128408u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x12840c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x12840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x128410: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x128410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128414: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x128414u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x128418: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x128418u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12841c: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12841cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x128420: 0xfcec0008  sd          $t4, 0x8($a3)
    ctx->pc = 0x128420u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 12));
    // 0x128424: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x128424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x128428: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x128428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12842c: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x12842cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x128430: 0x86e20006  lh          $v0, 0x6($s7)
    ctx->pc = 0x128430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x128434: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128434u;
    {
        const bool branch_taken_0x128434 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128434u;
        // 0x128438: 0xc6f40020  lwc1        $f20, 0x20($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128434) {
            ctx->pc = 0x128458u;
            goto label_128458;
        }
    }
    ctx->pc = 0x12843Cu;
    // 0x12843c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12843cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12844c: 0x0  nop
    ctx->pc = 0x12844cu;
    // NOP
    // 0x128450: 0x0  nop
    ctx->pc = 0x128450u;
    // NOP
    // 0x128454: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x128454u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_128458:
    // 0x128458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x128458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12845c: 0x1840010e  blez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x12845Cu;
    {
        const bool branch_taken_0x12845c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12845Cu;
        // 0x128460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12845c) {
            ctx->pc = 0x128898u;
            goto label_128898;
        }
    }
    ctx->pc = 0x128464u;
    // 0x128464: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x128464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x128468: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12846c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x128470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x128474: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x128474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128478: 0x244deb70  addiu       $t5, $v0, -0x1490
    ctx->pc = 0x128478u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x12847c: 0x246cebf0  addiu       $t4, $v1, -0x1410
    ctx->pc = 0x12847cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x128480: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128484: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x128484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128488: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x128488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12848c: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x12848cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128490: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x128490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128494: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x128494u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_128498:
    // 0x128498: 0x26230240  addiu       $v1, $s1, 0x240
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x12849c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x12849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1284a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1284a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1284a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1284a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1284ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1284acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1284b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1284b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1284b4: 0x96e20046  lhu         $v0, 0x46($s7)
    ctx->pc = 0x1284b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 70)));
    // 0x1284b8: 0x4602b8c2  mul.s       $f3, $f23, $f2
    ctx->pc = 0x1284b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1284bc: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1284bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1284c0: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x1284c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1284c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1284c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1284c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1284c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1284cc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1284ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1284d0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1284d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1284d4: 0xc6200248  lwc1        $f0, 0x248($s1)
    ctx->pc = 0x1284d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1284d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1284d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1284dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1284DCu;
    {
        const bool branch_taken_0x1284dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284DCu;
        // 0x1284e0: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284dc) {
            ctx->pc = 0x1284F8u;
            goto label_1284f8;
        }
    }
    ctx->pc = 0x1284E4u;
    // 0x1284e4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1284e4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1284e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1284e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1284ec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1284ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1284f0: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1284f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1284f4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1284f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1284f8:
    // 0x1284f8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1284f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1284fc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1284fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128500: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x128500u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x128504: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x128504u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x128508: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x128508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12850c: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x12850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128510: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x128510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x128514: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x128514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x128518: 0xd9a40000  lqc2        $vf4, 0x0($t5)
    ctx->pc = 0x128518u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x12851c: 0xd9a50010  lqc2        $vf5, 0x10($t5)
    ctx->pc = 0x12851cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x128520: 0xd9a60020  lqc2        $vf6, 0x20($t5)
    ctx->pc = 0x128520u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x128524: 0xd9a70030  lqc2        $vf7, 0x30($t5)
    ctx->pc = 0x128524u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x128528: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x128528u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12852c: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x12852cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128530: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x128530u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128534: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x128534u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128538: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x128538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12853c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12853cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128540: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x128540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128544: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x128544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x128548: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x128548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12854c: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x12854cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128550: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x128550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128554: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x128554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x128558: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x128558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12855c: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x12855cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128560: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x128560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128564: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x128564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x128568: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x128568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12856c: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x12856cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128570: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x128570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128574: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x128574u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x128578: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x128578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12857c: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x12857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x128580: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x128580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x128584: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x128584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x128588: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x128588u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12858c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12858cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128590: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x128590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128594: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x128594u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128598: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x128598u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12859c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12859cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1285a0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1285a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1285a4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1285a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1285a8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1285a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1285ac: 0xfa8c0000  sqc2        $vf12, 0x0($s4)
    ctx->pc = 0x1285acu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1285b0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1285b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1285b4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1285b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1285b8: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1285b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1285bc: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1285bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1285c0: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x1285c0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1285c4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1285c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1285c8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1285c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1285cc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1285ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1285d0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1285d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1285d4: 0xf92c0000  sqc2        $vf12, 0x0($t1)
    ctx->pc = 0x1285d4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1285d8: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x1285d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1285dc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1285dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1285e0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1285e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1285e4: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x1285e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1285e8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1285e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1285ec: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1285ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1285f0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1285f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1285f4: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1285f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1285f8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1285f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1285fc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1285fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128600: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x128600u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x128604: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x128604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x128608: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x128608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12860c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12860cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x128610: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x128610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x128614: 0xfa460000  sqc2        $vf6, 0x0($s2)
    ctx->pc = 0x128614u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x128618: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x128618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12861c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x12861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128620: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x128620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128624: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128628: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x128628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x12862c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x12862cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x128630: 0xe7b500cc  swc1        $f21, 0xCC($sp)
    ctx->pc = 0x128630u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x128634: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x128634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x128638: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x128638u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12863c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x12863cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128640: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x128640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128644: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x128644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128648: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x128648u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12864c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x12864cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x128650: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x128650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x128654: 0x4a0003bf  vwaitq
    ctx->pc = 0x128654u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x128658: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x128658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12865c: 0xfa660000  sqc2        $vf6, 0x0($s3)
    ctx->pc = 0x12865cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x128660: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x128660u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x128664: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x128664u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x128668: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x128668u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12866c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12866cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x128670: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x128670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x128674: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x128674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x128678: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x128678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12867c: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x128680: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x128680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x128684: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x128684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x128688: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x128688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12868c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12868cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x128690: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x128690u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128694: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x128694u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x128698: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x128698u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12869c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x12869cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1286a0: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1286a0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1286a4: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1286a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1286a8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1286a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1286ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1286acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1286b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1286b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1286b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1286b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1286b8: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1286b8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1286bc: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x1286bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1286c0: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x1286c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1286c4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1286c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1286c8: 0xfbc20000  sqc2        $vf2, 0x0($fp)
    ctx->pc = 0x1286c8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1286cc: 0xd9840000  lqc2        $vf4, 0x0($t4)
    ctx->pc = 0x1286ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1286d0: 0xd9850010  lqc2        $vf5, 0x10($t4)
    ctx->pc = 0x1286d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1286d4: 0xd9860020  lqc2        $vf6, 0x20($t4)
    ctx->pc = 0x1286d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x1286d8: 0xd9870030  lqc2        $vf7, 0x30($t4)
    ctx->pc = 0x1286d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1286dc: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x1286dcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286e0: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x1286e0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1286e4: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x1286e4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1286e8: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x1286e8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1286ec: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1286ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1286f0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1286f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1286f4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1286f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1286f8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1286f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1286fc: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1286fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128700: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x128700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128704: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x128704u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128708: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x128708u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x12870c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x12870cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128710: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x128710u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128714: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x128714u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128718: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x128718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x12871c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x12871cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128720: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x128720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128724: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x128724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x128728: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x128728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x12872c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x12872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x128730: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x128730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x128734: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x128734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x128738: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x128738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x12873c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128740: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x128740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128744: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x128744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128748: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x128748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12874c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12874cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128750: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x128750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x128754: 0x7faa0110  sq          $t2, 0x110($sp)
    ctx->pc = 0x128754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 10));
    // 0x128758: 0x7fab0120  sq          $t3, 0x120($sp)
    ctx->pc = 0x128758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 11));
    // 0x12875c: 0x7fac0130  sq          $t4, 0x130($sp)
    ctx->pc = 0x12875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 12));
    // 0x128760: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x128760u;
    SET_GPR_U32(ctx, 31, 0x128768u);
    ctx->pc = 0x128764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128760u;
    // 0x128764: 0x7fad0140  sq          $t5, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x128760u, 0x128768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128768u;
label_128768:
    // 0x128768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12876c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x128770: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x128770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x128774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128778: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x128778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x12877c: 0x7bad0140  lq          $t5, 0x140($sp)
    ctx->pc = 0x12877cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x128780: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x128780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128784: 0x7bac0130  lq          $t4, 0x130($sp)
    ctx->pc = 0x128784u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x128788: 0x7bab0120  lq          $t3, 0x120($sp)
    ctx->pc = 0x128788u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12878c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12878cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128790: 0x7baa0110  lq          $t2, 0x110($sp)
    ctx->pc = 0x128790u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x128794: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x128794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128798: 0x7ba90100  lq          $t1, 0x100($sp)
    ctx->pc = 0x128798u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12879c: 0x82a80b  movn        $s5, $a0, $v0
    ctx->pc = 0x12879cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 4));
    // 0x1287a0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1287a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1287a4: 0x0  nop
    ctx->pc = 0x1287a4u;
    // NOP
label_1287a8:
    // 0x1287a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1287ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1287acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1287b0: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x1287b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x1287b4: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x1287b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1287b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1287B8u;
    {
        const bool branch_taken_0x1287b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1287b8) {
            ctx->pc = 0x1287BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1287B8u;
            // 0x1287bc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1287D0u;
            goto label_1287d0;
        }
    }
    ctx->pc = 0x1287C0u;
    // 0x1287c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1287c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1287c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1287C4u;
    {
        const bool branch_taken_0x1287c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287C4u;
        // 0x1287c8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287c4) {
            ctx->pc = 0x1287E8u;
            goto label_1287e8;
        }
    }
    ctx->pc = 0x1287CCu;
    // 0x1287cc: 0x0  nop
    ctx->pc = 0x1287ccu;
    // NOP
label_1287d0:
    // 0x1287d0: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x1287d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x1287d4: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x1287d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x1287d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1287D8u;
    {
        const bool branch_taken_0x1287d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287D8u;
        // 0x1287dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287d8) {
            ctx->pc = 0x1287ECu;
            goto label_1287ec;
        }
    }
    ctx->pc = 0x1287E0u;
    // 0x1287e0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1287e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1287e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1287e8:
    // 0x1287e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1287e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1287ec:
    // 0x1287ec: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1287ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1287f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1287F0u;
    {
        const bool branch_taken_0x1287f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287F0u;
        // 0x1287f4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287f0) {
            ctx->pc = 0x1287A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1287a8;
        }
    }
    ctx->pc = 0x1287F8u;
    // 0x1287f8: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1287F8u;
    {
        const bool branch_taken_0x1287f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1287FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287F8u;
        // 0x1287fc: 0x93a300b3  lbu         $v1, 0xB3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287f8) {
            ctx->pc = 0x128874u;
            goto label_128874;
        }
    }
    ctx->pc = 0x128800u;
    // 0x128800: 0xc6e00018  lwc1        $f0, 0x18($s7)
    ctx->pc = 0x128800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x128804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128808: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x128808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12880c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12880cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128810: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x128810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x128814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128818: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x128818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12881c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128820: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x128820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128824: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x128828: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12882c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12882cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128830: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x128830u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x128834: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x128834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128838: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x128838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12883c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12883cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128840: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x128840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x128844: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x128844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12884c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x128850: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x128850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128854: 0xc6e0001c  lwc1        $f0, 0x1C($s7)
    ctx->pc = 0x128854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128858: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x128858u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12885c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12885cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x128860: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x128860u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x128864: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x128864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x128868: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x128868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12886c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12886cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x128870: 0x93a300b3  lbu         $v1, 0xB3($sp)
    ctx->pc = 0x128870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
label_128874:
    // 0x128874: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x128874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x128878: 0x86e20006  lh          $v0, 0x6($s7)
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x12887c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12887cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x128880: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x128880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x128884: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x128884u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x128888: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x128888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12888c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x128890: 0x1440ff01  bnez        $v0, . + 4 + (-0xFF << 2)
    ctx->pc = 0x128890u;
    {
        const bool branch_taken_0x128890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128890u;
        // 0x128894: 0xa3a300b3  sb          $v1, 0xB3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 179), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128890) {
            ctx->pc = 0x128498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128498;
        }
    }
    ctx->pc = 0x128898u;
label_128898:
    // 0x128898: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x128898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12889c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x12889cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1288a0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1288a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1288a4: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1288a8: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x1288a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x1288ac: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x1288acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x1288b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1288b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1288b4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1288b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1288b8: 0x346324e2  ori         $v1, $v1, 0x24E2
    ctx->pc = 0x1288b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9442);
    // 0x1288bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1288bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1288c0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x1288c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x1288c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1288c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1288c8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1288c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1288cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1288ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1288d0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1288d4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1288d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1288d8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1288d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1288dc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1288dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1288e0: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1288e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1288e4: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1288e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1288e8: 0x2652d650  addiu       $s2, $s2, -0x29B0
    ctx->pc = 0x1288e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956624));
    // 0x1288ec: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1288f0: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1288f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1288f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1288f8: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1288fc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x128900: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x128900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128904: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x128904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x128908: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x128908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12890c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12890cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x128910: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x128910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x128914: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x128914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x128918: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x128918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12891c: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x12891cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x128920: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x128924: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x128924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x128928: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x128928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12892c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12892cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x128930: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x128930u;
    SET_GPR_U32(ctx, 31, 0x128938u);
    ctx->pc = 0x128934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128930u;
    // 0x128934: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x128930u, 0x128938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128938u;
label_128938:
    // 0x128938: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x128938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12893c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12893cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_128940:
    // 0x128940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128944: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x128944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x128948: 0x0  nop
    ctx->pc = 0x128948u;
    // NOP
    // 0x12894c: 0x0  nop
    ctx->pc = 0x12894cu;
    // NOP
    // 0x128950: 0x0  nop
    ctx->pc = 0x128950u;
    // NOP
    // 0x128954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128954u;
    {
        const bool branch_taken_0x128954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128954) {
            ctx->pc = 0x128940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128940;
        }
    }
    ctx->pc = 0x12895Cu;
    // 0x12895c: 0x0  nop
    ctx->pc = 0x12895cu;
    // NOP
label_128960:
    // 0x128960: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x128960u;
    SET_GPR_U32(ctx, 31, 0x128968u);
    ctx->pc = 0x128964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128960u;
    // 0x128964: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x128960u, 0x128968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128968u;
label_128968:
    // 0x128968: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12896c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12896c) {
            ctx->pc = 0x128960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128960;
        }
    }
    ctx->pc = 0x128974u;
    // 0x128974: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x128978: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12897c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12897Cu;
    {
        const bool branch_taken_0x12897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12897Cu;
        // 0x128980: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12897c) {
            ctx->pc = 0x128990u;
            goto label_128990;
        }
    }
    ctx->pc = 0x128984u;
    // 0x128984: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x128984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x128988: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x128988u;
    SET_GPR_U32(ctx, 31, 0x128990u);
    ctx->pc = 0x12898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128988u;
    // 0x12898c: 0xae510090  sw          $s1, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x128988u, 0x128990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128990u;
label_128990:
    // 0x128990: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x128994: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x128994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x128998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12899c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x12899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1289a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1289a4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1289a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1289a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1289ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1289acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1289b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1289b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1289b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1289b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1289b8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1289b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1289bc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1289bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1289c0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1289c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x1289c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1289c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1289c8:
    // 0x1289c8: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1289c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1289cc:
    // 0x1289cc: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1289ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1289d0: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1289d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1289d4: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1289d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1289d8: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1289d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1289dc: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1289e0: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1289e4: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x1289e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1289e8: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x1289e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1289ec: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x1289ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1289f0: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x1289f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1289f4: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1289f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1289f8: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1289f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1289fc: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1289fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x128a00: 0x3e00008  jr          $ra
    ctx->pc = 0x128A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A00u;
        // 0x128a04: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128A08u;
}
