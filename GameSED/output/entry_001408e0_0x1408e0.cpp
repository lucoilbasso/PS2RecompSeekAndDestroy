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

// Function: entry_001408e0
// Address: 0x1408e0 - 0x140908
void entry_001408e0_0x1408e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001408e0_0x1408e0");
#endif

    ctx->pc = 0x1408e0u;

    // 0x1408e0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1408e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1408e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1408e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1408e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1408e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1408ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1408ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1408f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1408f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1408f4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1408F4u;
    {
        const bool branch_taken_0x1408f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1408F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408F4u;
        // 0x1408f8: 0x24830070  addiu       $v1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408f4) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x1408FCu;
    // 0x1408fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1408FCu;
    {
        const bool branch_taken_0x1408fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408fc) {
            ctx->pc = 0x140924u;
            return;
        }
    }
    ctx->pc = 0x140904u;
    // 0x140904: 0x0  nop
    ctx->pc = 0x140904u;
    // NOP
    ctx->pc = 0x140908u;
}
