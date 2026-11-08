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

// Function: DrawSort__9WcBgPanelP8WcEntity
// Address: 0x18b930 - 0x18b998
void DrawSort__9WcBgPanelP8WcEntity_0x18b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9WcBgPanelP8WcEntity_0x18b930");
#endif

    ctx->pc = 0x18b930u;

    // 0x18b930: 0x94820150  lhu         $v0, 0x150($a0)
    ctx->pc = 0x18b930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x18b934: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x18b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x18b938: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18b938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18b93c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18B93Cu;
    {
        const bool branch_taken_0x18b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B93Cu;
        // 0x18b940: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b93c) {
            ctx->pc = 0x18B990u;
            goto label_18b990;
        }
    }
    ctx->pc = 0x18B944u;
    // 0x18b944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b948: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18b948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18b94c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18B94Cu;
    {
        const bool branch_taken_0x18b94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b94c) {
            ctx->pc = 0x18B990u;
            goto label_18b990;
        }
    }
    ctx->pc = 0x18B954u;
    // 0x18b954: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x18b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x18b958: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B958u;
    {
        const bool branch_taken_0x18b958 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B958u;
        // 0x18b95c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b958) {
            ctx->pc = 0x18B97Cu;
            goto label_18b97c;
        }
    }
    ctx->pc = 0x18B960u;
    // 0x18b960: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18b964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b968: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18b968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18b96c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b970: 0xac82012c  sw          $v0, 0x12C($a0)
    ctx->pc = 0x18b970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 2));
    // 0x18b974: 0x8c82012c  lw          $v0, 0x12C($a0)
    ctx->pc = 0x18b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x18b978: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18b97c:
    // 0x18b97c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18b980: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18b984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b988: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x18b988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x18b98c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_18b990:
    // 0x18b990: 0x3e00008  jr          $ra
    ctx->pc = 0x18B990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B998u;
}
