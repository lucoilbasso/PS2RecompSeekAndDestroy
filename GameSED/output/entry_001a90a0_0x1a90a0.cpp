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

// Function: entry_001a90a0
// Address: 0x1a90a0 - 0x1a90f0
void entry_001a90a0_0x1a90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a90a0_0x1a90a0");
#endif

    switch (ctx->pc) {
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90e4u: goto label_1a90e4;
        default: break;
    }

    ctx->pc = 0x1a90a0u;

    // 0x1a90a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a90a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a90a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a90ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a90b0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A90B0u;
    SET_GPR_U32(ctx, 31, 0x1A90B8u);
    ctx->pc = 0x1A90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90B0u;
    // 0x1a90b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A90B0u, 0x1A90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90B8u;
label_1a90b8:
    // 0x1a90b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a90c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a90c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a90c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a90cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a90d0: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a90d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a90d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A90D4u;
    {
        const bool branch_taken_0x1a90d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90D4u;
        // 0x1a90d8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90d4) {
            ctx->pc = 0x1A90F0u;
            return;
        }
    }
    ctx->pc = 0x1A90DCu;
    // 0x1a90dc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A90DCu;
    SET_GPR_U32(ctx, 31, 0x1A90E4u);
    ctx->pc = 0x1A90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90DCu;
    // 0x1a90e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A90DCu, 0x1A90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90E4u;
label_1a90e4:
    // 0x1a90e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A90E4u;
    {
        const bool branch_taken_0x1a90e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E4u;
        // 0x1a90e8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90e4) {
            ctx->pc = 0x1A90F4u;
            return;
        }
    }
    ctx->pc = 0x1A90ECu;
    // 0x1a90ec: 0x0  nop
    ctx->pc = 0x1a90ecu;
    // NOP
    ctx->pc = 0x1a90f0u;
}
