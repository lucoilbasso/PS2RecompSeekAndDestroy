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

// Function: entry_001a5f24
// Address: 0x1a5f24 - 0x1a5f40
void entry_001a5f24_0x1a5f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5f24_0x1a5f24");
#endif

    ctx->pc = 0x1a5f24u;

    // 0x1a5f24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F24u;
    {
        const bool branch_taken_0x1a5f24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F24u;
        // 0x1a5f28: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f24) {
            ctx->pc = 0x1A5F40u;
            return;
        }
    }
    ctx->pc = 0x1A5F2Cu;
    // 0x1a5f2c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5f30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a5f34: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A5F34u;
    {
        const bool branch_taken_0x1a5f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F34u;
        // 0x1a5f38: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f34) {
            ctx->pc = 0x1A6010u;
            return;
        }
    }
    ctx->pc = 0x1A5F3Cu;
    // 0x1a5f3c: 0x0  nop
    ctx->pc = 0x1a5f3cu;
    // NOP
    ctx->pc = 0x1a5f40u;
}
