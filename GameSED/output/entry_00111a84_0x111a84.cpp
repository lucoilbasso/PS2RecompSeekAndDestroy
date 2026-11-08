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

// Function: entry_00111a84
// Address: 0x111a84 - 0x111aa8
void entry_00111a84_0x111a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a84_0x111a84");
#endif

    ctx->pc = 0x111a84u;

label_111a84:
    // 0x111a84: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x111a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_111a88:
    // 0x111a88: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_111a8c:
    if (ctx->pc == 0x111A8Cu) {
        ctx->pc = 0x111A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A88u;
        // 0x111a8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111A90u;
        goto label_111a90;
    }
    ctx->pc = 0x111A88u;
    {
        const bool branch_taken_0x111a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111a88) {
            ctx->pc = 0x111A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A88u;
            // 0x111a8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111B20u;
            return;
        }
    }
    ctx->pc = 0x111A90u;
label_111a90:
    // 0x111a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_111a94:
    // 0x111a94: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x111a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_111a98:
    // 0x111a98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111a9c:
    // 0x111a9c: 0x8c634040  lw          $v1, 0x4040($v1)
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16448)));
label_111aa0:
    // 0x111aa0: 0x600008  jr          $v1
label_111aa4:
    if (ctx->pc == 0x111AA4u) {
        ctx->pc = 0x111AA8u;
        goto label_fallthrough_0x111aa0;
    }
    ctx->pc = 0x111AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111AA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x111aa0:
    ctx->pc = 0x111AA8u;
}
