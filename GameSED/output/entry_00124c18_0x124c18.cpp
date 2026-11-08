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

// Function: entry_00124c18
// Address: 0x124c18 - 0x124c4c
void entry_00124c18_0x124c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c18_0x124c18");
#endif

    ctx->pc = 0x124c18u;

    // 0x124c18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124c1c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x124c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x124c20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124c24: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x124c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x124c28: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x124c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x124c2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x124C2Cu;
    {
        const bool branch_taken_0x124c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c2c) {
            ctx->pc = 0x124C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124C2Cu;
            // 0x124c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124C4Cu;
            return;
        }
    }
    ctx->pc = 0x124C34u;
    // 0x124c34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x124c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x124c38: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x124c3c: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x124c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x124c40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x124C40u;
    {
        const bool branch_taken_0x124c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124c40) {
            ctx->pc = 0x124C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124C40u;
            // 0x124c44: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124C58u;
            return;
        }
    }
    ctx->pc = 0x124C48u;
    // 0x124c48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x124c4cu;
}
