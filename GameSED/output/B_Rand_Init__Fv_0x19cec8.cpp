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

// Function: B_Rand_Init__Fv
// Address: 0x19cec8 - 0x19cf14
void B_Rand_Init__Fv_0x19cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Rand_Init__Fv_0x19cec8");
#endif

    switch (ctx->pc) {
        case 0x19cee0u: goto label_19cee0;
        default: break;
    }

    ctx->pc = 0x19cec8u;

    // 0x19cec8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19cecc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x19ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x19ced0: 0x2448f010  addiu       $t0, $v0, -0xFF0
    ctx->pc = 0x19ced0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x19ced4: 0x24678670  addiu       $a3, $v1, -0x7990
    ctx->pc = 0x19ced4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936176));
    // 0x19ced8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cedc: 0x0  nop
    ctx->pc = 0x19cedcu;
    // NOP
label_19cee0:
    // 0x19cee0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19cee4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19cee8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19ceec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19cef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cef4: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19cef4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19cef8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19CEF8u;
    {
        const bool branch_taken_0x19cef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEF8u;
        // 0x19cefc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cef8) {
            ctx->pc = 0x19CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cee0;
        }
    }
    ctx->pc = 0x19CF00u;
    // 0x19cf00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19cf04: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19cf08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19cf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F00Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F00Cu, _value); } while (0);
    // 0x19cf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF0Cu;
        // 0x19cf10: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF14u;
}
