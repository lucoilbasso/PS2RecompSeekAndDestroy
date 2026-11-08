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

// Function: entry_001c09e8
// Address: 0x1c09e8 - 0x1c0a1c
void entry_001c09e8_0x1c09e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c09e8_0x1c09e8");
#endif

    ctx->pc = 0x1c09e8u;

    // 0x1c09e8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c09ec: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x1c09ecu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1c09f0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1c09f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1c09f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c09f8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1c09f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c09fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c09fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c0a00: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0A00u;
    {
        const bool branch_taken_0x1c0a00 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A00u;
        // 0x1c0a04: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a00) {
            ctx->pc = 0x1C0A24u;
            return;
        }
    }
    ctx->pc = 0x1C0A08u;
    // 0x1c0a08: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1c0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1c0a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A0Cu;
    {
        const bool branch_taken_0x1c0a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A0Cu;
        // 0x1c0a10: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a0c) {
            ctx->pc = 0x1C0A1Cu;
            return;
        }
    }
    ctx->pc = 0x1C0A14u;
    // 0x1c0a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0A14u;
    {
        const bool branch_taken_0x1c0a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A14u;
        // 0x1c0a18: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a14) {
            ctx->pc = 0x1C0A28u;
            return;
        }
    }
    ctx->pc = 0x1C0A1Cu;
}
