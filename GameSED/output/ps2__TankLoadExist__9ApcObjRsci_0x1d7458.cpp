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

// Function: _TankLoadExist__9ApcObjRsci
// Address: 0x1d7458 - 0x1d74a0
void ps2__TankLoadExist__9ApcObjRsci_0x1d7458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TankLoadExist__9ApcObjRsci_0x1d7458");
#endif

    switch (ctx->pc) {
        case 0x1d7470u: goto label_1d7470;
        default: break;
    }

    ctx->pc = 0x1d7458u;

    // 0x1d7458: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d7458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d745c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D745Cu;
    {
        const bool branch_taken_0x1d745c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D745Cu;
        // 0x1d7460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d745c) {
            ctx->pc = 0x1D7494u;
            goto label_1d7494;
        }
    }
    ctx->pc = 0x1D7464u;
    // 0x1d7464: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1d7464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1d7468: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d746c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1d7470:
    // 0x1d7470: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d7474: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d7478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d747c: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D747Cu;
    {
        const bool branch_taken_0x1d747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D747Cu;
        // 0x1d7480: 0xe8302a  slt         $a2, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d747c) {
            ctx->pc = 0x1D7498u;
            goto label_1d7498;
        }
    }
    ctx->pc = 0x1D7484u;
    // 0x1d7484: 0x0  nop
    ctx->pc = 0x1d7484u;
    // NOP
    // 0x1d7488: 0x0  nop
    ctx->pc = 0x1d7488u;
    // NOP
    // 0x1d748c: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D748Cu;
    {
        const bool branch_taken_0x1d748c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d748c) {
            ctx->pc = 0x1D7490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D748Cu;
            // 0x1d7490: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7470;
        }
    }
    ctx->pc = 0x1D7494u;
label_1d7494:
    // 0x1d7494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7498:
    // 0x1d7498: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7498u;
        // 0x1d749c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D74A0u;
}
