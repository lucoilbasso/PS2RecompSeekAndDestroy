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

// Function: entry_00147188
// Address: 0x147188 - 0x1471a0
void entry_00147188_0x147188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147188_0x147188");
#endif

    ctx->pc = 0x147188u;

    // 0x147188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14718c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14718Cu;
    {
        const bool branch_taken_0x14718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14718Cu;
        // 0x147190: 0x26d200b0  addiu       $s2, $s6, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14718c) {
            ctx->pc = 0x147220u;
            return;
        }
    }
    ctx->pc = 0x147194u;
    // 0x147194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x147194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147198: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x147198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14719c: 0x0  nop
    ctx->pc = 0x14719cu;
    // NOP
    ctx->pc = 0x1471a0u;
}
