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

// Function: entry_0017efd8
// Address: 0x17efd8 - 0x17efe0
void entry_0017efd8_0x17efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017efd8_0x17efd8");
#endif

    ctx->pc = 0x17efd8u;

    // 0x17efd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EFD8u;
    {
        const bool branch_taken_0x17efd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFD8u;
        // 0x17efdc: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efd8) {
            ctx->pc = 0x17EFE8u;
            return;
        }
    }
    ctx->pc = 0x17EFE0u;
}
