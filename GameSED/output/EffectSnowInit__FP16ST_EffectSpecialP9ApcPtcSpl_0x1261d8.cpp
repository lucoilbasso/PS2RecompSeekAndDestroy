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

// Function: EffectSnowInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x1261d8 - 0x126588
void EffectSnowInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1261d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSnowInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1261d8");
#endif

    switch (ctx->pc) {
        case 0x126230u: goto label_126230;
        case 0x12624cu: goto label_12624c;
        case 0x126270u: goto label_126270;
        case 0x12627cu: goto label_12627c;
        case 0x1262c4u: goto label_1262c4;
        case 0x126330u: goto label_126330;
        case 0x1263b8u: goto label_1263b8;
        case 0x1263f8u: goto label_1263f8;
        case 0x126478u: goto label_126478;
        case 0x1264e4u: goto label_1264e4;
        case 0x12652cu: goto label_12652c;
        case 0x126540u: goto label_126540;
        case 0x126548u: goto label_126548;
        default: break;
    }

    ctx->pc = 0x1261d8u;

    // 0x1261d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1261d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1261dc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1261dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1261e0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1261e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1261e4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1261e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1261e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1261ec: 0x26f601b0  addiu       $s6, $s7, 0x1B0
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 432));
    // 0x1261f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1261f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1261f4: 0x3442c900  ori         $v0, $v0, 0xC900
    ctx->pc = 0x1261f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51456);
    // 0x1261f8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1261f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1261fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1261fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126200: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x126200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x126204: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x126204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x126208: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x126208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x12620c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x12620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x126210: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x126210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x126214: 0xe7b60098  swc1        $f22, 0x98($sp)
    ctx->pc = 0x126214u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x126218: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x126218u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x12621c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12621Cu;
    {
        const bool branch_taken_0x12621c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12621Cu;
        // 0x126220: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12621c) {
            ctx->pc = 0x126228u;
            goto label_126228;
        }
    }
    ctx->pc = 0x126224u;
    // 0x126224: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_126228:
    // 0x126228: 0xc068086  jal         func_1A0218
    ctx->pc = 0x126228u;
    SET_GPR_U32(ctx, 31, 0x126230u);
    ctx->pc = 0x12622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126228u;
    // 0x12622c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x126228u, 0x126230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126230u;
label_126230:
    // 0x126230: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126230u;
    {
        const bool branch_taken_0x126230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126230u;
        // 0x126234: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126230) {
            ctx->pc = 0x12624Cu;
            goto label_12624c;
        }
    }
    ctx->pc = 0x126238u;
    // 0x126238: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x126238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12623c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126240: 0x24a55d40  addiu       $a1, $a1, 0x5D40
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
    // 0x126244: 0xc068186  jal         func_1A0618
    ctx->pc = 0x126244u;
    SET_GPR_U32(ctx, 31, 0x12624Cu);
    ctx->pc = 0x126248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126244u;
    // 0x126248: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x126244u, 0x12624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12624Cu;
label_12624c:
    // 0x12624c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x126250: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x126250u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x126254: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x126254u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x126258: 0x24530b70  addiu       $s3, $v0, 0xB70
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
    // 0x12625c: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x12625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x126260: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x126260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x126264: 0x2412001d  addiu       $s2, $zero, 0x1D
    ctx->pc = 0x126264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x126268: 0xc79480ec  lwc1        $f20, -0x7F14($gp)
    ctx->pc = 0x126268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12626c: 0xc79680f0  lwc1        $f22, -0x7F10($gp)
    ctx->pc = 0x12626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_126270:
    // 0x126270: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x126270u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x126274: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x126274u;
    SET_GPR_U32(ctx, 31, 0x12627Cu);
    ctx->pc = 0x126278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126274u;
    // 0x126278: 0x24041770  addiu       $a0, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x126274u, 0x12627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12627Cu;
label_12627c:
    // 0x12627c: 0x24041770  addiu       $a0, $zero, 0x1770
    ctx->pc = 0x12627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x126280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126284: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x126284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x126288: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x126288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x12628c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x12628cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x126290: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126290u;
    {
        const bool branch_taken_0x126290 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x126294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126290u;
        // 0x126294: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126290) {
            ctx->pc = 0x1262A8u;
            goto label_1262a8;
        }
    }
    ctx->pc = 0x126298u;
    // 0x126298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12629c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12629cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1262A0u;
    {
        const bool branch_taken_0x1262a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262A0u;
        // 0x1262a4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262a0) {
            ctx->pc = 0x1262B8u;
            goto label_1262b8;
        }
    }
    ctx->pc = 0x1262A8u;
label_1262a8:
    // 0x1262a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1262a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1262ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1262acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1262b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1262b4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1262b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1262b8:
    // 0x1262b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1262b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1262bc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1262BCu;
    SET_GPR_U32(ctx, 31, 0x1262C4u);
    ctx->pc = 0x1262C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1262BCu;
    // 0x1262c0: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1262BCu, 0x1262C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262C4u;
