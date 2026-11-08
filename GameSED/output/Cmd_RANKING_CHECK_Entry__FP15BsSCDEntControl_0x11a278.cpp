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

// Function: Cmd_RANKING_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x11a278 - 0x11a2e0
void Cmd_RANKING_CHECK_Entry__FP15BsSCDEntControl_0x11a278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_RANKING_CHECK_Entry__FP15BsSCDEntControl_0x11a278");
#endif

    switch (ctx->pc) {
        case 0x11a288u: goto label_11a288;
        default: break;
    }

    ctx->pc = 0x11a278u;

    // 0x11a278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a280: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A280u;
    SET_GPR_U32(ctx, 31, 0x11A288u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A280u, 0x11A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A288u;
label_11a288:
    // 0x11a288: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x11a288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11a28c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a294: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11a294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x11a298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a29c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x11a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x11a2a0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11a2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a2a8: 0x8c4233b4  lw          $v0, 0x33B4($v0)
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13236)));
    // 0x11a2ac: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A2ACu;
    {
        const bool branch_taken_0x11a2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x11A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2ACu;
        // 0x11a2b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2ac) {
            ctx->pc = 0x11A2C0u;
            goto label_11a2c0;
        }
    }
    ctx->pc = 0x11A2B4u;
    // 0x11a2b4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x11a2b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A2B8u;
    {
        const bool branch_taken_0x11a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2B8u;
        // 0x11a2bc: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2b8) {
            ctx->pc = 0x11A2C8u;
            goto label_11a2c8;
        }
    }
    ctx->pc = 0x11A2C0u;
label_11a2c0:
    // 0x11a2c0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x11a2c4: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x11a2c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
label_11a2c8:
    // 0x11a2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a2cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a2d0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x11a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x11a2d4: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x11a2d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x11a2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2D8u;
        // 0x11a2dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A2E0u;
}
