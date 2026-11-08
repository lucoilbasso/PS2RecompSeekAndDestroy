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

// Function: B_MemClr32__FPvUi
// Address: 0x19c9e8 - 0x19ca4c
void B_MemClr32__FPvUi_0x19c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_MemClr32__FPvUi_0x19c9e8");
#endif

    switch (ctx->pc) {
        case 0x19ca00u: goto label_19ca00;
        case 0x19ca28u: goto label_19ca28;
        default: break;
    }

    ctx->pc = 0x19c9e8u;

    // 0x19c9e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19c9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9ec: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x19c9f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19c9f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9f4: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C9F4u;
    {
        const bool branch_taken_0x19c9f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9F4u;
        // 0x19c9f8: 0x30a50003  andi        $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9f4) {
            ctx->pc = 0x19CA1Cu;
            goto label_19ca1c;
        }
    }
    ctx->pc = 0x19C9FCu;
    // 0x19c9fc: 0x0  nop
    ctx->pc = 0x19c9fcu;
    // NOP
label_19ca00:
    // 0x19ca00: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19ca04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19ca08: 0x0  nop
    ctx->pc = 0x19ca08u;
    // NOP
    // 0x19ca0c: 0x0  nop
    ctx->pc = 0x19ca0cu;
    // NOP
    // 0x19ca10: 0x0  nop
    ctx->pc = 0x19ca10u;
    // NOP
    // 0x19ca14: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CA14u;
    {
        const bool branch_taken_0x19ca14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA14u;
        // 0x19ca18: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca14) {
            ctx->pc = 0x19CA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ca00;
        }
    }
    ctx->pc = 0x19CA1Cu;
label_19ca1c:
    // 0x19ca1c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19CA1Cu;
    {
        const bool branch_taken_0x19ca1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca1c) {
            ctx->pc = 0x19CA44u;
            goto label_19ca44;
        }
    }
    ctx->pc = 0x19CA24u;
    // 0x19ca24: 0x0  nop
    ctx->pc = 0x19ca24u;
    // NOP
label_19ca28:
    // 0x19ca28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19ca2c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19ca2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ca30: 0x0  nop
    ctx->pc = 0x19ca30u;
    // NOP
    // 0x19ca34: 0x0  nop
    ctx->pc = 0x19ca34u;
    // NOP
    // 0x19ca38: 0x0  nop
    ctx->pc = 0x19ca38u;
    // NOP
    // 0x19ca3c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CA3Cu;
    {
        const bool branch_taken_0x19ca3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA3Cu;
        // 0x19ca40: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca3c) {
            ctx->pc = 0x19CA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ca28;
        }
    }
    ctx->pc = 0x19CA44u;
label_19ca44:
    // 0x19ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CA4Cu;
}