label_1262c4:
    // 0x1262c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1262c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262c8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1262c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1262cc: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1262ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1262d0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1262D0u;
    {
        const bool branch_taken_0x1262d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1262D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262D0u;
        // 0x1262d4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262d0) {
            ctx->pc = 0x1262E8u;
            goto label_1262e8;
        }
    }
    ctx->pc = 0x1262D8u;
    // 0x1262d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1262d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1262dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1262dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1262E0u;
    {
        const bool branch_taken_0x1262e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262E0u;
        // 0x1262e4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262e0) {
            ctx->pc = 0x1262F8u;
            goto label_1262f8;
        }
    }
    ctx->pc = 0x1262E8u;
label_1262e8:
    // 0x1262e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1262e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1262ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1262ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1262f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1262f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1262f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1262f8:
    // 0x1262f8: 0xe6760004  swc1        $f22, 0x4($s3)
    ctx->pc = 0x1262f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1262fc: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1262fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x126300: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x126300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x126304: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x126304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x126308: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x126308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x12630c: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x12630cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x126310: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x126310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x126314: 0x641ffd6  bgez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x126314u;
    {
        const bool branch_taken_0x126314 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x126318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126314u;
        // 0x126318: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126314) {
            ctx->pc = 0x126270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126270;
        }
    }
    ctx->pc = 0x12631Cu;
    // 0x12631c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x126320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x126320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126324: 0x24530b70  addiu       $s3, $v0, 0xB70
    ctx->pc = 0x126324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
    // 0x126328: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x126328u;
    SET_GPR_U32(ctx, 31, 0x126330u);
    ctx->pc = 0x12632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126328u;
    // 0x12632c: 0x8ed10000  lw          $s1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x126328u, 0x126330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126330u;
label_126330:
    // 0x126330: 0x8ee20048  lw          $v0, 0x48($s7)
    ctx->pc = 0x126330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x126334: 0xc79580f4  lwc1        $f21, -0x7F0C($gp)
    ctx->pc = 0x126334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126338: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x126338u;
    {
        const bool branch_taken_0x126338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126338) {
            ctx->pc = 0x126390u;
            goto label_126390;
        }
    }
    ctx->pc = 0x126340u;
    // 0x126340: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x126340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126344: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x126344u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x126348: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x126348u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12634c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12634cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x126350: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126354: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126358: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12635c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126368: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12636c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126370: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x126370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x126374: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x126374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x126378: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x126378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12637c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12637cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x126380: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x126380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x126384: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x126384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x126388: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x126388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12638c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12638cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_126390:
    // 0x126390: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x126390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x126394: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126398: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x126398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12639c: 0xc79680f8  lwc1        $f22, -0x7F08($gp)
    ctx->pc = 0x12639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1263a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1263a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263a4: 0x24140046  addiu       $s4, $zero, 0x46
    ctx->pc = 0x1263a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1263a8: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x1263a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1263ac: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1263acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1263b0: 0x254001a  div         $zero, $s2, $s4
    ctx->pc = 0x1263b0u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1263b4: 0x0  nop
    ctx->pc = 0x1263b4u;
    // NOP
label_1263b8:
    // 0x1263b8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1263B8u;
    {
        const bool branch_taken_0x1263b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263b8) {
            ctx->pc = 0x1263BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1263B8u;
            // 0x1263bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1263C0u;
            goto label_1263c0;
        }
    }
    ctx->pc = 0x1263C0u;
label_1263c0:
    // 0x1263c0: 0x24041b58  addiu       $a0, $zero, 0x1B58
    ctx->pc = 0x1263c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    // 0x1263c4: 0x1812  mflo        $v1
    ctx->pc = 0x1263c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1263c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1263c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1263cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1263ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1263d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1263d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1263d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1263d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1263d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1263d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1263dc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1263dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1263e0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1263e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1263e4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1263e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1263e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1263e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1263ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1263ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1263f0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1263F0u;
    SET_GPR_U32(ctx, 31, 0x1263F8u);
    ctx->pc = 0x1263F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1263F0u;
    // 0x1263f4: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1263F0u, 0x1263F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263F8u;
label_1263f8:
    // 0x1263f8: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x1263f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x1263fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1263fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x126400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x126408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12640c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x12640cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x126410: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126410u;
    {
        const bool branch_taken_0x126410 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x126414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126410u;
        // 0x126414: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126410) {
            ctx->pc = 0x126428u;
            goto label_126428;
        }
    }
    ctx->pc = 0x126418u;
    // 0x126418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12641c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12641cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126420: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126420u;
    {
        const bool branch_taken_0x126420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126420u;
        // 0x126424: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126420) {
            ctx->pc = 0x12643Cu;
            goto label_12643c;
        }
    }
    ctx->pc = 0x126428u;
