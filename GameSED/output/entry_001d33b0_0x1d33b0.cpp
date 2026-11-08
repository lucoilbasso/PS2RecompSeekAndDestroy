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

// Function: entry_001d33b0
// Address: 0x1d33b0 - 0x1d33f0
void entry_001d33b0_0x1d33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d33b0_0x1d33b0");
#endif

    ctx->pc = 0x1d33b0u;

label_1d33b0:
    // 0x1d33b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1d33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1d33b4:
    // 0x1d33b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d33b8:
    // 0x1d33b8: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x1d33b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_1d33bc:
    // 0x1d33bc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1d33bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1d33c0:
    // 0x1d33c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d33c4:
    // 0x1d33c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1d33c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1d33c8:
    // 0x1d33c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1d33cc:
    if (ctx->pc == 0x1D33CCu) {
        ctx->pc = 0x1D33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33C8u;
        // 0x1d33cc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D33D0u;
        goto label_1d33d0;
    }
    ctx->pc = 0x1D33C8u;
    {
        const bool branch_taken_0x1d33c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33C8u;
        // 0x1d33cc: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33c8) {
            ctx->pc = 0x1D344Cu;
            return;
        }
    }
    ctx->pc = 0x1D33D0u;
label_1d33d0:
    // 0x1d33d0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1d33d4:
    // 0x1d33d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d33d8:
    // 0x1d33d8: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1d33dc:
    // 0x1d33dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d33e0:
    // 0x1d33e0: 0x8c63c610  lw          $v1, -0x39F0($v1)
    ctx->pc = 0x1d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952464)));
label_1d33e4:
    // 0x1d33e4: 0x600008  jr          $v1
label_1d33e8:
    if (ctx->pc == 0x1D33E8u) {
        ctx->pc = 0x1D33ECu;
        goto label_1d33ec;
    }
    ctx->pc = 0x1D33E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D33E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D33ECu;
label_1d33ec:
    // 0x1d33ec: 0x0  nop
    ctx->pc = 0x1d33ecu;
    // NOP
    ctx->pc = 0x1d33f0u;
}
