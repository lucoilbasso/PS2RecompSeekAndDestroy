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

// Function: entry_001d28bc
// Address: 0x1d28bc - 0x1d28d0
void entry_001d28bc_0x1d28bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d28bc_0x1d28bc");
#endif

    ctx->pc = 0x1d28bcu;

    // 0x1d28bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d28c0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d28c4: 0x1000fab4  b           . + 4 + (-0x54C << 2)
    ctx->pc = 0x1D28C4u;
    {
        const bool branch_taken_0x1d28c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C4u;
        // 0x1d28c8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c4) {
            ctx->pc = 0x1D1398u;
            return;
        }
    }
    ctx->pc = 0x1D28CCu;
    // 0x1d28cc: 0x0  nop
    ctx->pc = 0x1d28ccu;
    // NOP
    ctx->pc = 0x1d28d0u;
}
