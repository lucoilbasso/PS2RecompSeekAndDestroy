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

// Function: entry_001a2500
// Address: 0x1a2500 - 0x1a2520
void entry_001a2500_0x1a2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2500_0x1a2500");
#endif

    ctx->pc = 0x1a2500u;

    // 0x1a2500: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a2504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2504u;
    {
        const bool branch_taken_0x1a2504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2504) {
            ctx->pc = 0x1A2520u;
            return;
        }
    }
    ctx->pc = 0x1A250Cu;
    // 0x1a250c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a250cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a2510: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a2514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2514u;
    {
        const bool branch_taken_0x1a2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2514u;
        // 0x1a2518: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2514) {
            ctx->pc = 0x1A2528u;
            return;
        }
    }
    ctx->pc = 0x1A251Cu;
    // 0x1a251c: 0x0  nop
    ctx->pc = 0x1a251cu;
    // NOP
    ctx->pc = 0x1a2520u;
}
