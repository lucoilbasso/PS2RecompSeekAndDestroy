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

// Function: entry_001a7b20
// Address: 0x1a7b20 - 0x1a7b58
void entry_001a7b20_0x1a7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7b20_0x1a7b20");
#endif

    switch (ctx->pc) {
        case 0x1a7b3cu: goto label_1a7b3c;
        default: break;
    }

    ctx->pc = 0x1a7b20u;

    // 0x1a7b20: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x1a7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7b2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7b30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7b34: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7B34u;
    SET_GPR_U32(ctx, 31, 0x1A7B3Cu);
    ctx->pc = 0x1A7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B34u;
    // 0x1a7b38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7B34u, 0x1A7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7B3Cu;
label_1a7b3c:
    // 0x1a7b3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7b44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7b4c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7B4Cu;
    {
        const bool branch_taken_0x1a7b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B4Cu;
        // 0x1a7b50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b4c) {
            ctx->pc = 0x1A7B74u;
            return;
        }
    }
    ctx->pc = 0x1A7B54u;
    // 0x1a7b54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x1a7b58u;
}
