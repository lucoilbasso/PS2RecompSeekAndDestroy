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

// Function: entry_001613c8
// Address: 0x1613c8 - 0x1613ec
void entry_001613c8_0x1613c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613c8_0x1613c8");
#endif

    ctx->pc = 0x1613c8u;

    // 0x1613c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1613cc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1613D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613CCu;
        // 0x1613d0: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x1613ECu;
            return;
        }
    }
    ctx->pc = 0x1613D4u;
    // 0x1613d4: 0xc5010038  lwc1        $f1, 0x38($t0)
    ctx->pc = 0x1613d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1613d8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1613dc: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1613dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1613e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1613e4: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x1613E4u;
    {
        const bool branch_taken_0x1613e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1613e4) {
            ctx->pc = 0x1613E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1613E4u;
            // 0x1613e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16146Cu;
            return;
        }
    }
    ctx->pc = 0x1613ECu;
}
