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

// Function: entry_00182ad0
// Address: 0x182ad0 - 0x182ae8
void entry_00182ad0_0x182ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182ad0_0x182ad0");
#endif

    ctx->pc = 0x182ad0u;

    // 0x182ad0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x182ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ad4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x182ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182ad8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x182ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x182adc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ae0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182AE0u;
    {
        const bool branch_taken_0x182ae0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ae0) {
            ctx->pc = 0x182AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182AE0u;
            // 0x182ae4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182AE8u;
            return;
        }
    }
    ctx->pc = 0x182AE8u;
}
