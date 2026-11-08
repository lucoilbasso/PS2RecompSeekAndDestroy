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

// Function: entry_0017d8d0
// Address: 0x17d8d0 - 0x17d900
void entry_0017d8d0_0x17d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d8d0_0x17d8d0");
#endif

    ctx->pc = 0x17d8d0u;

    // 0x17d8d0: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x17d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17d8d4: 0x262800b  movn        $s0, $s3, $v0
    ctx->pc = 0x17d8d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x17d8d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17d8dc: 0x10770008  beq         $v1, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D8DCu;
    {
        const bool branch_taken_0x17d8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x17D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8DCu;
        // 0x17d8e0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8dc) {
            ctx->pc = 0x17D900u;
            return;
        }
    }
    ctx->pc = 0x17D8E4u;
    // 0x17d8e4: 0x10760006  beq         $v1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D8E4u;
    {
        const bool branch_taken_0x17d8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x17D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8E4u;
        // 0x17d8e8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8e4) {
            ctx->pc = 0x17D900u;
            return;
        }
    }
    ctx->pc = 0x17D8ECu;
    // 0x17d8ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17d8f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D8F0u;
    {
        const bool branch_taken_0x17d8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8F0u;
        // 0x17d8f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d8f0) {
            ctx->pc = 0x17D900u;
            return;
        }
    }
    ctx->pc = 0x17D8F8u;
    // 0x17d8f8: 0x38620018  xori        $v0, $v1, 0x18
    ctx->pc = 0x17d8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
    // 0x17d8fc: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x17d8fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x17d900u;
}
