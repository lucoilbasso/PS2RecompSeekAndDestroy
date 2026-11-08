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

// Function: WHitpolySearchPWDThrough__FP15WHitpolyPackageP16_WallHitScanWork
// Address: 0x181ba0 - 0x182134
void WHitpolySearchPWDThrough__FP15WHitpolyPackageP16_WallHitScanWork_0x181ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPWDThrough__FP15WHitpolyPackageP16_WallHitScanWork_0x181ba0");
#endif

    switch (ctx->pc) {
        case 0x181c60u: goto label_181c60;
        default: break;
    }

    ctx->pc = 0x181ba0u;

    // 0x181ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x181ba4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x181ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x181ba8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x181ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x181bac: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x181bacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bb0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x181bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x181bb4: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x181bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bb8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x181bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x181bbc: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x181bbcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bc0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x181bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x181bc4: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x181bc8: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x181bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x181bcc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x181bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x181bd0: 0xc5850020  lwc1        $f5, 0x20($t4)
    ctx->pc = 0x181bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x181bd4: 0x25900010  addiu       $s0, $t4, 0x10
    ctx->pc = 0x181bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x181bd8: 0x8d8f0024  lw          $t7, 0x24($t4)
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x181bdc: 0x258d0030  addiu       $t5, $t4, 0x30
    ctx->pc = 0x181bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x181be0: 0x8dc90010  lw          $t1, 0x10($t6)
    ctx->pc = 0x181be0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x181be4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181be8: 0x8dcb0014  lw          $t3, 0x14($t6)
    ctx->pc = 0x181be8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x181bec: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x181becu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x181bf0: 0x8dd3001c  lw          $s3, 0x1C($t6)
    ctx->pc = 0x181bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x181bf4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x181bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0);
    // 0x181bf8: 0x11c00148  beqz        $t6, . + 4 + (0x148 << 2)
    ctx->pc = 0x181BF8u;
    {
        const bool branch_taken_0x181bf8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF8u;
        // 0x181bfc: 0xa0640020  sb          $a0, 0x20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bf8) {
            ctx->pc = 0x18211Cu;
            goto label_18211c;
        }
    }
    ctx->pc = 0x181C00u;
    // 0x181c00: 0x8d820028  lw          $v0, 0x28($t4)
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x181c04: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x181C04u;
    {
        const bool branch_taken_0x181c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181c04) {
            ctx->pc = 0x181C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C04u;
            // 0x181c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C30u;
            goto label_181c30;
        }
    }
    ctx->pc = 0x181C0Cu;
    // 0x181c0c: 0x8d820060  lw          $v0, 0x60($t4)
    ctx->pc = 0x181c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 96)));
    // 0x181c10: 0xad800028  sw          $zero, 0x28($t4)
    ctx->pc = 0x181c10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 0));
    // 0x181c14: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x181c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181c18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x181c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x181c1c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x181c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x181c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181c24: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x181c24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181c28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x181c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181c2c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x181c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_181c30:
    // 0x181c30: 0x95c20002  lhu         $v0, 0x2($t6)
    ctx->pc = 0x181c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x181c34: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x181c34u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c38: 0x302102a  slt         $v0, $t8, $v0
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x181c3c: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x181C3Cu;
    {
        const bool branch_taken_0x181c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C3Cu;
        // 0x181c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c3c) {
            ctx->pc = 0x18211Cu;
            goto label_18211c;
        }
    }
    ctx->pc = 0x181C44u;
    // 0x181c44: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x181c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x181c48: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x181c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x181c4c: 0xc7888578  lwc1        $f8, -0x7A88($gp)
    ctx->pc = 0x181c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x181c50: 0x2459dbc0  addiu       $t9, $v0, -0x2440
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x181c54: 0x3c01bb80  lui         $at, 0xBB80
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48000 << 16));
    // 0x181c58: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x181c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x181c5c: 0xc786857c  lwc1        $f6, -0x7A84($gp)
    ctx->pc = 0x181c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_181c60:
    // 0x181c60: 0x9122000c  lbu         $v0, 0xC($t1)
    ctx->pc = 0x181c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x181c64: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x181c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x181c68: 0x544000f1  bnel        $v0, $zero, . + 4 + (0xF1 << 2)
    ctx->pc = 0x181C68u;
    {
        const bool branch_taken_0x181c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181c68) {
            ctx->pc = 0x181C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C68u;
            // 0x181c6c: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            goto label_182030;
        }
    }
    ctx->pc = 0x181C70u;
    // 0x181c70: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x181c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c74: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x181c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181c78: 0x46050101  sub.s       $f4, $f0, $f5
    ctx->pc = 0x181c78u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x181c7c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x181c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181c80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x181C80u;
    {
        const bool branch_taken_0x181c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C80u;
        // 0x181c84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c80) {
            ctx->pc = 0x181C8Cu;
            goto label_181c8c;
        }
    }
    ctx->pc = 0x181C88u;
    // 0x181c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181c8c:
    // 0x181c8c: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x181c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c90: 0x460500c0  add.s       $f3, $f0, $f5
    ctx->pc = 0x181c90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x181c94: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x181c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181c98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181C98u;
    {
        const bool branch_taken_0x181c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181c98) {
            ctx->pc = 0x181C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C98u;
            // 0x181c9c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CA0u;
            goto label_181ca0;
        }
    }
    ctx->pc = 0x181CA0u;
