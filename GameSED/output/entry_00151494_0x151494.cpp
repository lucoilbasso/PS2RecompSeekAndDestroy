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

// Function: entry_00151494
// Address: 0x151494 - 0x1514a0
void entry_00151494_0x151494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151494_0x151494");
#endif

    ctx->pc = 0x151494u;

    // 0x151494: 0xc6000634  lwc1        $f0, 0x634($s0)
    ctx->pc = 0x151494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151498: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x151498u;
    {
        const bool branch_taken_0x151498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151498u;
        // 0x15149c: 0xe6000418  swc1        $f0, 0x418($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151498) {
            ctx->pc = 0x15186Cu;
            return;
        }
    }
    ctx->pc = 0x1514A0u;
}
