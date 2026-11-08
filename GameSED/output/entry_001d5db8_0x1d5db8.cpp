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

// Function: entry_001d5db8
// Address: 0x1d5db8 - 0x1d5dc8
void entry_001d5db8_0x1d5db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5db8_0x1d5db8");
#endif

    ctx->pc = 0x1d5db8u;

    // 0x1d5db8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5dbc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5DBCu;
    {
        const bool branch_taken_0x1d5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5dbc) {
            ctx->pc = 0x1D5DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5DBCu;
            // 0x1d5dc0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DE8u;
            return;
        }
    }
    ctx->pc = 0x1D5DC4u;
    // 0x1d5dc4: 0x0  nop
    ctx->pc = 0x1d5dc4u;
    // NOP
    ctx->pc = 0x1d5dc8u;
}
