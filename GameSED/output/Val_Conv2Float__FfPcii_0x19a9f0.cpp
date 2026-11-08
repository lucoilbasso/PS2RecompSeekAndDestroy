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

// Function: Val_Conv2Float__FfPcii
// Address: 0x19a9f0 - 0x19ac00
void Val_Conv2Float__FfPcii_0x19a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Conv2Float__FfPcii_0x19a9f0");
#endif

    switch (ctx->pc) {
        case 0x19aa58u: goto label_19aa58;
        case 0x19aaa8u: goto label_19aaa8;
        case 0x19ab38u: goto label_19ab38;
        case 0x19ab60u: goto label_19ab60;
        case 0x19abb0u: goto label_19abb0;
        case 0x19abd8u: goto label_19abd8;
        default: break;
    }

    ctx->pc = 0x19a9f0u;

    // 0x19a9f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a9f4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a9f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a9f8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19a9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9fc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19a9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19AA00u;
    {
        const bool branch_taken_0x19aa00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA00u;
        // 0x19aa04: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa00) {
            ctx->pc = 0x19AA18u;
            goto label_19aa18;
        }
    }
    ctx->pc = 0x19AA08u;
    // 0x19aa08: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x19aa08u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x19aa0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AA0Cu;
    {
        const bool branch_taken_0x19aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA0Cu;
        // 0x19aa10: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa0c) {
            ctx->pc = 0x19AA1Cu;
            goto label_19aa1c;
        }
    }
    ctx->pc = 0x19AA14u;
    // 0x19aa14: 0x0  nop
    ctx->pc = 0x19aa14u;
    // NOP
label_19aa18:
    // 0x19aa18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19aa18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aa1c:
    // 0x19aa1c: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x19AA1Cu;
    {
        const bool branch_taken_0x19aa1c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA1Cu;
        // 0x19aa20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa1c) {
            ctx->pc = 0x19AA84u;
            goto label_19aa84;
        }
    }
    ctx->pc = 0x19AA24u;
    // 0x19aa24: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19aa24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19aa28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19aa28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19aa2c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19aa30: 0x3a63821  addu        $a3, $sp, $a2
    ctx->pc = 0x19aa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x19aa34: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19aa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19aa38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19aa38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19aa3c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19aa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aa40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19aa44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19aa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19aa48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19aa4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19aa50: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x19aa50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x19aa54: 0x0  nop
    ctx->pc = 0x19aa54u;
    // NOP
label_19aa58:
    // 0x19aa58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19aa58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19aa5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19aa60: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19aa64: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19aa64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19aa68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19aa68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19aa6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19aa6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19aa70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19aa74: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x19aa78: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19aa78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aa7c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AA7Cu;
    {
        const bool branch_taken_0x19aa7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA7Cu;
        // 0x19aa80: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa7c) {
            ctx->pc = 0x19AA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19AA84u;
label_19aa84:
    // 0x19aa84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19aa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19aa88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa8c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19aa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa90: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x19AA90u;
    {
        const bool branch_taken_0x19aa90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA90u;
        // 0x19aa94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa90) {
            ctx->pc = 0x19AAECu;
            goto label_19aaec;
        }
    }
    ctx->pc = 0x19AA98u;
    // 0x19aa98: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19aa98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aa9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19AA9Cu;
    {
        const bool branch_taken_0x19aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA9Cu;
        // 0x19aaa0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa9c) {
            ctx->pc = 0x19AAF8u;
            goto label_19aaf8;
        }
    }
    ctx->pc = 0x19AAA4u;
    // 0x19aaa4: 0x0  nop
    ctx->pc = 0x19aaa4u;
    // NOP
label_19aaa8:
    // 0x19aaa8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19aaa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19aaac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19aaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19aab0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19aab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19aab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aab8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19aab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aabc: 0x0  nop
    ctx->pc = 0x19aabcu;
    // NOP
    // 0x19aac0: 0x0  nop
    ctx->pc = 0x19aac0u;
    // NOP
    // 0x19aac4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19aac4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x19aac8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19AAC8u;
    {
        const bool branch_taken_0x19aac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aac8) {
            ctx->pc = 0x19AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AAC8u;
            // 0x19aacc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AAD0u;
            goto label_19aad0;
        }
    }
    ctx->pc = 0x19AAD0u;
label_19aad0:
    // 0x19aad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19aad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19aad4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19aad4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19aad8: 0x1010  mfhi        $v0
    ctx->pc = 0x19aad8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19aadc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19aae0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19aae0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19aae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19aae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19aaec:
    // 0x19aaec: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19aaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aaf0: 0x4501ffed  bc1t        . + 4 + (-0x13 << 2)
    ctx->pc = 0x19AAF0u;
    {
        const bool branch_taken_0x19aaf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAF0u;
        // 0x19aaf4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aaf0) {
            ctx->pc = 0x19AAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aaa8;
        }
    }
    ctx->pc = 0x19AAF8u;
