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

// Function: entry_001425c4
// Address: 0x1425c4 - 0x1425d0
void entry_001425c4_0x1425c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001425c4_0x1425c4");
#endif

    ctx->pc = 0x1425c4u;

    // 0x1425c4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1425c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1425c8: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1425C8u;
    {
        const bool branch_taken_0x1425c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1425c8) {
            ctx->pc = 0x1425CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1425C8u;
            // 0x1425cc: 0xe4740150  swc1        $f20, 0x150($v1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1425D0u;
            return;
        }
    }
    ctx->pc = 0x1425D0u;
}
