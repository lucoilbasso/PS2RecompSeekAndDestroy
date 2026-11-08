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

// Function: entry_00185c08
// Address: 0x185c08 - 0x185c18
void entry_00185c08_0x185c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185c08_0x185c08");
#endif

    ctx->pc = 0x185c08u;

    // 0x185c08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x185c0c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x185C0Cu;
    {
        const bool branch_taken_0x185c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C0Cu;
        // 0x185c10: 0xa4a20008  sh          $v0, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c0c) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185C14u;
    // 0x185c14: 0x0  nop
    ctx->pc = 0x185c14u;
    // NOP
    ctx->pc = 0x185c18u;
}
