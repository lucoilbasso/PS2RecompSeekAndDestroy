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

// Function: entry_001d1a78
// Address: 0x1d1a78 - 0x1d1ab8
void entry_001d1a78_0x1d1a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a78_0x1d1a78");
#endif

    ctx->pc = 0x1d1a78u;

label_1d1a78:
    // 0x1d1a78: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x1d1a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1d1a7c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x1d1a7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x1d1a80: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1d1a80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1d1a84: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1a84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1a88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d1a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1a8c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D1A8Cu;
    {
        const bool branch_taken_0x1d1a8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A8Cu;
        // 0x1d1a90: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a8c) {
            ctx->pc = 0x1D1A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1a78;
        }
    }
    ctx->pc = 0x1D1A94u;
    // 0x1d1a94: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d1a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d1a98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D1A98u;
    {
        const bool branch_taken_0x1d1a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A98u;
        // 0x1d1a9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a98) {
            ctx->pc = 0x1D1B30u;
            return;
        }
    }
    ctx->pc = 0x1D1AA0u;
    // 0x1d1aa0: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D1AA0u;
    {
        const bool branch_taken_0x1d1aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1aa0) {
            ctx->pc = 0x1D1AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1AA0u;
            // 0x1d1aa4: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B34u;
            return;
        }
    }
    ctx->pc = 0x1D1AA8u;
    // 0x1d1aa8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d1aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d1aac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1AACu;
    {
        const bool branch_taken_0x1d1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AACu;
        // 0x1d1ab0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1aac) {
            ctx->pc = 0x1D1B30u;
            return;
        }
    }
    ctx->pc = 0x1D1AB4u;
    // 0x1d1ab4: 0x0  nop
    ctx->pc = 0x1d1ab4u;
    // NOP
    ctx->pc = 0x1d1ab8u;
}
