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

// Function: entry_00161f9c
// Address: 0x161f9c - 0x161fb0
void entry_00161f9c_0x161f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161f9c_0x161f9c");
#endif

    ctx->pc = 0x161f9cu;

    // 0x161f9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161fa0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x161fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161fa4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x161FA4u;
    {
        const bool branch_taken_0x161fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FA4u;
        // 0x161fa8: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fa4) {
            ctx->pc = 0x161EF8u;
            return;
        }
    }
    ctx->pc = 0x161FACu;
    // 0x161fac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161fb0u;
}
