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

// Function: entry_00182bf4
// Address: 0x182bf4 - 0x182c04
void entry_00182bf4_0x182bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182bf4_0x182bf4");
#endif

    ctx->pc = 0x182bf4u;

    // 0x182bf4: 0xc7818580  lwc1        $f1, -0x7A80($gp)
    ctx->pc = 0x182bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182bf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182bfc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x182BFCu;
    {
        const bool branch_taken_0x182bfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BFCu;
        // 0x182c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bfc) {
            ctx->pc = 0x182C0Cu;
            return;
        }
    }
    ctx->pc = 0x182C04u;
}
