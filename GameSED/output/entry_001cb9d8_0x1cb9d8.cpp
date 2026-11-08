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

// Function: entry_001cb9d8
// Address: 0x1cb9d8 - 0x1cba18
void entry_001cb9d8_0x1cb9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb9d8_0x1cb9d8");
#endif

    ctx->pc = 0x1cb9d8u;

label_1cb9d8:
    // 0x1cb9d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb9dc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cb9e0: 0xa04703f0  sb          $a3, 0x3F0($v0)
    ctx->pc = 0x1cb9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cb9e4: 0x2483fff0  addiu       $v1, $a0, -0x10
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1cb9e8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb9ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb9f0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb9f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cb9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cb9f8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cb9fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cb9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cba00: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1cba00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cba04: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x1cba04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x1cba08: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CBA08u;
    {
        const bool branch_taken_0x1cba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA08u;
        // 0x1cba0c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba08) {
            ctx->pc = 0x1CB9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CBA10u;
    // 0x1cba10: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CBA10u;
    {
        const bool branch_taken_0x1cba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA10u;
        // 0x1cba14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba10) {
            ctx->pc = 0x1CBA94u;
            return;
        }
    }
    ctx->pc = 0x1CBA18u;
}
