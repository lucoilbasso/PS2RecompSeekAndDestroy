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

// Function: TankFarDispChange__7ApcTanki
// Address: 0x155ee0 - 0x155f3c
void TankFarDispChange__7ApcTanki_0x155ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankFarDispChange__7ApcTanki_0x155ee0");
#endif

    switch (ctx->pc) {
        case 0x155f30u: goto label_155f30;
        default: break;
    }

    ctx->pc = 0x155ee0u;

    // 0x155ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155ee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x155ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155EE8u;
    {
        const bool branch_taken_0x155ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EE8u;
        // 0x155eec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ee8) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155EF0u;
    // 0x155ef0: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x155ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x155ef4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x155ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x155ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155EFCu;
    {
        const bool branch_taken_0x155efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EFCu;
        // 0x155f00: 0xac820184  sw          $v0, 0x184($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155efc) {
            ctx->pc = 0x155F1Cu;
            goto label_155f1c;
        }
    }
    ctx->pc = 0x155F04u;
    // 0x155f04: 0x0  nop
    ctx->pc = 0x155f04u;
    // NOP
label_155f08:
    // 0x155f08: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x155f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x155f0c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x155f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x155f10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155f14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155f18: 0xac830184  sw          $v1, 0x184($a0)
    ctx->pc = 0x155f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 3));
label_155f1c:
    // 0x155f1c: 0x8c820690  lw          $v0, 0x690($a0)
    ctx->pc = 0x155f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
    // 0x155f20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155F20u;
    {
        const bool branch_taken_0x155f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F20u;
        // 0x155f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f20) {
            ctx->pc = 0x155F30u;
            goto label_155f30;
        }
    }
    ctx->pc = 0x155F28u;
    // 0x155f28: 0xc058ab0  jal         func_162AC0
    ctx->pc = 0x155F28u;
    SET_GPR_U32(ctx, 31, 0x155F30u);
    ctx->pc = 0x162AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162AC0u, 0x155F28u, 0x155F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F30u;
label_155f30:
    // 0x155f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f34: 0x3e00008  jr          $ra
    ctx->pc = 0x155F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F34u;
        // 0x155f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F3Cu;
}
