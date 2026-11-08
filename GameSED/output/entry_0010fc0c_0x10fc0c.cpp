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

// Function: entry_0010fc0c
// Address: 0x10fc0c - 0x10fc14
void entry_0010fc0c_0x10fc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc0c_0x10fc0c");
#endif

    ctx->pc = 0x10fc0cu;

    // 0x10fc0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10FC0Cu;
    {
        const bool branch_taken_0x10fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc0c) {
            ctx->pc = 0x10FC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FC0Cu;
            // 0x10fc10: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FC14u;
            return;
        }
    }
    ctx->pc = 0x10FC14u;
}
