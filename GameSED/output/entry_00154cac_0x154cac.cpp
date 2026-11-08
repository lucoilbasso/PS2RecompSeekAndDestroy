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

// Function: entry_00154cac
// Address: 0x154cac - 0x154cb8
void entry_00154cac_0x154cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154cac_0x154cac");
#endif

    ctx->pc = 0x154cacu;

    // 0x154cac: 0xc78082f0  lwc1        $f0, -0x7D10($gp)
    ctx->pc = 0x154cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154cb0: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x154CB0u;
    {
        const bool branch_taken_0x154cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CB0u;
        // 0x154cb4: 0xe6000684  swc1        $f0, 0x684($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cb0) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154CB8u;
}
