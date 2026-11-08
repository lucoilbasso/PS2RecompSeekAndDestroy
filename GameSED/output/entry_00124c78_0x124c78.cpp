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

// Function: entry_00124c78
// Address: 0x124c78 - 0x124d24
void entry_00124c78_0x124c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c78_0x124c78");
#endif

    ctx->pc = 0x124c78u;

    // 0x124c78: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x124c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x124c7c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x124C7Cu;
    {
        const bool branch_taken_0x124c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C7Cu;
        // 0x124c80: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c7c) {
            ctx->pc = 0x124C18u;
            return;
        }
    }
    ctx->pc = 0x124C84u;
    // 0x124c84: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x124c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x124c88: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x124C88u;
    {
        const bool branch_taken_0x124c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C88u;
        // 0x124c8c: 0x8fa400f8  lw          $a0, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c88) {
            ctx->pc = 0x124D38u;
            return;
        }
    }
    ctx->pc = 0x124C90u;
    // 0x124c90: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x124c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x124c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c98: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x124c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
    // 0x124c9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x124c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ca0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x124ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124cac: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x124cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x124cb0: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x124cb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x124cb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x124cb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x124cb8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x124cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x124cbc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x124cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x124cc0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x124cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x124cc4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x124cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x124cc8: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x124cc8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x124ccc: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x124cccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x124cd0: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x124cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x124cd4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x124cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x124cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cdc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x124ce0: 0x8e8401bc  lw          $a0, 0x1BC($s4)
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x124ce4: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x124ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x124ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x124cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124cf0: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x124cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x124cf4: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x124cf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x124cf8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x124cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x124cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124d00: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x124d00u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x124d04: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x124d08: 0x58600006  blezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x124D08u;
    {
        const bool branch_taken_0x124d08 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x124d08) {
            ctx->pc = 0x124D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124D08u;
            // 0x124d0c: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124D24u;
            return;
        }
    }
    ctx->pc = 0x124D10u;
    // 0x124d10: 0x93a200c3  lbu         $v0, 0xC3($sp)
    ctx->pc = 0x124d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x124d14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x124d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x124d18: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x124d1c: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x124d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
    // 0x124d20: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x124d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x124d24u;
}
