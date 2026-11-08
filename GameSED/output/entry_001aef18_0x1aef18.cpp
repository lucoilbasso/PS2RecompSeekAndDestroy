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

// Function: entry_001aef18
// Address: 0x1aef18 - 0x1aef30
void entry_001aef18_0x1aef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aef18_0x1aef18");
#endif

    ctx->pc = 0x1aef18u;

    // 0x1aef18: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1aef18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1aef1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AEF1Cu;
    {
        const bool branch_taken_0x1aef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF1Cu;
        // 0x1aef20: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef1c) {
            ctx->pc = 0x1AEF4Cu;
            return;
        }
    }
    ctx->pc = 0x1AEF24u;
    // 0x1aef24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEF24u;
    {
        const bool branch_taken_0x1aef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF24u;
        // 0x1aef28: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef24) {
            ctx->pc = 0x1AEF3Cu;
            return;
        }
    }
    ctx->pc = 0x1AEF2Cu;
    // 0x1aef2c: 0x0  nop
    ctx->pc = 0x1aef2cu;
    // NOP
    ctx->pc = 0x1aef30u;
}
