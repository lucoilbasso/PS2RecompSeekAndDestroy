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

// Function: CalcRgba__17ST_EffectParticleP7Color32
// Address: 0x11e868 - 0x11e9a8
void CalcRgba__17ST_EffectParticleP7Color32_0x11e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcRgba__17ST_EffectParticleP7Color32_0x11e868");
#endif

    ctx->pc = 0x11e868u;

    // 0x11e868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e86c: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x11e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11e870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e874: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
    ctx->pc = 0x11E874u;
    {
        const bool branch_taken_0x11e874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e874) {
            ctx->pc = 0x11E878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E874u;
            // 0x11e878: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E978u;
            goto label_11e978;
        }
    }
    ctx->pc = 0x11E87Cu;
    // 0x11e87c: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x11e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e880: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e884: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x11e884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e888: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x11e888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11e88c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E88Cu;
    {
        const bool branch_taken_0x11e88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e88c) {
            ctx->pc = 0x11E890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E88Cu;
            // 0x11e890: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8B8u;
            goto label_11e8b8;
        }
    }
    ctx->pc = 0x11E894u;
    // 0x11e894: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x11e894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e898: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e8a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e8a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e8a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11e8ac: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11e8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e8b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e8b4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11e8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11e8b8:
    // 0x11e8b8: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x11e8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e8bc: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x11e8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e8c0: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x11e8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x11e8c4: 0x90e20005  lbu         $v0, 0x5($a3)
    ctx->pc = 0x11e8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x11e8c8: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E8C8u;
    {
        const bool branch_taken_0x11e8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e8c8) {
            ctx->pc = 0x11E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E8C8u;
            // 0x11e8cc: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8F4u;
            goto label_11e8f4;
        }
    }
    ctx->pc = 0x11E8D0u;
    // 0x11e8d0: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x11e8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x11e8d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e8dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e8e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e8e4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e8e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11e8e8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11e8e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e8ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e8f0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x11e8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_11e8f4:
    // 0x11e8f4: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x11e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e8f8: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x11e8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e8fc: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x11e8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x11e900: 0x90e20006  lbu         $v0, 0x6($a3)
    ctx->pc = 0x11e900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x11e904: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E904u;
    {
        const bool branch_taken_0x11e904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e904) {
            ctx->pc = 0x11E908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E904u;
            // 0x11e908: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E930u;
            goto label_11e930;
        }
    }
    ctx->pc = 0x11E90Cu;
    // 0x11e90c: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x11e90cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x11e910: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e91c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e920: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x11e924: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11e924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e928: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11e928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e92c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x11e92cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_11e930:
    // 0x11e930: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x11e930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e934: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x11e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11e938: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x11e938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x11e93c: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x11e93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x11e940: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E940u;
    {
        const bool branch_taken_0x11e940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e940) {
            ctx->pc = 0x11E944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E940u;
            // 0x11e944: 0x90830007  lbu         $v1, 0x7($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E950u;
            goto label_11e950;
        }
    }
    ctx->pc = 0x11E948u;
    // 0x11e948: 0x3e00008  jr          $ra
    ctx->pc = 0x11E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E948u;
        // 0x11e94c: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E950u;
label_11e950:
    // 0x11e950: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e95c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11e95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e960: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11e960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11e964: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x11e964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e968: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11e968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e96c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E96Cu;
        // 0x11e970: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E974u;
    // 0x11e974: 0x0  nop
    ctx->pc = 0x11e974u;
    // NOP
label_11e978:
    // 0x11e978: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x11e978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11e97c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e980: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x11e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e984: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x11e984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x11e988: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x11e988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e98c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x11e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e990: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x11e990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x11e994: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x11e994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e998: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e99c: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x11e99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x11e9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A0u;
        // 0x11e9a4: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E9A8u;
}
