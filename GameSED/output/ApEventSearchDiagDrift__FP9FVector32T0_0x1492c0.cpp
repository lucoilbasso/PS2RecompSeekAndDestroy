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

// Function: ApEventSearchDiagDrift__FP9FVector32T0
// Address: 0x1492c0 - 0x149424
void ApEventSearchDiagDrift__FP9FVector32T0_0x1492c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventSearchDiagDrift__FP9FVector32T0_0x1492c0");
#endif

    switch (ctx->pc) {
        case 0x149418u: goto label_149418;
        default: break;
    }

    ctx->pc = 0x1492c0u;

    // 0x1492c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1492c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1492c4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1492c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1492c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1492c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1492cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1492ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1492d0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1492d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1492d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1492d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1492d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1492dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1492dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1492e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1492e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1492e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1492e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1492e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1492e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1492ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1492ECu;
    {
        const bool branch_taken_0x1492ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1492F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492ECu;
        // 0x1492f0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492ec) {
            ctx->pc = 0x149308u;
            goto label_149308;
        }
    }
    ctx->pc = 0x1492F4u;
    // 0x1492f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1492f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1492f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1492fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1492fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149300: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149308:
    // 0x149308: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x149308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14930c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x14930cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149310: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149318: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14931c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14931cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149320: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149324: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149328: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x14932c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14932cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149330: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149334: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149338: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14933c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x14933Cu;
    {
        const bool branch_taken_0x14933c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14933c) {
            ctx->pc = 0x149340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14933Cu;
            // 0x149340: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14935Cu;
            goto label_14935c;
        }
    }
    ctx->pc = 0x149344u;
    // 0x149344: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149348: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14934c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14934cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149350: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149354: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149358: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x149358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14935c:
    // 0x14935c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149360: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149368: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14936c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14936cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149374: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149378: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x149378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x14937c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14937cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149380: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149384: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x149384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x149388: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x149388u;
    {
        const bool branch_taken_0x149388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149388u;
        // 0x14938c: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149388) {
            ctx->pc = 0x1493A8u;
            goto label_1493a8;
        }
    }
    ctx->pc = 0x149390u;
    // 0x149390: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149394: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x149398: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14939c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14939cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1493a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1493a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1493a4: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1493a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_1493a8:
    // 0x1493a8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1493ac: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1493acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1493b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1493b4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1493b8: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x1493b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1493bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1493BCu;
    {
        const bool branch_taken_0x1493bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1493C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493BCu;
        // 0x1493c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493bc) {
            ctx->pc = 0x1493F8u;
            goto label_1493f8;
        }
    }
    ctx->pc = 0x1493C4u;
    // 0x1493c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1493c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1493c8: 0x2862ffc0  slti        $v0, $v1, -0x40
    ctx->pc = 0x1493c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x1493cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1493CCu;
    {
        const bool branch_taken_0x1493cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1493cc) {
            ctx->pc = 0x1493D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1493CCu;
            // 0x1493d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1493F8u;
            goto label_1493f8;
        }
    }
    ctx->pc = 0x1493D4u;
    // 0x1493d4: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1493d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1493d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1493D8u;
    {
        const bool branch_taken_0x1493d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493d8) {
            ctx->pc = 0x1493DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1493D8u;
            // 0x1493dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1493F8u;
            goto label_1493f8;
        }
    }
    ctx->pc = 0x1493E0u;
    // 0x1493e0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1493e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1493e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1493ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1493ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1493f0: 0x90637820  lbu         $v1, 0x7820($v1)
    ctx->pc = 0x1493f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30752)));
    // 0x1493f4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1493f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1493f8:
    // 0x1493f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1493fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1493fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x149400: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149400u;
    {
        const bool branch_taken_0x149400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x149404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149400u;
        // 0x149404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149400) {
            ctx->pc = 0x149418u;
            goto label_149418;
        }
    }
    ctx->pc = 0x149408u;
    // 0x149408: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x149408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14940c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149410: 0xc05245c  jal         func_149170
    ctx->pc = 0x149410u;
    SET_GPR_U32(ctx, 31, 0x149418u);
    ctx->pc = 0x149414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149410u;
    // 0x149414: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149170u, 0x149410u, 0x149418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149418u;
label_149418:
    // 0x149418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14941c: 0x3e00008  jr          $ra
    ctx->pc = 0x14941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14941Cu;
        // 0x149420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14941Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149424u;
}
