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

// Function: entry_00188d3c
// Address: 0x188d3c - 0x188db0
void entry_00188d3c_0x188d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d3c_0x188d3c");
#endif

    ctx->pc = 0x188d3cu;

    // 0x188d3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x188d40: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x188d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x188d44: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D44u;
            // 0x188d48: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D28u;
            return;
        }
    }
    ctx->pc = 0x188D4Cu;
    // 0x188d4c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x188d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d50: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x188D50u;
    {
        const bool branch_taken_0x188d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188d50) {
            ctx->pc = 0x188D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D50u;
            // 0x188d54: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            return;
        }
    }
    ctx->pc = 0x188D58u;
    // 0x188d58: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x188d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x188d5c: 0x26460220  addiu       $a2, $s2, 0x220
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x188d60: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x188d64: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x188d68: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x188d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x188d6c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x188d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x188d70: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x188d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188d74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188d78: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x188d7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x188d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x188d80: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x188d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x188d84: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x188d84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188d88: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x188d88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x188d8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x188d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188d90: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x188d94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x188d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x188d98: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x188d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x188d9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x188d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x188da0: 0xe4420210  swc1        $f2, 0x210($v0)
    ctx->pc = 0x188da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 528), bits); }
    // 0x188da4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x188DA4u;
    {
        const bool branch_taken_0x188da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da4) {
            ctx->pc = 0x188E80u;
            return;
        }
    }
    ctx->pc = 0x188DACu;
    // 0x188dac: 0x0  nop
    ctx->pc = 0x188dacu;
    // NOP
    ctx->pc = 0x188db0u;
}
