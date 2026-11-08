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

// Function: entry_00107650
// Address: 0x107650 - 0x107660
void entry_00107650_0x107650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107650_0x107650");
#endif

    ctx->pc = 0x107650u;

    // 0x107650: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x107650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x107654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x107654u;
    {
        const bool branch_taken_0x107654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107654u;
        // 0x107658: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107654) {
            ctx->pc = 0x10766Cu;
            return;
        }
    }
    ctx->pc = 0x10765Cu;
    // 0x10765c: 0x0  nop
    ctx->pc = 0x10765cu;
    // NOP
    ctx->pc = 0x107660u;
}