label_19aaf8:
    // 0x19aaf8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19aaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aafc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19aafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab00: 0xa102b  sltu        $v0, $zero, $t2
    ctx->pc = 0x19ab00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x19ab04: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x19ab04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab08: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x19ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AB0Cu;
    {
        const bool branch_taken_0x19ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB0Cu;
        // 0x19ab10: 0xbd1823  subu        $v1, $a1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab0c) {
            ctx->pc = 0x19AB24u;
            goto label_19ab24;
        }
    }
    ctx->pc = 0x19AB14u;
    // 0x19ab14: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x19ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x19ab18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab1c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19ab1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ab20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19ab24:
    // 0x19ab24: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x19AB24u;
    {
        const bool branch_taken_0x19ab24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB24u;
        // 0x19ab28: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab24) {
            ctx->pc = 0x19AB98u;
            goto label_19ab98;
        }
    }
    ctx->pc = 0x19AB2Cu;
    // 0x19ab2c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19AB2Cu;
    {
        const bool branch_taken_0x19ab2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB2Cu;
        // 0x19ab30: 0x66102a  slt         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab2c) {
            ctx->pc = 0x19AB9Cu;
            goto label_19ab9c;
        }
    }
    ctx->pc = 0x19AB34u;
    // 0x19ab34: 0x0  nop
    ctx->pc = 0x19ab34u;
    // NOP
label_19ab38:
    // 0x19ab38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19ab3c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x19ab3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ab40: 0x0  nop
    ctx->pc = 0x19ab40u;
    // NOP
    // 0x19ab44: 0x0  nop
    ctx->pc = 0x19ab44u;
    // NOP
    // 0x19ab48: 0x0  nop
    ctx->pc = 0x19ab48u;
    // NOP
    // 0x19ab4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AB4Cu;
    {
        const bool branch_taken_0x19ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB4Cu;
        // 0x19ab50: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab4c) {
            ctx->pc = 0x19AB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ab38;
        }
    }
    ctx->pc = 0x19AB54u;
    // 0x19ab54: 0x10a70027  beq         $a1, $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x19AB54u;
    {
        const bool branch_taken_0x19ab54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x19AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB54u;
        // 0x19ab58: 0x2408002e  addiu       $t0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab54) {
            ctx->pc = 0x19ABF4u;
            goto label_19abf4;
        }
    }
    ctx->pc = 0x19AB5Cu;
    // 0x19ab5c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_19ab60:
    // 0x19ab60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19ab64: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ab64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ab68: 0x10480003  beq         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AB68u;
    {
        const bool branch_taken_0x19ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x19AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB68u;
        // 0x19ab6c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab68) {
            ctx->pc = 0x19AB78u;
            goto label_19ab78;
        }
    }
    ctx->pc = 0x19AB70u;
    // 0x19ab70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AB70u;
    {
        const bool branch_taken_0x19ab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB70u;
        // 0x19ab74: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab70) {
            ctx->pc = 0x19AB7Cu;
            goto label_19ab7c;
        }
    }
    ctx->pc = 0x19AB78u;
label_19ab78:
    // 0x19ab78: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x19ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_19ab7c:
    // 0x19ab7c: 0x0  nop
    ctx->pc = 0x19ab7cu;
    // NOP
    // 0x19ab80: 0x0  nop
    ctx->pc = 0x19ab80u;
    // NOP
    // 0x19ab84: 0x14a7fff6  bne         $a1, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AB84u;
    {
        const bool branch_taken_0x19ab84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x19AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB84u;
        // 0x19ab88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab84) {
            ctx->pc = 0x19AB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ab60;
        }
    }
    ctx->pc = 0x19AB8Cu;
    // 0x19ab8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19AB8Cu;
    {
        const bool branch_taken_0x19ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB8Cu;
        // 0x19ab90: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab8c) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19AB94u;
    // 0x19ab94: 0x0  nop
    ctx->pc = 0x19ab94u;
    // NOP
label_19ab98:
    // 0x19ab98: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x19ab98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_19ab9c:
    // 0x19ab9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19AB9Cu;
    {
        const bool branch_taken_0x19ab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab9c) {
            ctx->pc = 0x19ABCCu;
            goto label_19abcc;
        }
    }
    ctx->pc = 0x19ABA4u;
    // 0x19aba4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x19aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19aba8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19abac: 0x0  nop
    ctx->pc = 0x19abacu;
    // NOP
label_19abb0:
    // 0x19abb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19abb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19abb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19abbc: 0x0  nop
    ctx->pc = 0x19abbcu;
    // NOP
    // 0x19abc0: 0x0  nop
    ctx->pc = 0x19abc0u;
    // NOP
    // 0x19abc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ABC4u;
    {
        const bool branch_taken_0x19abc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABC4u;
        // 0x19abc8: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abc4) {
            ctx->pc = 0x19ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19ABCCu;
label_19abcc:
    // 0x19abcc: 0x10a7000a  beq         $a1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x19ABCCu;
    {
        const bool branch_taken_0x19abcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x19ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABCCu;
        // 0x19abd0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abcc) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19ABD4u;
    // 0x19abd4: 0x0  nop
    ctx->pc = 0x19abd4u;
    // NOP
label_19abd8:
    // 0x19abd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19abdc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x19abdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19abe0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x19abe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19abe4: 0x0  nop
    ctx->pc = 0x19abe4u;
    // NOP
    // 0x19abe8: 0x0  nop
    ctx->pc = 0x19abe8u;
    // NOP
    // 0x19abec: 0x14a7fffa  bne         $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ABECu;
    {
        const bool branch_taken_0x19abec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x19ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABECu;
        // 0x19abf0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abec) {
            ctx->pc = 0x19ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABF4u;
label_19abf4:
    // 0x19abf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19abf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19abf8:
    // 0x19abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABF8u;
        // 0x19abfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC00u;
}
