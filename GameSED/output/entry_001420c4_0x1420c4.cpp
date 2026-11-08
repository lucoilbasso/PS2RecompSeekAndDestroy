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

// Function: entry_001420c4
// Address: 0x1420c4 - 0x1420cc
void entry_001420c4_0x1420c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420c4_0x1420c4");
#endif

    ctx->pc = 0x1420c4u;

    // 0x1420c4: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1420C4u;
    {
        const bool branch_taken_0x1420c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1420c4) {
            ctx->pc = 0x1420C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1420C4u;
            // 0x1420c8: 0xe4b40144  swc1        $f20, 0x144($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 324), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1420CCu;
            return;
        }
    }
    ctx->pc = 0x1420CCu;
}
