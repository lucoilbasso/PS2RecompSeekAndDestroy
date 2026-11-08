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

// Function: entry_001c38a0
// Address: 0x1c38a0 - 0x1c390c
void entry_001c38a0_0x1c38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c38a0_0x1c38a0");
#endif

    switch (ctx->pc) {
        case 0x1c38c4u: goto label_1c38c4;
        case 0x1c3908u: goto label_1c3908;
        default: break;
    }

    ctx->pc = 0x1c38a0u;

label_1c38a0:
    // 0x1c38a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c38a4: 0x0  nop
    ctx->pc = 0x1c38a4u;
    // NOP
    // 0x1c38a8: 0x0  nop
    ctx->pc = 0x1c38a8u;
    // NOP
    // 0x1c38ac: 0x0  nop
    ctx->pc = 0x1c38acu;
    // NOP
    // 0x1c38b0: 0x0  nop
    ctx->pc = 0x1c38b0u;
    // NOP
    // 0x1c38b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C38B4u;
    {
        const bool branch_taken_0x1c38b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c38b4) {
            ctx->pc = 0x1C38A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c38a0;
        }
    }
    ctx->pc = 0x1C38BCu;
    // 0x1c38bc: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C38BCu;
    SET_GPR_U32(ctx, 31, 0x1C38C4u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C38BCu, 0x1C38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38C4u;
label_1c38c4:
    // 0x1c38c4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c38c8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c38c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c38cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c38d0: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x1c38d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x1c38d4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1c38d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1c38d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c38dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c38e0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1c38e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1c38e4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1c38e4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 17));
    // 0x1c38e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c38ec: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1c38f0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c38f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c38f4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4));
    // 0x1c38f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C38F8u;
    {
        const bool branch_taken_0x1c38f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c38f8) {
            ctx->pc = 0x1C38FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38F8u;
            // 0x1c38fc: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C390Cu;
            return;
        }
    }
    ctx->pc = 0x1C3900u;
    // 0x1c3900: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3900u;
    SET_GPR_U32(ctx, 31, 0x1C3908u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3900u, 0x1C3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3908u;
label_1c3908:
    // 0x1c3908: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1c3908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x1c390cu;
}
