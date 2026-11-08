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

// Function: entry_0011ec90
// Address: 0x11ec90 - 0x11eca0
void entry_0011ec90_0x11ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec90_0x11ec90");
#endif

    ctx->pc = 0x11ec90u;

    // 0x11ec90: 0xc4c100a8  lwc1        $f1, 0xA8($a2)
    ctx->pc = 0x11ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC98u;
    {
        const bool branch_taken_0x11ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC98u;
        // 0x11ec9c: 0xe4c00098  swc1        $f0, 0x98($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec98) {
            ctx->pc = 0x11ECB0u;
            return;
        }
    }
    ctx->pc = 0x11ECA0u;
}
