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

// Function: entry_0017a50c
// Address: 0x17a50c - 0x17a518
void entry_0017a50c_0x17a50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a50c_0x17a50c");
#endif

    ctx->pc = 0x17a50cu;

    // 0x17a50c: 0x2a10000a  slti        $s0, $s0, 0xA
    ctx->pc = 0x17a50cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17a510: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A510u;
    {
        const bool branch_taken_0x17a510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a510) {
            ctx->pc = 0x17A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A510u;
            // 0x17a514: 0xdfb00400  ld          $s0, 0x400($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A524u;
            return;
        }
    }
    ctx->pc = 0x17A518u;
}
