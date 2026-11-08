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

// Function: entry_00188db0
// Address: 0x188db0 - 0x188e28
void entry_00188db0_0x188db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188db0_0x188db0");
#endif

    ctx->pc = 0x188db0u;

    // 0x188db0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188db4: 0x56c20033  bnel        $s6, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x188DB4u;
    {
        const bool branch_taken_0x188db4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x188db4) {
            ctx->pc = 0x188DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DB4u;
            // 0x188db8: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            return;
        }
    }
    ctx->pc = 0x188DBCu;
    // 0x188dbc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x188dc0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x188dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188dc4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x188DC4u;
    {
        const bool branch_taken_0x188dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188dc4) {
            ctx->pc = 0x188DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DC4u;
            // 0x188dc8: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            return;
        }
    }
    ctx->pc = 0x188DCCu;
    // 0x188dcc: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x188dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188dd0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x188dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188ddc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x188ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188de0: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x188DE0u;
    {
        const bool branch_taken_0x188de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188de0) {
            ctx->pc = 0x188DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DE0u;
            // 0x188de4: 0x8e520134  lw          $s2, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E84u;
            return;
        }
    }
    ctx->pc = 0x188DE8u;
    // 0x188de8: 0x26430220  addiu       $v1, $s2, 0x220
    ctx->pc = 0x188de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x188dec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188df0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x188df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188df4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x188df4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x188df8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x188df8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x188dfc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x188dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x188e00: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x188e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x188e04: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x188e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x188e08: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x188e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e0c: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x188e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x188e10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x188e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x188e14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E18u;
    {
        const bool branch_taken_0x188e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E18u;
        // 0x188e1c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e18) {
            ctx->pc = 0x188E28u;
            return;
        }
    }
    ctx->pc = 0x188E20u;
    // 0x188e20: 0xc061920  jal         func_186480
    ctx->pc = 0x188E20u;
    SET_GPR_U32(ctx, 31, 0x188E28u);
    ctx->pc = 0x188E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E20u;
    // 0x188e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x188E20u, 0x188E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E28u;
}
