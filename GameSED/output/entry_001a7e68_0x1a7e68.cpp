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

// Function: entry_001a7e68
// Address: 0x1a7e68 - 0x1a7ea0
void entry_001a7e68_0x1a7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7e68_0x1a7e68");
#endif

    switch (ctx->pc) {
        case 0x1a7e9cu: goto label_1a7e9c;
        default: break;
    }

    ctx->pc = 0x1a7e68u;

    // 0x1a7e68: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a7e6c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7e70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7e74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7e78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7e80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7e84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a7e88: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a7e88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7e8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E8Cu;
        // 0x1a7e90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7EA0u;
            return;
        }
    }
    ctx->pc = 0x1A7E94u;
    // 0x1a7e94: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7E94u;
    SET_GPR_U32(ctx, 31, 0x1A7E9Cu);
    ctx->pc = 0x1A7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E94u;
    // 0x1a7e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7E94u, 0x1A7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E9Cu;
label_1a7e9c:
    // 0x1a7e9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a7ea0u;
}
