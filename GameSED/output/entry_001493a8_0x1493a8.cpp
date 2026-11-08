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

// Function: entry_001493a8
// Address: 0x1493a8 - 0x1493f8
void entry_001493a8_0x1493a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001493a8_0x1493a8");
#endif

    ctx->pc = 0x1493a8u;

    // 0x1493a8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1493ac: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1493acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1493b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1493b4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1493b8: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x1493b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1493bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1493BCu;
    {
        const bool branch_taken_0x1493bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1493C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493BCu;
        // 0x1493c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493bc) {
            ctx->pc = 0x1493F8u;
            return;
        }
    }
    ctx->pc = 0x1493C4u;
    // 0x1493c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1493c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1493c8: 0x2862ffc0  slti        $v0, $v1, -0x40
    ctx->pc = 0x1493c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x1493cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1493CCu;
    {
        const bool branch_taken_0x1493cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1493cc) {
            ctx->pc = 0x1493D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1493CCu;
            // 0x1493d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1493F8u;
            return;
        }
    }
    ctx->pc = 0x1493D4u;
    // 0x1493d4: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1493d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1493d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1493D8u;
    {
        const bool branch_taken_0x1493d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493d8) {
            ctx->pc = 0x1493DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1493D8u;
            // 0x1493dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1493F8u;
            return;
        }
    }
    ctx->pc = 0x1493E0u;
    // 0x1493e0: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1493e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1493e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1493ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1493ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1493f0: 0x90637820  lbu         $v1, 0x7820($v1)
    ctx->pc = 0x1493f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30752)));
    // 0x1493f4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1493f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1493f8u;
}
