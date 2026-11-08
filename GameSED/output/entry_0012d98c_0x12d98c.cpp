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

// Function: entry_0012d98c
// Address: 0x12d98c - 0x12da28
void entry_0012d98c_0x12d98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d98c_0x12d98c");
#endif

    ctx->pc = 0x12d98cu;

    // 0x12d98c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x12d98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12d990: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12D990u;
    {
        const bool branch_taken_0x12d990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D990u;
        // 0x12d994: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d990) {
            ctx->pc = 0x12D948u;
            return;
        }
    }
    ctx->pc = 0x12D998u;
    // 0x12d998: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12d99c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12d99cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12d9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12d9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d9a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12d9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12d9ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x12d9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x12d9b0: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x12d9b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x12d9b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d9b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12d9b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12d9b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12d9bc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x12d9bcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12d9c0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x12d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12d9c4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x12d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12d9c8: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x12d9c8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12d9cc: 0x29800  sll         $s3, $v0, 0
    ctx->pc = 0x12d9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x12d9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12d9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d9d8: 0xb3182a  slt         $v1, $a1, $s3
    ctx->pc = 0x12d9d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12d9dc: 0x103a80a  movz        $s5, $t0, $v1
    ctx->pc = 0x12d9dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
    // 0x12d9e0: 0x56a000aa  bnel        $s5, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x12D9E0u;
    {
        const bool branch_taken_0x12d9e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9e0) {
            ctx->pc = 0x12D9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9E0u;
            // 0x12d9e4: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DC8Cu;
            return;
        }
    }
    ctx->pc = 0x12D9E8u;
    // 0x12d9e8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12d9ec: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12D9ECu;
    {
        const bool branch_taken_0x12d9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9ECu;
        // 0x12d9f0: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9ec) {
            ctx->pc = 0x12DAD0u;
            return;
        }
    }
    ctx->pc = 0x12D9F4u;
    // 0x12d9f4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12d9f8: 0x2476d650  addiu       $s6, $v1, -0x29B0
    ctx->pc = 0x12d9f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12d9fc: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x12d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x12da00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12DA00u;
    {
        const bool branch_taken_0x12da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA00u;
        // 0x12da04: 0x8fb10144  lw          $s1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da00) {
            ctx->pc = 0x12DA28u;
            return;
        }
    }
    ctx->pc = 0x12DA08u;
    // 0x12da08: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x12da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x12da0c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12da10: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12da14: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12da14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12da18: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12da1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12DA1Cu;
    {
        const bool branch_taken_0x12da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA1Cu;
        // 0x12da20: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da1c) {
            ctx->pc = 0x12DA5Cu;
            return;
        }
    }
    ctx->pc = 0x12DA24u;
    // 0x12da24: 0x0  nop
    ctx->pc = 0x12da24u;
    // NOP
    ctx->pc = 0x12da28u;
}
