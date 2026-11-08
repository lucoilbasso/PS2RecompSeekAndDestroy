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

// Function: entry_001a6dd0
// Address: 0x1a6dd0 - 0x1a6e08
void entry_001a6dd0_0x1a6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6dd0_0x1a6dd0");
#endif

    ctx->pc = 0x1a6dd0u;

    // 0x1a6dd0: 0x2a020c00  slti        $v0, $s0, 0xC00
    ctx->pc = 0x1a6dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a6dd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6DD4u;
    {
        const bool branch_taken_0x1a6dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dd4) {
            ctx->pc = 0x1A6E08u;
            return;
        }
    }
    ctx->pc = 0x1A6DDCu;
    // 0x1a6ddc: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1a6de0: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1a6de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a6de4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6dec: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a6decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a6df0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6df4: 0x8c63fb30  lw          $v1, -0x4D0($v1)
    ctx->pc = 0x1a6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966064)));
    // 0x1a6df8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a6dfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6e00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6E00u;
    {
        const bool branch_taken_0x1a6e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E00u;
        // 0x1a6e04: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e00) {
            ctx->pc = 0x1A6E54u;
            return;
        }
    }
    ctx->pc = 0x1A6E08u;
}
