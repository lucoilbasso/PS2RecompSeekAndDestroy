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

// Function: entry_001b70e0
// Address: 0x1b70e0 - 0x1b7128
void entry_001b70e0_0x1b70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b70e0_0x1b70e0");
#endif

    switch (ctx->pc) {
        case 0x1b70f4u: goto label_1b70f4;
        case 0x1b7100u: goto label_1b7100;
        case 0x1b7118u: goto label_1b7118;
        default: break;
    }

    ctx->pc = 0x1b70e0u;

label_1b70e0:
    // 0x1b70e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b70e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b70ec: 0xc06dbfa  jal         func_1B6FE8
    ctx->pc = 0x1B70ECu;
    SET_GPR_U32(ctx, 31, 0x1B70F4u);
    ctx->pc = 0x1B70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70ECu;
    // 0x1b70f0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE8u, 0x1B70ECu, 0x1B70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70F4u;
label_1b70f4:
    // 0x1b70f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b70f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b70f8: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1B70F8u;
    SET_GPR_U32(ctx, 31, 0x1B7100u);
    ctx->pc = 0x1B70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70F8u;
    // 0x1b70fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1B70F8u, 0x1B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7100u;
label_1b7100:
    // 0x1b7100: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1b7100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b7104: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b7104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7108: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b710c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b710cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7110: 0xc06dbfa  jal         func_1B6FE8
    ctx->pc = 0x1B7110u;
    SET_GPR_U32(ctx, 31, 0x1B7118u);
    ctx->pc = 0x1B7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7110u;
    // 0x1b7114: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE8u, 0x1B7110u, 0x1B7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7118u;
label_1b7118:
    // 0x1b7118: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b711c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b7120: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B7120u;
    {
        const bool branch_taken_0x1b7120 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7120u;
        // 0x1b7124: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7120) {
            ctx->pc = 0x1B70E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b70e0;
        }
    }
    ctx->pc = 0x1B7128u;
}
