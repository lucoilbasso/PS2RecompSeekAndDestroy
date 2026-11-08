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

// Function: entry_001cb618
// Address: 0x1cb618 - 0x1cb628
void entry_001cb618_0x1cb618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb618_0x1cb618");
#endif

    ctx->pc = 0x1cb618u;

    // 0x1cb618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb61c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CB61Cu;
    {
        const bool branch_taken_0x1cb61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB61Cu;
        // 0x1cb620: 0xa2220477  sb          $v0, 0x477($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb61c) {
            ctx->pc = 0x1CB648u;
            return;
        }
    }
    ctx->pc = 0x1CB624u;
    // 0x1cb624: 0x0  nop
    ctx->pc = 0x1cb624u;
    // NOP
    ctx->pc = 0x1cb628u;
}