label_181ca0:
    // 0x181ca0: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x181ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ca4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x181ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181ca8: 0x46050081  sub.s       $f2, $f0, $f5
    ctx->pc = 0x181ca8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x181cac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CB0u;
    {
        const bool branch_taken_0x181cb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181cb0) {
            ctx->pc = 0x181CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CB0u;
            // 0x181cb4: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CB8u;
            goto label_181cb8;
        }
    }
    ctx->pc = 0x181CB8u;
label_181cb8:
    // 0x181cb8: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x181cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181cbc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x181cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x181cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x181cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CC4u;
    {
        const bool branch_taken_0x181cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181cc4) {
            ctx->pc = 0x181CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CC4u;
            // 0x181cc8: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CCCu;
            goto label_181ccc;
        }
    }
    ctx->pc = 0x181CCCu;
label_181ccc:
    // 0x181ccc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x181cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cd4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x181cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x181CD8u;
    {
        const bool branch_taken_0x181cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CD8u;
        // 0x181cdc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cd8) {
            ctx->pc = 0x181CE4u;
            goto label_181ce4;
        }
    }
    ctx->pc = 0x181CE0u;
    // 0x181ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181ce4:
    // 0x181ce4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x181ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181ce8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CE8u;
    {
        const bool branch_taken_0x181ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181ce8) {
            ctx->pc = 0x181CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CE8u;
            // 0x181cec: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CF0u;
            goto label_181cf0;
        }
    }
    ctx->pc = 0x181CF0u;
label_181cf0:
    // 0x181cf0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x181cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181cf4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CF8u;
    {
        const bool branch_taken_0x181cf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181cf8) {
            ctx->pc = 0x181CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CF8u;
            // 0x181cfc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181D00u;
            goto label_181d00;
        }
    }
    ctx->pc = 0x181D00u;
label_181d00:
    // 0x181d00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x181d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181d04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181D04u;
    {
        const bool branch_taken_0x181d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181d04) {
            ctx->pc = 0x181D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D04u;
            // 0x181d08: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181D0Cu;
            goto label_181d0c;
        }
    }
    ctx->pc = 0x181D0Cu;
label_181d0c:
    // 0x181d0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x181D0Cu;
    {
        const bool branch_taken_0x181d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D0Cu;
        // 0x181d10: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d0c) {
            ctx->pc = 0x181D24u;
            goto label_181d24;
        }
    }
    ctx->pc = 0x181D14u;
    // 0x181d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181D14u;
    {
        const bool branch_taken_0x181d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D14u;
        // 0x181d18: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d14) {
            ctx->pc = 0x181D24u;
            goto label_181d24;
        }
    }
    ctx->pc = 0x181D1Cu;
    // 0x181d1c: 0x544000c4  bnel        $v0, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x181D1Cu;
    {
        const bool branch_taken_0x181d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181d1c) {
            ctx->pc = 0x181D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D1Cu;
            // 0x181d20: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            goto label_182030;
        }
    }
    ctx->pc = 0x181D24u;
