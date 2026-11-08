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

// Function: entry_00172db0
// Address: 0x172db0 - 0x172e00
void entry_00172db0_0x172db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172db0_0x172db0");
#endif

    switch (ctx->pc) {
        case 0x172de0u: goto label_172de0;
        default: break;
    }

    ctx->pc = 0x172db0u;

    // 0x172db0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172db4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172db8: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172dbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dc0: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x172dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172dc4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172dc8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172dcc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172dd0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172dd4: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172dd8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172DD8u;
    SET_GPR_U32(ctx, 31, 0x172DE0u);
    ctx->pc = 0x172DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DD8u;
    // 0x172ddc: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172DD8u, 0x172DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DE0u;
label_172de0:
    // 0x172de0: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x172de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172de4: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x172de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x172de8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172DE8u;
    {
        const bool branch_taken_0x172de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172de8) {
            ctx->pc = 0x172DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172DE8u;
            // 0x172dec: 0x26b10170  addiu       $s1, $s5, 0x170 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172E00u;
            return;
        }
    }
    ctx->pc = 0x172DF0u;
    // 0x172df0: 0x26b102c0  addiu       $s1, $s5, 0x2C0
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
    // 0x172df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172DF4u;
    {
        const bool branch_taken_0x172df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DF4u;
        // 0x172df8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172df4) {
            ctx->pc = 0x172E04u;
            return;
        }
    }
    ctx->pc = 0x172DFCu;
    // 0x172dfc: 0x0  nop
    ctx->pc = 0x172dfcu;
    // NOP
    ctx->pc = 0x172e00u;
}
