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

// Function: entry_0018d778
// Address: 0x18d778 - 0x18d790
void entry_0018d778_0x18d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d778_0x18d778");
#endif

    ctx->pc = 0x18d778u;

    // 0x18d778: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d778u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d77c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x18d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x18d780: 0x26120002  addiu       $s2, $s0, 0x2
    ctx->pc = 0x18d780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x18d784: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x18D784u;
    {
        const bool branch_taken_0x18d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D784u;
        // 0x18d788: 0xa6c30000  sh          $v1, 0x0($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d784) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D78Cu;
    // 0x18d78c: 0x0  nop
    ctx->pc = 0x18d78cu;
    // NOP
    ctx->pc = 0x18d790u;
}
