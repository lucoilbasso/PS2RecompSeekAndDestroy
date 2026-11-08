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

// Function: entry_001c4330
// Address: 0x1c4330 - 0x1c43b4
void entry_001c4330_0x1c4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4330_0x1c4330");
#endif

    switch (ctx->pc) {
        case 0x1c4354u: goto label_1c4354;
        default: break;
    }

    ctx->pc = 0x1c4330u;

label_1c4330:
    // 0x1c4330: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1c4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c4334: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1c4334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1c4338: 0x0  nop
    ctx->pc = 0x1c4338u;
    // NOP
    // 0x1c433c: 0x0  nop
    ctx->pc = 0x1c433cu;
    // NOP
    // 0x1c4340: 0x0  nop
    ctx->pc = 0x1c4340u;
    // NOP
    // 0x1c4344: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4344u;
    {
        const bool branch_taken_0x1c4344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4344) {
            ctx->pc = 0x1C4330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4330;
        }
    }
    ctx->pc = 0x1C434Cu;
    // 0x1c434c: 0xc071080  jal         func_1C4200
    ctx->pc = 0x1C434Cu;
    SET_GPR_U32(ctx, 31, 0x1C4354u);
    ctx->pc = 0x1C4350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C434Cu;
    // 0x1c4350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4200u, 0x1C434Cu, 0x1C4354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4354u;
label_1c4354:
    // 0x1c4354: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c4354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4358: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1c435c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1c435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1c4360: 0x34e7b020  ori         $a3, $a3, 0xB020
    ctx->pc = 0x1c4360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45088);
    // 0x1c4364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c4364u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x1c4368: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c4368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c436c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x1c436cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x1c4370: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4374: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c4374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c4378: 0x34c62020  ori         $a2, $a2, 0x2020
    ctx->pc = 0x1c4378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8224);
    // 0x1c437c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c437cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4384: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1c4384u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x1c4388: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1c4388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1c438c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c438cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1c4390: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x1c4394: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1c4394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1c4398: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c4398u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x1c439c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1c439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1c43a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c43a4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1c43a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43ACu;
        // 0x1c43b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43B4u;
}
