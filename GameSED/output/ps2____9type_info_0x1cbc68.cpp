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

// Function: _$_9type_info
// Address: 0x1cbc68 - 0x1cbc9c
void ps2____9type_info_0x1cbc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____9type_info_0x1cbc68");
#endif

    ctx->pc = 0x1cbc68u;

    // 0x1cbc68: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbc6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbc70: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x1cbc74: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1cbc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1cbc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbc7c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBC7Cu;
    {
        const bool branch_taken_0x1cbc7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC7Cu;
        // 0x1cbc80: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc7c) {
            ctx->pc = 0x1CBC90u;
            goto label_1cbc90;
        }
    }
    ctx->pc = 0x1CBC84u;
    // 0x1cbc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbc88: 0x80682ca  j           func_1A0B28
    ctx->pc = 0x1CBC88u;
    ctx->pc = 0x1CBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC88u;
    // 0x1cbc8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B28u;
    ps2___builtin_delete_0x1a0b28(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBC90u;
label_1cbc90:
    // 0x1cbc90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC94u;
        // 0x1cbc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC9Cu;
}
