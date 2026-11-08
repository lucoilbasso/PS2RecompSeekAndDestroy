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

// Function: entry_001ac294
// Address: 0x1ac294 - 0x1ac2f8
void entry_001ac294_0x1ac294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac294_0x1ac294");
#endif

    switch (ctx->pc) {
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d4u: goto label_1ac2d4;
        default: break;
    }

    ctx->pc = 0x1ac294u;

    // 0x1ac294: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ac298: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AC298u;
    {
        const bool branch_taken_0x1ac298 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC298u;
        // 0x1ac29c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac298) {
            ctx->pc = 0x1AC268u;
            return;
        }
    }
    ctx->pc = 0x1AC2A0u;
    // 0x1ac2a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac2a4: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x1ac2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
    // 0x1ac2a8: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x1ac2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x1ac2ac: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x1ac2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
    // 0x1ac2b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac2b0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 2));
    // 0x1ac2b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ac2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2b8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ac2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ac2bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x1ac2c0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ac2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ac2c4: 0xc06b074  jal         func_1AC1D0
    ctx->pc = 0x1AC2C4u;
    SET_GPR_U32(ctx, 31, 0x1AC2CCu);
    ctx->pc = 0x1AC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2C4u;
    // 0x1ac2c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1D0u, 0x1AC2C4u, 0x1AC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2CCu;
label_1ac2cc:
    // 0x1ac2cc: 0xc06b0c4  jal         func_1AC310
    ctx->pc = 0x1AC2CCu;
    SET_GPR_U32(ctx, 31, 0x1AC2D4u);
    ctx->pc = 0x1AC2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2CCu;
    // 0x1ac2d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC310u, 0x1AC2CCu, 0x1AC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2D4u;
label_1ac2d4:
    // 0x1ac2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac2d8: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC2D8u;
    {
        const bool branch_taken_0x1ac2d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2D8u;
        // 0x1ac2dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2d8) {
            ctx->pc = 0x1AC2F8u;
            return;
        }
    }
    ctx->pc = 0x1AC2E0u;
    // 0x1ac2e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac2e4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x1ac2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x1ac2e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x1ac2ec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ac2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ac2f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac2f0u;
    runtime->Store32(rdram, ctx, 0x1000E000u, GPR_U32(ctx, 2));
    // 0x1ac2f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ac2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ac2f8u;
}
