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

// Function: entry_0018c1f0
// Address: 0x18c1f0 - 0x18c210
void entry_0018c1f0_0x18c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c1f0_0x18c1f0");
#endif

    ctx->pc = 0x18c1f0u;

    // 0x18c1f0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x18c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x18c1f4: 0x14780006  bne         $v1, $t8, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C1F4u;
    {
        const bool branch_taken_0x18c1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 24));
        ctx->pc = 0x18C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1F4u;
        // 0x18c1f8: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c1f4) {
            ctx->pc = 0x18C210u;
            return;
        }
    }
    ctx->pc = 0x18C1FCu;
    // 0x18c1fc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c200: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x18c200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c204: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x18C204u;
    {
        const bool branch_taken_0x18c204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c204) {
            ctx->pc = 0x18C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C204u;
            // 0x18c208: 0x8fb000b4  lw          $s0, 0xB4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C228u;
            return;
        }
    }
    ctx->pc = 0x18C20Cu;
    // 0x18c20c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x18c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x18c210u;
}
