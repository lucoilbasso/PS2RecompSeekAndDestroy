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

// Function: CalcCRC__9ApSaveCRCPvi
// Address: 0x114d48 - 0x114d7c
void CalcCRC__9ApSaveCRCPvi_0x114d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCRC__9ApSaveCRCPvi_0x114d48");
#endif

    switch (ctx->pc) {
        case 0x114d58u: goto label_114d58;
        default: break;
    }

    ctx->pc = 0x114d48u;

    // 0x114d48: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x114d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x114d4c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x114D4Cu;
    {
        const bool branch_taken_0x114d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D4Cu;
        // 0x114d50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d4c) {
            ctx->pc = 0x114D74u;
            goto label_114d74;
        }
    }
    ctx->pc = 0x114D54u;
    // 0x114d54: 0x0  nop
    ctx->pc = 0x114d54u;
    // NOP
label_114d58:
    // 0x114d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x114d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114d5c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x114d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x114d60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x114d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x114d64: 0x0  nop
    ctx->pc = 0x114d64u;
    // NOP
    // 0x114d68: 0x0  nop
    ctx->pc = 0x114d68u;
    // NOP
    // 0x114d6c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114D6Cu;
    {
        const bool branch_taken_0x114d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D6Cu;
        // 0x114d70: 0x621826  xor         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d6c) {
            ctx->pc = 0x114D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114d58;
        }
    }
    ctx->pc = 0x114D74u;
label_114d74:
    // 0x114d74: 0x3e00008  jr          $ra
    ctx->pc = 0x114D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D74u;
        // 0x114d78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114D7Cu;
}
