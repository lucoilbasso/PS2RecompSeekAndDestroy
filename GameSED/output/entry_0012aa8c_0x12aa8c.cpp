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

// Function: entry_0012aa8c
// Address: 0x12aa8c - 0x12aa98
void entry_0012aa8c_0x12aa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa8c_0x12aa8c");
#endif

    ctx->pc = 0x12aa8cu;

    // 0x12aa8c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x12AA8Cu;
    {
        const bool branch_taken_0x12aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA8Cu;
        // 0x12aa90: 0xa6020046  sh          $v0, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa8c) {
            ctx->pc = 0x12AD70u;
            return;
        }
    }
    ctx->pc = 0x12AA94u;
    // 0x12aa94: 0x0  nop
    ctx->pc = 0x12aa94u;
    // NOP
    ctx->pc = 0x12aa98u;
}
