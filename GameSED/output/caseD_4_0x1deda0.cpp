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

// Function: caseD_4
// Address: 0x1deda0 - 0x1dedb0
void caseD_4_0x1deda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1deda0");
#endif

    ctx->pc = 0x1deda0u;

    // 0x1deda0: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x1deda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deda4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEDA4u;
    {
        const bool branch_taken_0x1deda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDA4u;
        // 0x1deda8: 0xe5000024  swc1        $f0, 0x24($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deda4) {
            ctx->pc = 0x1DEDBCu;
            return;
        }
    }
    ctx->pc = 0x1DEDACu;
    // 0x1dedac: 0x0  nop
    ctx->pc = 0x1dedacu;
    // NOP
    ctx->pc = 0x1dedb0u;
}
