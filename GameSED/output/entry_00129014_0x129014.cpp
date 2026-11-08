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

// Function: entry_00129014
// Address: 0x129014 - 0x1290b8
void entry_00129014_0x129014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129014_0x129014");
#endif

    ctx->pc = 0x129014u;

    // 0x129014: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129018: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129018u;
        // 0x12901c: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129018) {
            ctx->pc = 0x128FB8u;
            return;
        }
    }
    ctx->pc = 0x129020u;
    // 0x129020: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x129020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x129024: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x129024u;
    {
        const bool branch_taken_0x129024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129024) {
            ctx->pc = 0x129028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129024u;
            // 0x129028: 0x8ea20024  lw          $v0, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1290DCu;
            return;
        }
    }
    ctx->pc = 0x12902Cu;
    // 0x12902c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x129030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129034: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x129034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x129038: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x129038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12903c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12903cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x129040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x129044: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x129044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x129048: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x129048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x12904c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12904cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x129050: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x129050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x129054: 0x704910c8  pmaxw       $v0, $v0, $t1
    ctx->pc = 0x129054u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x129058: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x129058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12905c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x12905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x129060: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x129060u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129064: 0x22000  sll         $a0, $v0, 0
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129068: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x129068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x12906c: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x12906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x129070: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x129070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x129074: 0x125182a  slt         $v1, $t1, $a1
    ctx->pc = 0x129074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x129078: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x129078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12907c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129080: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x129080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x129084: 0xa3880a  movz        $s1, $a1, $v1
    ctx->pc = 0x129084u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x129088: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x129088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x12908c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12908cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129094: 0x704418e8  pminw       $v1, $v0, $a0
    ctx->pc = 0x129094u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x129098: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x129098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x12909c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12909Cu;
    {
        const bool branch_taken_0x12909c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1290A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12909Cu;
        // 0x1290a0: 0x93a50083  lbu         $a1, 0x83($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12909c) {
            ctx->pc = 0x1290B8u;
            return;
        }
    }
    ctx->pc = 0x1290A4u;
    // 0x1290a4: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x1290a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x1290a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1290a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1290ac: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x1290b0: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x1290b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x1290b4: 0x93a50083  lbu         $a1, 0x83($sp)
    ctx->pc = 0x1290b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    ctx->pc = 0x1290b8u;
}
