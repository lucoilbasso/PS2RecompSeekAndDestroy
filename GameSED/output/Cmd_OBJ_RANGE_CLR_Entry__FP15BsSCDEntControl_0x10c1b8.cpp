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

// Function: Cmd_OBJ_RANGE_CLR_Entry__FP15BsSCDEntControl
// Address: 0x10c1b8 - 0x10c230
void Cmd_OBJ_RANGE_CLR_Entry__FP15BsSCDEntControl_0x10c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_RANGE_CLR_Entry__FP15BsSCDEntControl_0x10c1b8");
#endif

    switch (ctx->pc) {
        case 0x10c1dcu: goto label_10c1dc;
        case 0x10c1e8u: goto label_10c1e8;
        case 0x10c200u: goto label_10c200;
        case 0x10c20cu: goto label_10c20c;
        default: break;
    }

    ctx->pc = 0x10c1b8u;

    // 0x10c1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c1cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10c1d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c1d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C1D4u;
    SET_GPR_U32(ctx, 31, 0x10C1DCu);
    ctx->pc = 0x10C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1D4u;
    // 0x10c1d8: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C1D4u, 0x10C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1DCu;
label_10c1dc:
    // 0x10c1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C1E0u;
    SET_GPR_U32(ctx, 31, 0x10C1E8u);
    ctx->pc = 0x10C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1E0u;
    // 0x10c1e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C1E0u, 0x10C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1E8u;
label_10c1e8:
    // 0x10c1e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1ec: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x10c1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10c1f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10C1F0u;
    {
        const bool branch_taken_0x10c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c1f0) {
            ctx->pc = 0x10C1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C1F0u;
            // 0x10c1f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C21Cu;
            goto label_10c21c;
        }
    }
    ctx->pc = 0x10C1F8u;
    // 0x10c1f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1fc: 0x0  nop
    ctx->pc = 0x10c1fcu;
    // NOP
label_10c200:
    // 0x10c200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10c200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10c204: 0xc040d98  jal         func_103660
    ctx->pc = 0x10C204u;
    SET_GPR_U32(ctx, 31, 0x10C20Cu);
    ctx->pc = 0x10C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C204u;
    // 0x10c208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103660u, 0x10C204u, 0x10C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C20Cu;
label_10c20c:
    // 0x10c20c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x10c20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10c210: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10C210u;
    {
        const bool branch_taken_0x10c210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C210u;
        // 0x10c214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c210) {
            ctx->pc = 0x10C200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c200;
        }
    }
    ctx->pc = 0x10C218u;
    // 0x10c218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10c21c:
    // 0x10c21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c224: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10c224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c228: 0x3e00008  jr          $ra
    ctx->pc = 0x10C228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C228u;
        // 0x10c22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C230u;
}
