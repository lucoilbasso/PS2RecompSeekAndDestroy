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

// Function: entry_00179cf8
// Address: 0x179cf8 - 0x179d04
void entry_00179cf8_0x179cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179cf8_0x179cf8");
#endif

    ctx->pc = 0x179cf8u;

    // 0x179cf8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x179cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x179cfc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x179CFCu;
    {
        const bool branch_taken_0x179cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179cfc) {
            ctx->pc = 0x179D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179CFCu;
            // 0x179d00: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179CC0u;
            return;
        }
    }
    ctx->pc = 0x179D04u;
}
