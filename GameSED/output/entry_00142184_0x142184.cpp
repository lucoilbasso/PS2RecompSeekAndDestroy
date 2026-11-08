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

// Function: entry_00142184
// Address: 0x142184 - 0x14218c
void entry_00142184_0x142184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142184_0x142184");
#endif

    ctx->pc = 0x142184u;

    // 0x142184: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142184u;
    {
        const bool branch_taken_0x142184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142184) {
            ctx->pc = 0x142188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142184u;
            // 0x142188: 0xe4b40148  swc1        $f20, 0x148($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 328), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14218Cu;
            return;
        }
    }
    ctx->pc = 0x14218Cu;
}
