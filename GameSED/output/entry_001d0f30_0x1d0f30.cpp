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

// Function: entry_001d0f30
// Address: 0x1d0f30 - 0x1d0f70
void entry_001d0f30_0x1d0f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0f30_0x1d0f30");
#endif

    ctx->pc = 0x1d0f30u;

label_1d0f30:
    // 0x1d0f30: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d0f30u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0f34: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d0f38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d0f3c: 0x9042c2a9  lbu         $v0, -0x3D57($v0)
    ctx->pc = 0x1d0f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951593)));
    // 0x1d0f40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d0f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d0f44: 0x0  nop
    ctx->pc = 0x1d0f44u;
    // NOP
    // 0x1d0f48: 0x0  nop
    ctx->pc = 0x1d0f48u;
    // NOP
    // 0x1d0f4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D0F4Cu;
    {
        const bool branch_taken_0x1d0f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F4Cu;
        // 0x1d0f50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f4c) {
            ctx->pc = 0x1D0F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0f30;
        }
    }
    ctx->pc = 0x1D0F54u;
    // 0x1d0f54: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d0f58: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F58u;
    {
        const bool branch_taken_0x1d0f58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F58u;
        // 0x1d0f5c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f58) {
            ctx->pc = 0x1D0F70u;
            return;
        }
    }
    ctx->pc = 0x1D0F60u;
    // 0x1d0f60: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0f64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d0f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d0f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F68u;
    {
        const bool branch_taken_0x1d0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F68u;
        // 0x1d0f6c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f68) {
            ctx->pc = 0x1D0F80u;
            return;
        }
    }
    ctx->pc = 0x1D0F70u;
}
