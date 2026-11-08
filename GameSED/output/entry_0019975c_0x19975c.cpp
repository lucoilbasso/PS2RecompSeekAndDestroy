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

// Function: entry_0019975c
// Address: 0x19975c - 0x199770
void entry_0019975c_0x19975c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019975c_0x19975c");
#endif

    ctx->pc = 0x19975cu;

    // 0x19975c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x199760: 0x8c500150  lw          $s0, 0x150($v0)
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x199764: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x199764u;
    {
        const bool branch_taken_0x199764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199764u;
        // 0x199768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199764) {
            ctx->pc = 0x199770u;
            return;
        }
    }
    ctx->pc = 0x19976Cu;
    // 0x19976c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x199770u;
}
