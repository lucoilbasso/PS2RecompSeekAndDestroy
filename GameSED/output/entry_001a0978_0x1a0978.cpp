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

// Function: entry_001a0978
// Address: 0x1a0978 - 0x1a0990
void entry_001a0978_0x1a0978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0978_0x1a0978");
#endif

    ctx->pc = 0x1a0978u;

    // 0x1a0978: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0978u;
    {
        const bool branch_taken_0x1a0978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0978u;
        // 0x1a097c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0978) {
            ctx->pc = 0x1A0990u;
            return;
        }
    }
    ctx->pc = 0x1A0980u;
    // 0x1a0980: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a0984: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A0984u;
    {
        const bool branch_taken_0x1a0984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0984u;
        // 0x1a0988: 0x2446d8d0  addiu       $a2, $v0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0984) {
            ctx->pc = 0x1A0A38u;
            return;
        }
    }
    ctx->pc = 0x1A098Cu;
    // 0x1a098c: 0x0  nop
    ctx->pc = 0x1a098cu;
    // NOP
    ctx->pc = 0x1a0990u;
}
