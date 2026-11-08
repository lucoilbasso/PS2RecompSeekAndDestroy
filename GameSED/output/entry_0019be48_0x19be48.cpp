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

// Function: entry_0019be48
// Address: 0x19be48 - 0x19be70
void entry_0019be48_0x19be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019be48_0x19be48");
#endif

    ctx->pc = 0x19be48u;

    // 0x19be48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be4c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19be4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19be50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BE50u;
    {
        const bool branch_taken_0x19be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE50u;
        // 0x19be54: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be50) {
            ctx->pc = 0x19BE70u;
            return;
        }
    }
    ctx->pc = 0x19BE58u;
    // 0x19be58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19be58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19be5c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19be60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19be60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19be64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19be64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BE68u;
    {
        const bool branch_taken_0x19be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE68u;
        // 0x19be6c: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be68) {
            ctx->pc = 0x19BE84u;
            return;
        }
    }
    ctx->pc = 0x19BE70u;
}
