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

// Function: entry_00179d84
// Address: 0x179d84 - 0x179d90
void entry_00179d84_0x179d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179d84_0x179d84");
#endif

    ctx->pc = 0x179d84u;

    // 0x179d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x179D84u;
    {
        const bool branch_taken_0x179d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D84u;
        // 0x179d88: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d84) {
            ctx->pc = 0x179D94u;
            return;
        }
    }
    ctx->pc = 0x179D8Cu;
    // 0x179d8c: 0x0  nop
    ctx->pc = 0x179d8cu;
    // NOP
    ctx->pc = 0x179d90u;
}
