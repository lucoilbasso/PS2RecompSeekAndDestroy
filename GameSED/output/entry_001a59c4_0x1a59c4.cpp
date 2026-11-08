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

// Function: entry_001a59c4
// Address: 0x1a59c4 - 0x1a59f0
void entry_001a59c4_0x1a59c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a59c4_0x1a59c4");
#endif

    ctx->pc = 0x1a59c4u;

    // 0x1a59c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a59c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a59cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A59CCu;
    {
        const bool branch_taken_0x1a59cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59CCu;
        // 0x1a59d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59cc) {
            ctx->pc = 0x1A59F0u;
            return;
        }
    }
    ctx->pc = 0x1A59D4u;
    // 0x1a59d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a59d8: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1a59d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x1a59dc: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x1a59dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x1a59e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a59e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A59E4u;
    {
        const bool branch_taken_0x1a59e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a59e4) {
            ctx->pc = 0x1A5A64u;
            return;
        }
    }
    ctx->pc = 0x1A59ECu;
    // 0x1a59ec: 0x0  nop
    ctx->pc = 0x1a59ecu;
    // NOP
    ctx->pc = 0x1a59f0u;
}