label_181d24:
    // 0x181d24: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x181d28: 0x95640004  lhu         $a0, 0x4($t3)
    ctx->pc = 0x181d28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x181d2c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x181d2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x181d30: 0xf100b  movn        $v0, $zero, $t7
    ctx->pc = 0x181d30u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x181d34: 0x9563000a  lhu         $v1, 0xA($t3)
    ctx->pc = 0x181d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x181d38: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x181d3c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x181d40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x181d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x181d44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x181d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181d48: 0x2445021  addu        $t2, $s2, $a0
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x181d4c: 0x2454021  addu        $t0, $s2, $a1
    ctx->pc = 0x181d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x181d50: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x181D50u;
    {
        const bool branch_taken_0x181d50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x181D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D50u;
        // 0x181d54: 0x2633021  addu        $a2, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d50) {
            ctx->pc = 0x181D80u;
            goto label_181d80;
        }
    }
    ctx->pc = 0x181D58u;
    // 0x181d58: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x181d58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181d5c: 0xd9a50000  lqc2        $vf5, 0x0($t5)
    ctx->pc = 0x181d5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x181d60: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x181d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d64: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x181d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d68: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x181d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181d6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181d74: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x181d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181d78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181D78u;
    {
        const bool branch_taken_0x181d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d78) {
            ctx->pc = 0x181DA4u;
            goto label_181da4;
        }
    }
    ctx->pc = 0x181D80u;
