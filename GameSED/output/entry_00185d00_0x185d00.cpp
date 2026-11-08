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

// Function: entry_00185d00
// Address: 0x185d00 - 0x185d10
void entry_00185d00_0x185d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d00_0x185d00");
#endif

    ctx->pc = 0x185d00u;

    // 0x185d00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x185d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x185d04: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x185D04u;
    {
        const bool branch_taken_0x185d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D04u;
        // 0x185d08: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d04) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185D0Cu;
    // 0x185d0c: 0x0  nop
    ctx->pc = 0x185d0cu;
    // NOP
    ctx->pc = 0x185d10u;
}
