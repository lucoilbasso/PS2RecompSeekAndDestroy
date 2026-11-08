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

// Function: entry_001a67d8
// Address: 0x1a67d8 - 0x1a680c
void entry_001a67d8_0x1a67d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a67d8_0x1a67d8");
#endif

    switch (ctx->pc) {
        case 0x1a6808u: goto label_1a6808;
        default: break;
    }

    ctx->pc = 0x1a67d8u;

    // 0x1a67d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a67dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a67e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a67e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a67e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a67e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a67ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a67f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a67f4: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a67f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a67f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A67F8u;
    {
        const bool branch_taken_0x1a67f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67F8u;
        // 0x1a67fc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67f8) {
            ctx->pc = 0x1A680Cu;
            return;
        }
    }
    ctx->pc = 0x1A6800u;
    // 0x1a6800: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6800u;
    SET_GPR_U32(ctx, 31, 0x1A6808u);
    ctx->pc = 0x1A6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6800u;
    // 0x1a6804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6800u, 0x1A6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6808u;
label_1a6808:
    // 0x1a6808: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a680cu;
}
