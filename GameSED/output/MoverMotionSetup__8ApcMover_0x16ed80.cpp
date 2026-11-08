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

// Function: MoverMotionSetup__8ApcMover
// Address: 0x16ed80 - 0x16edf0
void MoverMotionSetup__8ApcMover_0x16ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoverMotionSetup__8ApcMover_0x16ed80");
#endif

    switch (ctx->pc) {
        case 0x16eda8u: goto label_16eda8;
        default: break;
    }

    ctx->pc = 0x16ed80u;

    // 0x16ed80: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16ed84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ed88: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16ed8c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16ed8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x16ed90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ed94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ed94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ed9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16eda0: 0xc06164c  jal         func_185930
    ctx->pc = 0x16EDA0u;
    SET_GPR_U32(ctx, 31, 0x16EDA8u);
    ctx->pc = 0x16EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDA0u;
    // 0x16eda4: 0x2451ed50  addiu       $s1, $v0, -0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16EDA0u, 0x16EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDA8u;
label_16eda8:
    // 0x16eda8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16eda8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16edb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16EDB0u;
    {
        const bool branch_taken_0x16edb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDB0u;
        // 0x16edb4: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edb0) {
            ctx->pc = 0x16EDDCu;
            goto label_16eddc;
        }
    }
    ctx->pc = 0x16EDB8u;
    // 0x16edb8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x16edb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16edbc: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x16edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
    // 0x16edc0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x16edc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16edc4: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x16edc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16edc8: 0xac710018  sw          $s1, 0x18($v1)
    ctx->pc = 0x16edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 17));
    // 0x16edcc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x16edccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x16edd0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x16edd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16edd4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x16edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x16edd8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x16edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_16eddc:
    // 0x16eddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16eddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ede0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ede0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ede4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x16EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDE8u;
        // 0x16edec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EDF0u;
}
