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

// Function: PartsLoadInfoInit__9ApcObjRsci
// Address: 0x1d7508 - 0x1d7594
void PartsLoadInfoInit__9ApcObjRsci_0x1d7508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsLoadInfoInit__9ApcObjRsci_0x1d7508");
#endif

    switch (ctx->pc) {
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7550u: goto label_1d7550;
        case 0x1d7560u: goto label_1d7560;
        default: break;
    }

    ctx->pc = 0x1d7508u;

    // 0x1d7508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d750c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d750cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7514: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d751c: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x1d751cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x1d7520: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7520u;
    {
        const bool branch_taken_0x1d7520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7520u;
        // 0x1d7524: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7520) {
            ctx->pc = 0x1D752Cu;
            goto label_1d752c;
        }
    }
    ctx->pc = 0x1D7528u;
    // 0x1d7528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d752c:
    // 0x1d752c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D752Cu;
    SET_GPR_U32(ctx, 31, 0x1D7534u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D752Cu, 0x1D7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7534u;
label_1d7534:
    // 0x1d7534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7534u;
    {
        const bool branch_taken_0x1d7534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7534u;
        // 0x1d7538: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7534) {
            ctx->pc = 0x1D7550u;
            goto label_1d7550;
        }
    }
    ctx->pc = 0x1D753Cu;
    // 0x1d753c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d753cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7544: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
    // 0x1d7548: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D7548u;
    SET_GPR_U32(ctx, 31, 0x1D7550u);
    ctx->pc = 0x1D754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7548u;
    // 0x1d754c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D7548u, 0x1D7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7550u;
label_1d7550:
    // 0x1d7550: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d7554: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7554u;
    {
        const bool branch_taken_0x1d7554 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7554u;
        // 0x1d7558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7554) {
            ctx->pc = 0x1D7584u;
            goto label_1d7584;
        }
    }
    ctx->pc = 0x1D755Cu;
    // 0x1d755c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1d755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1d7560:
    // 0x1d7560: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d7560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d7564: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d7564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7568: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d7568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d756c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d7570: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d7570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d7574: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d7574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7578: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d7578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d757c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D757Cu;
    {
        const bool branch_taken_0x1d757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D757Cu;
        // 0x1d7580: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d757c) {
            ctx->pc = 0x1D7560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7560;
        }
    }
    ctx->pc = 0x1D7584u;
label_1d7584:
    // 0x1d7584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7588: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d758c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D758Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D758Cu;
        // 0x1d7590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D758Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7594u;
}
