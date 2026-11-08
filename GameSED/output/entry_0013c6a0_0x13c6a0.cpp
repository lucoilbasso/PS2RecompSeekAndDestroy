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

// Function: entry_0013c6a0
// Address: 0x13c6a0 - 0x13c6d8
void entry_0013c6a0_0x13c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c6a0_0x13c6a0");
#endif

    ctx->pc = 0x13c6a0u;

label_13c6a0:
    // 0x13c6a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13c6a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c6a8: 0x0  nop
    ctx->pc = 0x13c6a8u;
    // NOP
    // 0x13c6ac: 0x0  nop
    ctx->pc = 0x13c6acu;
    // NOP
    // 0x13c6b0: 0x0  nop
    ctx->pc = 0x13c6b0u;
    // NOP
    // 0x13c6b4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13C6B4u;
    {
        const bool branch_taken_0x13c6b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6B4u;
        // 0x13c6b8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6b4) {
            ctx->pc = 0x13C6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C6BCu;
    // 0x13c6bc: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x13c6c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13c6c4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x13c6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c6c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13C6C8u;
    {
        const bool branch_taken_0x13c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C8u;
        // 0x13c6cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6c8) {
            ctx->pc = 0x13C668u;
            return;
        }
    }
    ctx->pc = 0x13C6D0u;
    // 0x13c6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C6D0u;
    {
        const bool branch_taken_0x13c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6D0u;
        // 0x13c6d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6d0) {
            ctx->pc = 0x13C6E4u;
            return;
        }
    }
    ctx->pc = 0x13C6D8u;
}
