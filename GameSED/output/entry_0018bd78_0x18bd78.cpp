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

// Function: entry_0018bd78
// Address: 0x18bd78 - 0x18bdc0
void entry_0018bd78_0x18bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bd78_0x18bd78");
#endif

    ctx->pc = 0x18bd78u;

    // 0x18bd78: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x18bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bd80: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x18bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x18bd84: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18BD84u;
    {
        const bool branch_taken_0x18bd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD84u;
        // 0x18bd88: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd84) {
            ctx->pc = 0x18BDE8u;
            return;
        }
    }
    ctx->pc = 0x18BD8Cu;
    // 0x18bd8c: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x18bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x18bd90: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BD90u;
    {
        const bool branch_taken_0x18bd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD90u;
        // 0x18bd94: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd90) {
            ctx->pc = 0x18BDE8u;
            return;
        }
    }
    ctx->pc = 0x18BD98u;
    // 0x18bd98: 0x8c830254  lw          $v1, 0x254($a0)
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x18bd9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18bda0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18bda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bda4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18bda8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bdac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x18bdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bdb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18BDB0u;
    {
        const bool branch_taken_0x18bdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDB0u;
        // 0x18bdb4: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdb0) {
            ctx->pc = 0x18BDC0u;
            return;
        }
    }
    ctx->pc = 0x18BDB8u;
    // 0x18bdb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BDB8u;
    {
        const bool branch_taken_0x18bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDB8u;
        // 0x18bdbc: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdb8) {
            ctx->pc = 0x18BDD4u;
            return;
        }
    }
    ctx->pc = 0x18BDC0u;
}
