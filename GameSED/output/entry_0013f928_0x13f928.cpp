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

// Function: entry_0013f928
// Address: 0x13f928 - 0x13f938
void entry_0013f928_0x13f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f928_0x13f928");
#endif

    ctx->pc = 0x13f928u;

    // 0x13f928: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13f92c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x13f930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13F930u;
    {
        const bool branch_taken_0x13f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F930u;
        // 0x13f934: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f930) {
            ctx->pc = 0x13F954u;
            return;
        }
    }
    ctx->pc = 0x13F938u;
}
