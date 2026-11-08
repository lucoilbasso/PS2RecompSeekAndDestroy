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

// Function: entry_0017c138
// Address: 0x17c138 - 0x17c150
void entry_0017c138_0x17c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c138_0x17c138");
#endif

    ctx->pc = 0x17c138u;

    // 0x17c138: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c13c: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x17c13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c140: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C140u;
    {
        const bool branch_taken_0x17c140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C140u;
        // 0x17c144: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c140) {
            ctx->pc = 0x17C118u;
            return;
        }
    }
    ctx->pc = 0x17C148u;
    // 0x17c148: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c14c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x17c150u;
}