label_181d80:
    // 0x181d80: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x181d80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181d84: 0xd9a50000  lqc2        $vf5, 0x0($t5)
    ctx->pc = 0x181d84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x181d88: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x181d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d8c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x181d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d90: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x181d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181d94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181d94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181d98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x181d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181d9c: 0xc5800040  lwc1        $f0, 0x40($t4)
    ctx->pc = 0x181d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_181da4:
    // 0x181da4: 0x450300a2  bc1tl       . + 4 + (0xA2 << 2)
    ctx->pc = 0x181DA4u;
    {
        const bool branch_taken_0x181da4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181da4) {
            ctx->pc = 0x181DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181DA4u;
            // 0x181da8: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            goto label_182030;
        }
    }
    ctx->pc = 0x181DACu;
    // 0x181dac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x181dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181db0: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x181db0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x181db4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x181db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181db8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x181db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181dbc: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x181dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181dc0: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x181dc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x181dc4: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x181dc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181dc8: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x181dc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181dcc: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x181dccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181dd0: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x181dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181dd4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181dd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181ddc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x181ddcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x181de0: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x181de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181de4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x181DE4u;
    {
        const bool branch_taken_0x181de4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE4u;
        // 0x181de8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181de4) {
            ctx->pc = 0x181E20u;
            goto label_181e20;
        }
    }
    ctx->pc = 0x181DECu;
    // 0x181dec: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x181decu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181df0: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x181df0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181df4: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x181df4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181df8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181df8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181dfc: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x181dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181e00: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x181e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181e04: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x181e04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x181e08: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x181e08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181e0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x181e0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181e10: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x181e10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181e14: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x181e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181e18: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181e18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x181e1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181e20:
    // 0x181e20: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x181E20u;
    {
        const bool branch_taken_0x181e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E20u;
        // 0x181e24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e20) {
            ctx->pc = 0x181E58u;
            goto label_181e58;
        }
    }
    ctx->pc = 0x181E28u;
    // 0x181e28: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x181e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e2c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x181e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e30: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x181E30u;
    {
        const bool branch_taken_0x181e30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E30u;
        // 0x181e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e30) {
            ctx->pc = 0x181E58u;
            goto label_181e58;
        }
    }
    ctx->pc = 0x181E38u;
    // 0x181e38: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x181e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e3c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x181E3Cu;
    {
        const bool branch_taken_0x181e3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E3Cu;
        // 0x181e40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e3c) {
            ctx->pc = 0x181E5Cu;
            goto label_181e5c;
        }
    }
    ctx->pc = 0x181E44u;
    // 0x181e44: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x181e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181E4Cu;
    {
        const bool branch_taken_0x181e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E4Cu;
        // 0x181e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e4c) {
            ctx->pc = 0x181E58u;
            goto label_181e58;
        }
    }
    ctx->pc = 0x181E54u;
    // 0x181e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181e58:
    // 0x181e58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181e58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181e5c:
    // 0x181e5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181e60: 0x50620073  beql        $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x181E60u;
    {
        const bool branch_taken_0x181e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181e60) {
            ctx->pc = 0x181E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181E60u;
            // 0x181e64: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            goto label_182030;
        }
    }
    ctx->pc = 0x181E68u;
    // 0x181e68: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x181E68u;
    {
        const bool branch_taken_0x181e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E68u;
        // 0x181e6c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e68) {
            ctx->pc = 0x1820C8u;
            goto label_1820c8;
        }
    }
    ctx->pc = 0x181E70u;
    // 0x181e70: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x181e70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x181e74: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x181e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e78: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x181e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e7c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x181e7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181e80: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x181e80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x181e84: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x181e84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181e88: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x181e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181e8c: 0x4b0321be  vmulaz.x    $ACC, $vf4, $vf3z
    ctx->pc = 0x181e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181e90: 0x4b04194e  vmsubz.x    $vf5, $vf3, $vf4z
    ctx->pc = 0x181e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x181e94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x181e94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x181e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e9c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x181e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x181ea0: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x181ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181ea4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x181EA4u;
    {
        const bool branch_taken_0x181ea4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EA4u;
        // 0x181ea8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ea4) {
            ctx->pc = 0x181EE0u;
            goto label_181ee0;
        }
    }
    ctx->pc = 0x181EACu;
    // 0x181eac: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x181eacu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181eb0: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x181eb0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181eb4: 0x4bc231ec  vsub.xyz    $vf7, $vf6, $vf2
    ctx->pc = 0x181eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x181eb8: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181eb8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181ebc: 0x4b0339be  vmulaz.x    $ACC, $vf7, $vf3z
    ctx->pc = 0x181ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181ec0: 0x4b071a4e  vmsubz.x    $vf9, $vf3, $vf7z
    ctx->pc = 0x181ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x181ec4: 0x4a4439bc  vmulax.z    $ACC, $vf7, $vf4x
    ctx->pc = 0x181ec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x181ec8: 0x4a47228c  vmsubx.z    $vf10, $vf4, $vf7x
    ctx->pc = 0x181ec8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x181ecc: 0x4a0003bf  vwaitq
    ctx->pc = 0x181eccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181ed0: 0x4b004a1c  vmulq.x     $vf8, $vf9, $Q
    ctx->pc = 0x181ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181ed4: 0x4a40521c  vmulq.z     $vf8, $vf10, $Q
    ctx->pc = 0x181ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x181ed8: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x181ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x181edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181ee0:
    // 0x181ee0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x181EE0u;
    {
        const bool branch_taken_0x181ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EE0u;
        // 0x181ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ee0) {
            ctx->pc = 0x181F18u;
            goto label_181f18;
        }
    }
    ctx->pc = 0x181EE8u;
    // 0x181ee8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x181ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181eec: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x181eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181ef0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x181EF0u;
    {
        const bool branch_taken_0x181ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EF0u;
        // 0x181ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ef0) {
            ctx->pc = 0x181F18u;
            goto label_181f18;
        }
    }
    ctx->pc = 0x181EF8u;
    // 0x181ef8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x181ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181efc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x181EFCu;
    {
        const bool branch_taken_0x181efc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EFCu;
        // 0x181f00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181efc) {
            ctx->pc = 0x181F1Cu;
            goto label_181f1c;
        }
    }
    ctx->pc = 0x181F04u;
    // 0x181f04: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x181f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181F0Cu;
    {
        const bool branch_taken_0x181f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F0Cu;
        // 0x181f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f0c) {
            ctx->pc = 0x181F18u;
            goto label_181f18;
        }
    }
    ctx->pc = 0x181F14u;
    // 0x181f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181f18:
    // 0x181f18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181f1c:
    // 0x181f1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x181f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181f20: 0x50640043  beql        $v1, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x181F20u;
    {
        const bool branch_taken_0x181f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x181f20) {
            ctx->pc = 0x181F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F20u;
            // 0x181f24: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            goto label_182030;
        }
    }
    ctx->pc = 0x181F28u;
    // 0x181f28: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181F28u;
    {
        const bool branch_taken_0x181f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F28u;
        // 0x181f2c: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f28) {
            ctx->pc = 0x181F38u;
            goto label_181f38;
        }
    }
    ctx->pc = 0x181F30u;
    // 0x181f30: 0x51e00047  beql        $t7, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x181F30u;
    {
        const bool branch_taken_0x181f30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f30) {
            ctx->pc = 0x181F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F30u;
            // 0x181f34: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182050u;
            goto label_182050;
        }
    }
    ctx->pc = 0x181F38u;
