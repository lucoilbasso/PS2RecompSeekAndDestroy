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

// Function: entry_0017cd74
// Address: 0x17cd74 - 0x17cd88
void entry_0017cd74_0x17cd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd74_0x17cd74");
#endif

    ctx->pc = 0x17cd74u;

    // 0x17cd74: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17CD74u;
    {
        const bool branch_taken_0x17cd74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD74u;
        // 0x17cd78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd74) {
            ctx->pc = 0x17CD98u;
            return;
        }
    }
    ctx->pc = 0x17CD7Cu;
    // 0x17cd7c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CD7Cu;
    {
        const bool branch_taken_0x17cd7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD7Cu;
        // 0x17cd80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd7c) {
            ctx->pc = 0x17CD88u;
            return;
        }
    }
    ctx->pc = 0x17CD84u;
    // 0x17cd84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17cd88u;
}
