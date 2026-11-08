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

// Function: entry_001800dc
// Address: 0x1800dc - 0x1800f0
void entry_001800dc_0x1800dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001800dc_0x1800dc");
#endif

    ctx->pc = 0x1800dcu;

    // 0x1800dc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1800dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1800e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1800e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1800e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1800e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1800E8u;
    {
        const bool branch_taken_0x1800e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800e8) {
            ctx->pc = 0x1800ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800E8u;
            // 0x1800ec: 0x358c0008  ori         $t4, $t4, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800F0u;
            return;
        }
    }
    ctx->pc = 0x1800F0u;
}