label_126428:
    // 0x126428: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12642c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12642cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126434: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x126438: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x126438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_12643c:
    // 0x12643c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x12643cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x126440: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x126440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x126444: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x126444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x126448: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x126448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12644c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x12644cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x126450: 0x255001a  div         $zero, $s2, $s5
    ctx->pc = 0x126450u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x126454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x126458: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126458u;
    {
        const bool branch_taken_0x126458 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x126458) {
            ctx->pc = 0x12645Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126458u;
            // 0x12645c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x126460u;
            goto label_126460;
        }
    }
    ctx->pc = 0x126460u;
label_126460:
    // 0x126460: 0x24043e80  addiu       $a0, $zero, 0x3E80
    ctx->pc = 0x126460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x126464: 0x1810  mfhi        $v1
    ctx->pc = 0x126464u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x126468: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x126468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12646c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x126470: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x126470u;
    SET_GPR_U32(ctx, 31, 0x126478u);
    ctx->pc = 0x126474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126470u;
    // 0x126474: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x126470u, 0x126478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126478u;
label_126478:
    // 0x126478: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12647c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12647cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126480: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x126480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126488: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x12648c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x126490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x126498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12649c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1264a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1264a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1264a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1264a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1264a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264ac: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1264ACu;
    {
        const bool branch_taken_0x1264ac = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1264B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264ACu;
        // 0x1264b0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264ac) {
            ctx->pc = 0x1264C8u;
            goto label_1264c8;
        }
    }
    ctx->pc = 0x1264B4u;
    // 0x1264b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1264b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1264b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1264b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1264bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1264BCu;
    {
        const bool branch_taken_0x1264bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264BCu;
        // 0x1264c0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264bc) {
            ctx->pc = 0x1264D8u;
            goto label_1264d8;
        }
    }
    ctx->pc = 0x1264C4u;
    // 0x1264c4: 0x0  nop
    ctx->pc = 0x1264c4u;
    // NOP
label_1264c8:
    // 0x1264c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1264c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1264cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1264ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1264d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1264d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1264d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1264d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1264d8:
    // 0x1264d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1264d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1264dc: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x1264DCu;
    SET_GPR_U32(ctx, 31, 0x1264E4u);
    ctx->pc = 0x1264E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264DCu;
    // 0x1264e0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x1264DCu, 0x1264E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264E4u;
label_1264e4:
    // 0x1264e4: 0x2a421324  slti        $v0, $s2, 0x1324
    ctx->pc = 0x1264e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4900) ? 1 : 0);
    // 0x1264e8: 0x5440ffb3  bnel        $v0, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1264E8u;
    {
        const bool branch_taken_0x1264e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1264e8) {
            ctx->pc = 0x1264ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1264E8u;
            // 0x1264ec: 0x254001a  div         $zero, $s2, $s4 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1263B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1263b8;
        }
    }
    ctx->pc = 0x1264F0u;
    // 0x1264f0: 0x26d00010  addiu       $s0, $s6, 0x10
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1264f4: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1264f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1264f8: 0x8ee20048  lw          $v0, 0x48($s7)
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x1264fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1264fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126500: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x126500u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x126504: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x126504u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x126508: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x126508u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12650c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126510: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126514: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x126518: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x126518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12651c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126520: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126524: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x126524u;
    SET_GPR_U32(ctx, 31, 0x12652Cu);
    ctx->pc = 0x126528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126524u;
    // 0x126528: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x126524u, 0x12652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12652Cu;
label_12652c:
    // 0x12652c: 0x26c30020  addiu       $v1, $s6, 0x20
    ctx->pc = 0x12652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x126530: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x126530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126534: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x126534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x126538: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x126538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12653c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12653cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_126540:
    // 0x126540: 0xc049962  jal         func_126588
    ctx->pc = 0x126540u;
    SET_GPR_U32(ctx, 31, 0x126548u);
    ctx->pc = 0x126544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126540u;
    // 0x126544: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126588u, 0x126540u, 0x126548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126548u;
label_126548:
    // 0x126548: 0x641fffd  bgez        $s2, . + 4 + (-0x3 << 2)
    ctx->pc = 0x126548u;
    {
        const bool branch_taken_0x126548 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x12654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126548u;
        // 0x12654c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126548) {
            ctx->pc = 0x126540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126540;
        }
    }
    ctx->pc = 0x126550u;
    // 0x126550: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x126550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126554: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x126554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126558: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x126558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12655c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x12655cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126560: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x126560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126564: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x126564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x126568: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x126568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12656c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x12656cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x126570: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x126570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126574: 0xc7b60098  lwc1        $f22, 0x98($sp)
    ctx->pc = 0x126574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x126578: 0xc7b50090  lwc1        $f21, 0x90($sp)
    ctx->pc = 0x126578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12657c: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x12657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126580: 0x3e00008  jr          $ra
    ctx->pc = 0x126580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126580u;
        // 0x126584: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126588u;
}
