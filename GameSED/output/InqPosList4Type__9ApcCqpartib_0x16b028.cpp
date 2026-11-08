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

// Function: InqPosList4Type__9ApcCqpartib
// Address: 0x16b028 - 0x16b09c
void InqPosList4Type__9ApcCqpartib_0x16b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqPosList4Type__9ApcCqpartib_0x16b028");
#endif

    ctx->pc = 0x16b028u;

    // 0x16b028: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x16b028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x16b02c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B02Cu;
    {
        const bool branch_taken_0x16b02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B02Cu;
        // 0x16b030: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b02c) {
            ctx->pc = 0x16B070u;
            goto label_16b070;
        }
    }
    ctx->pc = 0x16B034u;
    // 0x16b034: 0x28a20016  slti        $v0, $a1, 0x16
    ctx->pc = 0x16b034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x16b038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B038u;
    {
        const bool branch_taken_0x16b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B038u;
        // 0x16b03c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b038) {
            ctx->pc = 0x16B058u;
            goto label_16b058;
        }
    }
    ctx->pc = 0x16B040u;
    // 0x16b040: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16b044: 0x50a2000d  beql        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B044u;
            // 0x16b048: 0x24831200  addiu       $v1, $a0, 0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16B04Cu;
    // 0x16b04c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16B04Cu;
    {
        const bool branch_taken_0x16b04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b04c) {
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16B054u;
    // 0x16b054: 0x0  nop
    ctx->pc = 0x16b054u;
    // NOP
label_16b058:
    // 0x16b058: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B058u;
    {
        const bool branch_taken_0x16b058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B058u;
        // 0x16b05c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b058) {
            ctx->pc = 0x16B078u;
            goto label_16b078;
        }
    }
    ctx->pc = 0x16B060u;
    // 0x16b060: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B060u;
    {
        const bool branch_taken_0x16b060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b060) {
            ctx->pc = 0x16B064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B060u;
            // 0x16b064: 0x24831224  addiu       $v1, $a0, 0x1224 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16B068u;
    // 0x16b068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B068u;
    {
        const bool branch_taken_0x16b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b068) {
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16B070u;
label_16b070:
    // 0x16b070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B070u;
    {
        const bool branch_taken_0x16b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B070u;
        // 0x16b074: 0x24831218  addiu       $v1, $a0, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b070) {
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16B078u;
label_16b078:
    // 0x16b078: 0x2483120c  addiu       $v1, $a0, 0x120C
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4620));
label_16b07c:
    // 0x16b07c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B07Cu;
    {
        const bool branch_taken_0x16b07c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b07c) {
            ctx->pc = 0x16B094u;
            goto label_16b094;
        }
    }
    ctx->pc = 0x16B084u;
    // 0x16b084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B084u;
    {
        const bool branch_taken_0x16b084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b084) {
            ctx->pc = 0x16B094u;
            goto label_16b094;
        }
    }
    ctx->pc = 0x16B08Cu;
    // 0x16b08c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b090: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16b090u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_16b094:
    // 0x16b094: 0x3e00008  jr          $ra
    ctx->pc = 0x16B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B094u;
        // 0x16b098: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B09Cu;
}
