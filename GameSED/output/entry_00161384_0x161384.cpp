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

// Function: entry_00161384
// Address: 0x161384 - 0x1613b8
void entry_00161384_0x161384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161384_0x161384");
#endif

    ctx->pc = 0x161384u;

    // 0x161384: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x161384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161388: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x161388u;
    {
        const bool branch_taken_0x161388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161388) {
            ctx->pc = 0x16138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161388u;
            // 0x16138c: 0x8d230008  lw          $v1, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1613C8u;
            return;
        }
    }
    ctx->pc = 0x161390u;
    // 0x161390: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x161390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x161394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161398: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161398u;
    {
        const bool branch_taken_0x161398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161398u;
        // 0x16139c: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161398) {
            ctx->pc = 0x1613B8u;
            return;
        }
    }
    ctx->pc = 0x1613A0u;
    // 0x1613a0: 0xc5010038  lwc1        $f1, 0x38($t0)
    ctx->pc = 0x1613a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1613a4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1613a8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1613a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1613acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1613b0: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x1613B0u;
    {
        const bool branch_taken_0x1613b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1613b0) {
            ctx->pc = 0x1613B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1613B0u;
            // 0x1613b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16146Cu;
            return;
        }
    }
    ctx->pc = 0x1613B8u;
}
