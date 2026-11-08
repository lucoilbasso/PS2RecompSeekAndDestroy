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

// Function: entry_001dcfa0
// Address: 0x1dcfa0 - 0x1dcfb0
void entry_001dcfa0_0x1dcfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcfa0_0x1dcfa0");
#endif

    ctx->pc = 0x1dcfa0u;

    // 0x1dcfa0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dcfa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dcfa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCFA4u;
    {
        const bool branch_taken_0x1dcfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFA4u;
        // 0x1dcfa8: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfa4) {
            ctx->pc = 0x1DCFB8u;
            return;
        }
    }
    ctx->pc = 0x1DCFACu;
    // 0x1dcfac: 0x0  nop
    ctx->pc = 0x1dcfacu;
    // NOP
    ctx->pc = 0x1dcfb0u;
}
