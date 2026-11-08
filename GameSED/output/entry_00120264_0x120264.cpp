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

// Function: entry_00120264
// Address: 0x120264 - 0x12026c
void entry_00120264_0x120264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120264_0x120264");
#endif

    ctx->pc = 0x120264u;

    // 0x120264: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x120264u;
    {
        const bool branch_taken_0x120264 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x120268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120264u;
        // 0x120268: 0xe4820078  swc1        $f2, 0x78($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120264) {
            ctx->pc = 0x120208u;
            return;
        }
    }
    ctx->pc = 0x12026Cu;
}
