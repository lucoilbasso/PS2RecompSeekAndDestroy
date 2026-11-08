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

// Function: entry_001c30c0
// Address: 0x1c30c0 - 0x1c312c
void entry_001c30c0_0x1c30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30c0_0x1c30c0");
#endif

    switch (ctx->pc) {
        case 0x1c30e4u: goto label_1c30e4;
        case 0x1c3128u: goto label_1c3128;
        default: break;
    }

    ctx->pc = 0x1c30c0u;

label_1c30c0:
    // 0x1c30c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c30c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c30c8: 0x0  nop
    ctx->pc = 0x1c30c8u;
    // NOP
    // 0x1c30cc: 0x0  nop
    ctx->pc = 0x1c30ccu;
    // NOP
    // 0x1c30d0: 0x0  nop
    ctx->pc = 0x1c30d0u;
    // NOP
    // 0x1c30d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C30D4u;
    {
        const bool branch_taken_0x1c30d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c30d4) {
            ctx->pc = 0x1C30C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30c0;
        }
    }
    ctx->pc = 0x1C30DCu;
    // 0x1c30dc: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C30DCu;
    SET_GPR_U32(ctx, 31, 0x1C30E4u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C30DCu, 0x1C30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30E4u;
label_1c30e4:
    // 0x1c30e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c30e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c30ec: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x1c30ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x1c30f0: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x1c30f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c30f4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0));
    // 0x1c30f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c30fc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x1c30fcu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17));
    // 0x1c3100: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x1c3100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x1c3104: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3108: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x1c3108u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20));
    // 0x1c310c: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x1c310cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x1c3110: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3114: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c3114u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3));
    // 0x1c3118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3118u;
    {
        const bool branch_taken_0x1c3118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3118u;
        // 0x1c311c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3118) {
            ctx->pc = 0x1C312Cu;
            return;
        }
    }
    ctx->pc = 0x1C3120u;
    // 0x1c3120: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C3120u;
    SET_GPR_U32(ctx, 31, 0x1C3128u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C3120u, 0x1C3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3128u;
label_1c3128:
    // 0x1c3128: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c312cu;
}
