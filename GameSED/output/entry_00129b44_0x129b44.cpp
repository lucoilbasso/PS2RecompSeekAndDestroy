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

// Function: entry_00129b44
// Address: 0x129b44 - 0x129bd8
void entry_00129b44_0x129b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b44_0x129b44");
#endif

    ctx->pc = 0x129b44u;

    // 0x129b44: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x129b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129b48: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x129B48u;
    {
        const bool branch_taken_0x129b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B48u;
        // 0x129b4c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b48) {
            ctx->pc = 0x129AF0u;
            return;
        }
    }
    ctx->pc = 0x129B50u;
    // 0x129b50: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x129b54: 0x14c00020  bnez        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x129B54u;
    {
        const bool branch_taken_0x129b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B54u;
        // 0x129b58: 0x1e1100  sll         $v0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b54) {
            ctx->pc = 0x129BD8u;
            return;
        }
    }
    ctx->pc = 0x129B5Cu;
    // 0x129b5c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x129b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129b64: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x129b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x129b68: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x129b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x129b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x129b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x129b74: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x129b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x129b78: 0x4600e001  sub.s       $f0, $f28, $f0
    ctx->pc = 0x129b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[28], ctx->f[0]);
    // 0x129b7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129b7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x129b80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x129b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x129b84: 0x705110c8  pmaxw       $v0, $v0, $s1
    ctx->pc = 0x129b84u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x129b88: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129b8c: 0x704c10e8  pminw       $v0, $v0, $t4
    ctx->pc = 0x129b8cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x129b90: 0x2f000  sll         $fp, $v0, 0
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129b94: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x129b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129b98: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x129b9c: 0x23e182a  slt         $v1, $s1, $fp
    ctx->pc = 0x129b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x129ba0: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x129ba4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x129ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129ba8: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x129ba8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x129bac: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x129bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x129bb0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x129bb4: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x129bb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x129bb8: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x129bbc: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129BBCu;
    {
        const bool branch_taken_0x129bbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x129BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BBCu;
        // 0x129bc0: 0x1e1100  sll         $v0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bbc) {
            ctx->pc = 0x129BD8u;
            return;
        }
    }
    ctx->pc = 0x129BC4u;
    // 0x129bc4: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x129bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x129bc8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x129bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x129bcc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x129bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x129bd0: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x129bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x129bd4: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x129bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    ctx->pc = 0x129bd8u;
}
