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

// Function: entry_0012e6c0
// Address: 0x12e6c0 - 0x12e6f8
void entry_0012e6c0_0x12e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e6c0_0x12e6c0");
#endif

    ctx->pc = 0x12e6c0u;

label_12e6c0:
    // 0x12e6c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e6c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12e6c8: 0x0  nop
    ctx->pc = 0x12e6c8u;
    // NOP
    // 0x12e6cc: 0x0  nop
    ctx->pc = 0x12e6ccu;
    // NOP
    // 0x12e6d0: 0x0  nop
    ctx->pc = 0x12e6d0u;
    // NOP
    // 0x12e6d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E6D4u;
    {
        const bool branch_taken_0x12e6d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6D4u;
        // 0x12e6d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6d4) {
            ctx->pc = 0x12E6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e6c0;
        }
    }
    ctx->pc = 0x12E6DCu;
    // 0x12e6dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12e6e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12e6e4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x12e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x12e6e8: 0x26040198  addiu       $a0, $s0, 0x198
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
    // 0x12e6ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12e6f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e6f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x12e6f8u;
}
