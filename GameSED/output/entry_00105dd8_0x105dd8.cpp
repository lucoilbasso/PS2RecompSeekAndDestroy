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

// Function: entry_00105dd8
// Address: 0x105dd8 - 0x105df0
void entry_00105dd8_0x105dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105dd8_0x105dd8");
#endif

    ctx->pc = 0x105dd8u;

    // 0x105dd8: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x105dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x105ddc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105DDCu;
    {
        const bool branch_taken_0x105ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DDCu;
        // 0x105de0: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ddc) {
            ctx->pc = 0x105E18u;
            return;
        }
    }
    ctx->pc = 0x105DE4u;
    // 0x105de4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x105de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x105de8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x105de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dec: 0x2447dc00  addiu       $a3, $v0, -0x2400
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    ctx->pc = 0x105df0u;
}
