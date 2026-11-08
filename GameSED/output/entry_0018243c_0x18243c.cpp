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

// Function: entry_0018243c
// Address: 0x18243c - 0x182454
void entry_0018243c_0x18243c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018243c_0x18243c");
#endif

    ctx->pc = 0x18243cu;

    // 0x18243c: 0x14a00078  bnez        $a1, . + 4 + (0x78 << 2)
    ctx->pc = 0x18243Cu;
    {
        const bool branch_taken_0x18243c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18243Cu;
        // 0x182440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18243c) {
            ctx->pc = 0x182620u;
            return;
        }
    }
    ctx->pc = 0x182444u;
    // 0x182444: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x182444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182448: 0x2358823  subu        $s1, $s1, $s5
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18244c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182450: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x182450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x182454u;
}
