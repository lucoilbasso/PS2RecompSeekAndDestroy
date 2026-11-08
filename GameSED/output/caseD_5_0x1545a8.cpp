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

// Function: caseD_5
// Address: 0x1545a8 - 0x1545b0
void caseD_5_0x1545a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1545a8");
#endif

    ctx->pc = 0x1545a8u;

    // 0x1545a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1545A8u;
    {
        const bool branch_taken_0x1545a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545A8u;
        // 0x1545ac: 0xe6140280  swc1        $f20, 0x280($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545a8) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545B0u;
}
