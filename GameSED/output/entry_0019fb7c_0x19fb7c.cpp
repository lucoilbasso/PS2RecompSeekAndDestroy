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

// Function: entry_0019fb7c
// Address: 0x19fb7c - 0x19fb90
void entry_0019fb7c_0x19fb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb7c_0x19fb7c");
#endif

    ctx->pc = 0x19fb7cu;

    // 0x19fb7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19fb80: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x19fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19fb84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x19FB84u;
    {
        const bool branch_taken_0x19fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb84) {
            ctx->pc = 0x19FB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB84u;
            // 0x19fb88: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB50u;
            return;
        }
    }
    ctx->pc = 0x19FB8Cu;
    // 0x19fb8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19fb90u;
}
