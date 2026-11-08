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

// Function: entry_00158c58
// Address: 0x158c58 - 0x158c80
void entry_00158c58_0x158c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c58_0x158c58");
#endif

    ctx->pc = 0x158c58u;

    // 0x158c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158c5c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x158c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x158c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x158c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c68: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C68u;
    {
        const bool branch_taken_0x158c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x158C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C68u;
        // 0x158c6c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c68) {
            ctx->pc = 0x158C80u;
            return;
        }
    }
    ctx->pc = 0x158C70u;
    // 0x158c70: 0x25040400  addiu       $a0, $t0, 0x400
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x158c74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158C74u;
    {
        const bool branch_taken_0x158c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C74u;
        // 0x158c78: 0x250303f0  addiu       $v1, $t0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c74) {
            ctx->pc = 0x158C88u;
            return;
        }
    }
    ctx->pc = 0x158C7Cu;
    // 0x158c7c: 0x0  nop
    ctx->pc = 0x158c7cu;
    // NOP
    ctx->pc = 0x158c80u;
}
