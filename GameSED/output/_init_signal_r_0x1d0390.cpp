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

// Function: _init_signal_r
// Address: 0x1d0390 - 0x1d0400
void _init_signal_r_0x1d0390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_init_signal_r_0x1d0390");
#endif

    switch (ctx->pc) {
        case 0x1d03b4u: goto label_1d03b4;
        case 0x1d03d0u: goto label_1d03d0;
        default: break;
    }

    ctx->pc = 0x1d0390u;

    // 0x1d0390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d039c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d03a0: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x1d03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1d03a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D03A4u;
    {
        const bool branch_taken_0x1d03a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d03a4) {
            ctx->pc = 0x1D03A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D03A4u;
            // 0x1d03a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D03F0u;
            goto label_1d03f0;
        }
    }
    ctx->pc = 0x1D03ACu;
    // 0x1d03ac: 0xc073e1a  jal         func_1CF868
    ctx->pc = 0x1D03ACu;
    SET_GPR_U32(ctx, 31, 0x1D03B4u);
    ctx->pc = 0x1D03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03ACu;
    // 0x1d03b0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF868u, 0x1D03ACu, 0x1D03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03B4u;
label_1d03b4:
    // 0x1d03b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d03b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d03bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D03BCu;
    {
        const bool branch_taken_0x1d03bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03BCu;
        // 0x1d03c0: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03bc) {
            ctx->pc = 0x1D03F0u;
            goto label_1d03f0;
        }
    }
    ctx->pc = 0x1D03C4u;
    // 0x1d03c4: 0x2462007c  addiu       $v0, $v1, 0x7C
    ctx->pc = 0x1d03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x1d03c8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1d03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d03cc: 0x0  nop
    ctx->pc = 0x1d03ccu;
    // NOP
label_1d03d0:
    // 0x1d03d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d03d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d03d8: 0x0  nop
    ctx->pc = 0x1d03d8u;
    // NOP
    // 0x1d03dc: 0x0  nop
    ctx->pc = 0x1d03dcu;
    // NOP
    // 0x1d03e0: 0x0  nop
    ctx->pc = 0x1d03e0u;
    // NOP
    // 0x1d03e4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D03E4u;
    {
        const bool branch_taken_0x1d03e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03E4u;
        // 0x1d03e8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03e4) {
            ctx->pc = 0x1D03D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d03d0;
        }
    }
    ctx->pc = 0x1D03ECu;
    // 0x1d03ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d03ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d03f0:
    // 0x1d03f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d03f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d03f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d03f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d03f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03F8u;
        // 0x1d03fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D03F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0400u;
}