label_181f38:
    // 0x181f38: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x181f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x181f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181f40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x181f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x181f44: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x181f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x181F48u;
    {
        const bool branch_taken_0x181f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F48u;
        // 0x181f4c: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f48) {
            ctx->pc = 0x181F60u;
            goto label_181f60;
        }
    }
    ctx->pc = 0x181F50u;
    // 0x181f50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x181f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f58: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x181F58u;
    {
        const bool branch_taken_0x181f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f58) {
            ctx->pc = 0x181F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F58u;
            // 0x181f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181FE8u;
            goto label_181fe8;
        }
    }
    ctx->pc = 0x181F60u;
label_181f60:
    // 0x181f60: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f64: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x181F64u;
    {
        const bool branch_taken_0x181f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f64) {
            ctx->pc = 0x181F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F64u;
            // 0x181f68: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F80u;
            goto label_181f80;
        }
    }
    ctx->pc = 0x181F6Cu;
    // 0x181f6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x181f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f74: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
    ctx->pc = 0x181F74u;
    {
        const bool branch_taken_0x181f74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f74) {
            ctx->pc = 0x181F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F74u;
            // 0x181f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181FE8u;
            goto label_181fe8;
        }
    }
    ctx->pc = 0x181F7Cu;
    // 0x181f7c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x181f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_181f80:
    // 0x181f80: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x181f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x181f84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x181F88u;
    {
        const bool branch_taken_0x181f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f88) {
            ctx->pc = 0x181FA0u;
            goto label_181fa0;
        }
    }
    ctx->pc = 0x181F90u;
    // 0x181f90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x181f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x181F98u;
    {
        const bool branch_taken_0x181f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F98u;
        // 0x181f9c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f98) {
            ctx->pc = 0x181FE8u;
            goto label_181fe8;
        }
    }
    ctx->pc = 0x181FA0u;
label_181fa0:
    // 0x181fa0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x181fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181fa4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x181fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181fa8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x181fa8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181fac: 0x4a41112c  vsub.z      $vf4, $vf2, $vf1
    ctx->pc = 0x181facu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181fb0: 0x4b6403bc  vdiv        $Q, $vf0w, $vf4z
    ctx->pc = 0x181fb0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,2))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x181fb4: 0x4b0209be  vmulaz.x    $ACC, $vf1, $vf2z
    ctx->pc = 0x181fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x181fb8: 0x4b01110e  vmsubz.x    $vf4, $vf2, $vf1z
    ctx->pc = 0x181fb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x181fbc: 0x4a0003bf  vwaitq
    ctx->pc = 0x181fbcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x181fc0: 0x4b0020dc  vmulq.x     $vf3, $vf4, $Q
    ctx->pc = 0x181fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x181fc4: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x181fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x181fc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x181fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181fcc: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x181fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181fd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x181FD0u;
    {
        const bool branch_taken_0x181fd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FD0u;
        // 0x181fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fd0) {
            ctx->pc = 0x181FE8u;
            goto label_181fe8;
        }
    }
    ctx->pc = 0x181FD8u;
    // 0x181fd8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x181fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181fdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x181FDCu;
    {
        const bool branch_taken_0x181fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FDCu;
        // 0x181fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fdc) {
            ctx->pc = 0x181FE8u;
            goto label_181fe8;
        }
    }
    ctx->pc = 0x181FE4u;
    // 0x181fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181fe8:
    // 0x181fe8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x181FE8u;
    {
        const bool branch_taken_0x181fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fe8) {
            ctx->pc = 0x181FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181FE8u;
            // 0x181fec: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            goto label_182030;
        }
    }
    ctx->pc = 0x181FF0u;
    // 0x181ff0: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x181FF0u;
    {
        const bool branch_taken_0x181ff0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FF0u;
        // 0x181ff4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ff0) {
            ctx->pc = 0x182088u;
            goto label_182088;
        }
    }
    ctx->pc = 0x181FF8u;
    // 0x181ff8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x181ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182000: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x182000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182004: 0xaf26001c  sw          $a2, 0x1C($t9)
    ctx->pc = 0x182004u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 28), GPR_U32(ctx, 6));
    // 0x182008: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x182008u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x18200c: 0xaf230020  sw          $v1, 0x20($t9)
    ctx->pc = 0x18200cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 32), GPR_U32(ctx, 3));
    // 0x182010: 0xe7200004  swc1        $f0, 0x4($t9)
    ctx->pc = 0x182010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x182014: 0xe7290008  swc1        $f9, 0x8($t9)
    ctx->pc = 0x182014u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x182018: 0xe721000c  swc1        $f1, 0xC($t9)
    ctx->pc = 0x182018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 12), bits); }
    // 0x18201c: 0xaf2a0010  sw          $t2, 0x10($t9)
    ctx->pc = 0x18201cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 10));
    // 0x182020: 0xaf280018  sw          $t0, 0x18($t9)
    ctx->pc = 0x182020u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 24), GPR_U32(ctx, 8));
    // 0x182024: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x182024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x182028: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x182028u;
    {
        const bool branch_taken_0x182028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182028u;
        // 0x18202c: 0xaf280014  sw          $t0, 0x14($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182028) {
            ctx->pc = 0x182108u;
            goto label_182108;
        }
    }
    ctx->pc = 0x182030u;
