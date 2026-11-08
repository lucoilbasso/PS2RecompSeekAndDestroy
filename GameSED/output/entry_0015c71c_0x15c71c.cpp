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

// Function: entry_0015c71c
// Address: 0x15c71c - 0x15c730
void entry_0015c71c_0x15c71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c71c_0x15c71c");
#endif

    ctx->pc = 0x15c71cu;

    // 0x15c71c: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x15c71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c720: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x15c720u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15c724: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C724u;
    {
        const bool branch_taken_0x15c724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c724) {
            ctx->pc = 0x15C74Cu;
            return;
        }
    }
    ctx->pc = 0x15C72Cu;
    // 0x15c72c: 0x0  nop
    ctx->pc = 0x15c72cu;
    // NOP
    ctx->pc = 0x15c730u;
}
