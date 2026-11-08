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

// Function: entry_00142064
// Address: 0x142064 - 0x14206c
void entry_00142064_0x142064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142064_0x142064");
#endif

    ctx->pc = 0x142064u;

    // 0x142064: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142064u;
    {
        const bool branch_taken_0x142064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142064) {
            ctx->pc = 0x142068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142064u;
            // 0x142068: 0xe4b40140  swc1        $f20, 0x140($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 320), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14206Cu;
            return;
        }
    }
    ctx->pc = 0x14206Cu;
}
