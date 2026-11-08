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

// Function: entry_0015e200
// Address: 0x15e200 - 0x15e210
void entry_0015e200_0x15e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e200_0x15e200");
#endif

    ctx->pc = 0x15e200u;

    // 0x15e200: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15e204: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15E204u;
    {
        const bool branch_taken_0x15e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E204u;
        // 0x15e208: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e204) {
            ctx->pc = 0x15E2E8u;
            return;
        }
    }
    ctx->pc = 0x15E20Cu;
    // 0x15e20c: 0x0  nop
    ctx->pc = 0x15e20cu;
    // NOP
    ctx->pc = 0x15e210u;
}
