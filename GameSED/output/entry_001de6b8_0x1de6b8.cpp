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

// Function: entry_001de6b8
// Address: 0x1de6b8 - 0x1de6e0
void entry_001de6b8_0x1de6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de6b8_0x1de6b8");
#endif

    ctx->pc = 0x1de6b8u;

label_1de6b8:
    // 0x1de6b8: 0x25280150  addiu       $t0, $t1, 0x150
    ctx->pc = 0x1de6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
label_1de6bc:
    // 0x1de6bc: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1de6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1de6c0:
    // 0x1de6c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1de6c4:
    if (ctx->pc == 0x1DE6C4u) {
        ctx->pc = 0x1DE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6C0u;
        // 0x1de6c4: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6C8u;
        goto label_1de6c8;
    }
    ctx->pc = 0x1DE6C0u;
    {
        const bool branch_taken_0x1de6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6C0u;
        // 0x1de6c4: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6c0) {
            ctx->pc = 0x1DE73Cu;
            return;
        }
    }
    ctx->pc = 0x1DE6C8u;
label_1de6c8:
    // 0x1de6c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1de6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1de6cc:
    // 0x1de6cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1de6d0:
    // 0x1de6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1de6d4:
    // 0x1de6d4: 0x8c637fc0  lw          $v1, 0x7FC0($v1)
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32704)));
label_1de6d8:
    // 0x1de6d8: 0x600008  jr          $v1
label_1de6dc:
    if (ctx->pc == 0x1DE6DCu) {
        ctx->pc = 0x1DE6E0u;
        goto label_fallthrough_0x1de6d8;
    }
    ctx->pc = 0x1DE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1de6d8:
    ctx->pc = 0x1DE6E0u;
}
