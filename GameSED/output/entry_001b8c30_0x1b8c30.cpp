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

// Function: entry_001b8c30
// Address: 0x1b8c30 - 0x1b8c48
void entry_001b8c30_0x1b8c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8c30_0x1b8c30");
#endif

    ctx->pc = 0x1b8c30u;

    // 0x1b8c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8c34: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8C34u;
    {
        const bool branch_taken_0x1b8c34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C34u;
        // 0x1b8c38: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c34) {
            ctx->pc = 0x1B8C48u;
            return;
        }
    }
    ctx->pc = 0x1B8C3Cu;
    // 0x1b8c3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b8c40: 0xac40c020  sw          $zero, -0x3FE0($v0)
    ctx->pc = 0x1b8c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24C020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C020u, _value); } while (0);
    // 0x1b8c44: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1b8c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8c48u;
}
