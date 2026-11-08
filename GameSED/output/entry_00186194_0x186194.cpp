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

// Function: entry_00186194
// Address: 0x186194 - 0x1861a8
void entry_00186194_0x186194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186194_0x186194");
#endif

    ctx->pc = 0x186194u;

    // 0x186194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186198: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x186198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x18619c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18619Cu;
    {
        const bool branch_taken_0x18619c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18619Cu;
        // 0x1861a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18619c) {
            ctx->pc = 0x1861E8u;
            return;
        }
    }
    ctx->pc = 0x1861A4u;
    // 0x1861a4: 0x0  nop
    ctx->pc = 0x1861a4u;
    // NOP
    ctx->pc = 0x1861a8u;
}
