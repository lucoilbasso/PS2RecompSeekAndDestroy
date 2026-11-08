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

// Function: entry_00182ee0
// Address: 0x182ee0 - 0x182ef0
void entry_00182ee0_0x182ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182ee0_0x182ee0");
#endif

    ctx->pc = 0x182ee0u;

    // 0x182ee0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ee4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ee8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182EE8u;
    {
        const bool branch_taken_0x182ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ee8) {
            ctx->pc = 0x182EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182EE8u;
            // 0x182eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182EF0u;
            return;
        }
    }
    ctx->pc = 0x182EF0u;
}