label_182030:
    // 0x182030: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x182034: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x182034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x182038: 0x302102a  slt         $v0, $t8, $v0
    ctx->pc = 0x182038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18203c: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x18203Cu;
    {
        const bool branch_taken_0x18203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18203Cu;
        // 0x182040: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18203c) {
            ctx->pc = 0x181C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c60;
        }
    }
    ctx->pc = 0x182044u;
    // 0x182044: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x182044u;
    {
        const bool branch_taken_0x182044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182044u;
        // 0x182048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182044) {
            ctx->pc = 0x18211Cu;
            goto label_18211c;
        }
    }
    ctx->pc = 0x18204Cu;
    // 0x18204c: 0x0  nop
    ctx->pc = 0x18204cu;
    // NOP
label_182050:
    // 0x182050: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x182054: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x182054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182058: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x18205c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x18205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182060: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x182060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x182064: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x182064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x182068: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x182068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x18206c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18206cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x182070: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x182070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x182074: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x182074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x182078: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x182078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x18207c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18207Cu;
    {
        const bool branch_taken_0x18207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18207Cu;
        // 0x182080: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18207c) {
            ctx->pc = 0x182100u;
            goto label_182100;
        }
    }
    ctx->pc = 0x182084u;
    // 0x182084: 0x0  nop
    ctx->pc = 0x182084u;
    // NOP
label_182088:
    // 0x182088: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x182088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x18208c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x18208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x182090: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x182090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182094: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x182098: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x182098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18209c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1820a0: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1820a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1820a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1820a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1820a8: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1820a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1820ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1820acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1820b0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1820b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1820b4: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x1820b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1820b8: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1820b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1820bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1820BCu;
    {
        const bool branch_taken_0x1820bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820BCu;
        // 0x1820c0: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820bc) {
            ctx->pc = 0x182100u;
            goto label_182100;
        }
    }
    ctx->pc = 0x1820C4u;
    // 0x1820c4: 0x0  nop
    ctx->pc = 0x1820c4u;
    // NOP
label_1820c8:
    // 0x1820c8: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x1820c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1820cc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1820ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1820d0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1820d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1820d4: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1820d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1820d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1820d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1820dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1820e0: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1820e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1820e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1820e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1820e8: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1820e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1820ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1820ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1820f0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1820f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1820f4: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x1820f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1820f8: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1820f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1820fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1820fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_182100:
    // 0x182100: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x182100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x182104: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x182104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
label_182108:
    // 0x182108: 0x8d830028  lw          $v1, 0x28($t4)
    ctx->pc = 0x182108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x18210c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182110: 0xad980060  sw          $t8, 0x60($t4)
    ctx->pc = 0x182110u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 24));
    // 0x182114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182118: 0xad830028  sw          $v1, 0x28($t4)
    ctx->pc = 0x182118u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 3));
label_18211c:
    // 0x18211c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x18211cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182120: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x182120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x182124: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x182124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182128: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x182128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18212c: 0x3e00008  jr          $ra
    ctx->pc = 0x18212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18212Cu;
        // 0x182130: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18212Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182134u;
}
