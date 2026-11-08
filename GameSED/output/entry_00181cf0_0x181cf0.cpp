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

// Function: entry_00181cf0
// Address: 0x181cf0 - 0x181d00
void entry_00181cf0_0x181cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181cf0_0x181cf0");
#endif

    ctx->pc = 0x181cf0u;

    // 0x181cf0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x181cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181cf4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CF8u;
    {
        const bool branch_taken_0x181cf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181cf8) {
            ctx->pc = 0x181CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CF8u;
            // 0x181cfc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181D00u;
            return;
        }
    }
    ctx->pc = 0x181D00u;
}
