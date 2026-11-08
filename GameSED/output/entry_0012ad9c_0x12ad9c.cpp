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

// Function: entry_0012ad9c
// Address: 0x12ad9c - 0x12ae48
void entry_0012ad9c_0x12ad9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ad9c_0x12ad9c");
#endif

    ctx->pc = 0x12ad9cu;

    // 0x12ad9c: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x12ad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x12ada0: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x12ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x12ada4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x12ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x12ada8: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x12ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x12adac: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x12adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x12adb0: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x12adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x12adb4: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x12adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x12adb8: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x12adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x12adbc: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x12adbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x12adc0: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x12adc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x12adc4: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x12adc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x12adc8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x12adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x12adcc: 0x10400196  beqz        $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x12ADCCu;
    {
        const bool branch_taken_0x12adcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADCCu;
        // 0x12add0: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adcc) {
            ctx->pc = 0x12B428u;
            return;
        }
    }
    ctx->pc = 0x12ADD4u;
    // 0x12add4: 0x12400194  beqz        $s2, . + 4 + (0x194 << 2)
    ctx->pc = 0x12ADD4u;
    {
        const bool branch_taken_0x12add4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD4u;
        // 0x12add8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add4) {
            ctx->pc = 0x12B428u;
            return;
        }
    }
    ctx->pc = 0x12ADDCu;
    // 0x12addc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x12addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12ade0: 0x54620192  bnel        $v1, $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x12ADE0u;
    {
        const bool branch_taken_0x12ade0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12ade0) {
            ctx->pc = 0x12ADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ADE0u;
            // 0x12ade4: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B42Cu;
            return;
        }
    }
    ctx->pc = 0x12ADE8u;
    // 0x12ade8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x12ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x12adec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12adf0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x12adf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12adf4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x12adf8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x12adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12adfc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x12ae00: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12ae04: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12ae04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae08: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12ae0c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae10: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x12ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12ae14: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae18: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12ae1c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ae20: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x12ae24: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x12ae24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12ae28: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12AE28u;
    {
        const bool branch_taken_0x12ae28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE28u;
        // 0x12ae2c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae28) {
            ctx->pc = 0x12AE58u;
            return;
        }
    }
    ctx->pc = 0x12AE30u;
    // 0x12ae30: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x12ae30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x12ae34: 0x5860000a  blezl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x12AE34u;
    {
        const bool branch_taken_0x12ae34 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12ae34) {
            ctx->pc = 0x12AE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AE34u;
            // 0x12ae38: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE60u;
            return;
        }
    }
    ctx->pc = 0x12AE3Cu;
    // 0x12ae3c: 0x93a200b3  lbu         $v0, 0xB3($sp)
    ctx->pc = 0x12ae3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    // 0x12ae40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12AE40u;
    {
        const bool branch_taken_0x12ae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae40) {
            ctx->pc = 0x12AE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AE40u;
            // 0x12ae44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE48u;
            return;
        }
    }
    ctx->pc = 0x12AE48u;
}
