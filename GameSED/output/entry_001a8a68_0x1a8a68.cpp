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

// Function: entry_001a8a68
// Address: 0x1a8a68 - 0x1a8a90
void entry_001a8a68_0x1a8a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8a68_0x1a8a68");
#endif

    ctx->pc = 0x1a8a68u;

    // 0x1a8a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8a6c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8a74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8a78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8a7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8a80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8a84: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a8a84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a8a88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8A88u;
    {
        const bool branch_taken_0x1a8a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A88u;
        // 0x1a8a8c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a88) {
            ctx->pc = 0x1A8AA0u;
            return;
        }
    }
    ctx->pc = 0x1A8A90u;
}
