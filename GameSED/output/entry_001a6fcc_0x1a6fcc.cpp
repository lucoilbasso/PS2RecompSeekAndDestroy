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

// Function: entry_001a6fcc
// Address: 0x1a6fcc - 0x1a7000
void entry_001a6fcc_0x1a6fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6fcc_0x1a6fcc");
#endif

    switch (ctx->pc) {
        case 0x1a6ff4u: goto label_1a6ff4;
        default: break;
    }

    ctx->pc = 0x1a6fccu;

    // 0x1a6fcc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6fd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6fd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6fd8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6fdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6fe0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6fe4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6FE4u;
    {
        const bool branch_taken_0x1a6fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fe4) {
            ctx->pc = 0x1A7000u;
            return;
        }
    }
    ctx->pc = 0x1A6FECu;
    // 0x1a6fec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6FECu;
    SET_GPR_U32(ctx, 31, 0x1A6FF4u);
    ctx->pc = 0x1A6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FECu;
    // 0x1a6ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6FECu, 0x1A6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FF4u;
label_1a6ff4:
    // 0x1a6ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6FF4u;
    {
        const bool branch_taken_0x1a6ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF4u;
        // 0x1a6ff8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ff4) {
            ctx->pc = 0x1A7004u;
            return;
        }
    }
    ctx->pc = 0x1A6FFCu;
    // 0x1a6ffc: 0x0  nop
    ctx->pc = 0x1a6ffcu;
    // NOP
    ctx->pc = 0x1a7000u;
}
