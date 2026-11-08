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

// Function: entry_00178d8c
// Address: 0x178d8c - 0x178db8
void entry_00178d8c_0x178d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d8c_0x178d8c");
#endif

    switch (ctx->pc) {
        case 0x178d94u: goto label_178d94;
        default: break;
    }

    ctx->pc = 0x178d8cu;

    // 0x178d8c: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x178D8Cu;
    SET_GPR_U32(ctx, 31, 0x178D94u);
    ctx->pc = 0x178D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D8Cu;
    // 0x178d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x178D8Cu, 0x178D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D94u;
label_178d94:
    // 0x178d94: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x178d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x178d98: 0x2470d180  addiu       $s0, $v1, -0x2E80
    ctx->pc = 0x178d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955392));
    // 0x178d9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26D180u));
    // 0x178da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178da4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178DA4u;
    {
        const bool branch_taken_0x178da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DA4u;
        // 0x178da8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178da4) {
            ctx->pc = 0x178DB8u;
            return;
        }
    }
    ctx->pc = 0x178DACu;
    // 0x178dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178db0: 0xc05e7f8  jal         func_179FE0
    ctx->pc = 0x178DB0u;
    SET_GPR_U32(ctx, 31, 0x178DB8u);
    ctx->pc = 0x178DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DB0u;
    // 0x178db4: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FE0u, 0x178DB0u, 0x178DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DB8u;
}
