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

// Function: entry_001a7a24
// Address: 0x1a7a24 - 0x1a7a58
void entry_001a7a24_0x1a7a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7a24_0x1a7a24");
#endif

    switch (ctx->pc) {
        case 0x1a7a54u: goto label_1a7a54;
        default: break;
    }

    ctx->pc = 0x1a7a24u;

    // 0x1a7a24: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7a28: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7a2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7a30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7a38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7a3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7a40: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7a44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7A44u;
    {
        const bool branch_taken_0x1a7a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A44u;
        // 0x1a7a48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a44) {
            ctx->pc = 0x1A7A58u;
            return;
        }
    }
    ctx->pc = 0x1A7A4Cu;
    // 0x1a7a4c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A7A54u);
    ctx->pc = 0x1A7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A4Cu;
    // 0x1a7a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7A4Cu, 0x1A7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A54u;
label_1a7a54:
    // 0x1a7a54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a7a58u;
}
