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

// Function: entry_00106dc8
// Address: 0x106dc8 - 0x106e10
void entry_00106dc8_0x106dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106dc8_0x106dc8");
#endif

    switch (ctx->pc) {
        case 0x106de4u: goto label_106de4;
        case 0x106e08u: goto label_106e08;
        default: break;
    }

    ctx->pc = 0x106dc8u;

    // 0x106dc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106dcc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x106dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x106dd0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x106dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x106dd4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106dd8: 0x8c520044  lw          $s2, 0x44($v0)
    ctx->pc = 0x106dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x106ddc: 0xc04110c  jal         func_104430
    ctx->pc = 0x106DDCu;
    SET_GPR_U32(ctx, 31, 0x106DE4u);
    ctx->pc = 0x106DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DDCu;
    // 0x106de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106DDCu, 0x106DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DE4u;
label_106de4:
    // 0x106de4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x106de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x106de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x106de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106dec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x106decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x106df0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106DF0u;
    {
        const bool branch_taken_0x106df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106df0) {
            ctx->pc = 0x106DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106DF0u;
            // 0x106df4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E10u;
            return;
        }
    }
    ctx->pc = 0x106DF8u;
    // 0x106df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e00: 0xc04110c  jal         func_104430
    ctx->pc = 0x106E00u;
    SET_GPR_U32(ctx, 31, 0x106E08u);
    ctx->pc = 0x106E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E00u;
    // 0x106e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106E00u, 0x106E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E08u;
label_106e08:
    // 0x106e08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x106e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x106e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x106e10u;
}
