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

// Function: entry_0012dc9c
// Address: 0x12dc9c - 0x12dcbc
void entry_0012dc9c_0x12dc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dc9c_0x12dc9c");
#endif

    ctx->pc = 0x12dc9cu;

    // 0x12dc9c: 0x8e9400c4  lw          $s4, 0xC4($s4)
    ctx->pc = 0x12dc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x12dca0: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DCA0u;
    {
        const bool branch_taken_0x12dca0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA0u;
        // 0x12dca4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dca0) {
            ctx->pc = 0x12DCC0u;
            return;
        }
    }
    ctx->pc = 0x12DCA8u;
    // 0x12dca8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DCA8u;
    {
        const bool branch_taken_0x12dca8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dca8) {
            ctx->pc = 0x12DCC0u;
            return;
        }
    }
    ctx->pc = 0x12DCB0u;
    // 0x12dcb0: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DCB0u;
    {
        const bool branch_taken_0x12dcb0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB0u;
        // 0x12dcb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcb0) {
            ctx->pc = 0x12DCBCu;
            return;
        }
    }
    ctx->pc = 0x12DCB8u;
    // 0x12dcb8: 0x51a80b  movn        $s5, $v0, $s1
    ctx->pc = 0x12dcb8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    ctx->pc = 0x12dcbcu;
}
