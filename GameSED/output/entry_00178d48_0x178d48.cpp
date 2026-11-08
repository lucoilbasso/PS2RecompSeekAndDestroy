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

// Function: entry_00178d48
// Address: 0x178d48 - 0x178d60
void entry_00178d48_0x178d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d48_0x178d48");
#endif

    ctx->pc = 0x178d48u;

    // 0x178d48: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178D48u;
    {
        const bool branch_taken_0x178d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x178d48) {
            ctx->pc = 0x178D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D48u;
            // 0x178d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D70u;
            return;
        }
    }
    ctx->pc = 0x178D50u;
    // 0x178d50: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D50u;
    {
        const bool branch_taken_0x178d50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D50u;
        // 0x178d54: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d50) {
            ctx->pc = 0x178D60u;
            return;
        }
    }
    ctx->pc = 0x178D58u;
    // 0x178d58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178D58u;
    {
        const bool branch_taken_0x178d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D58u;
        // 0x178d5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d58) {
            ctx->pc = 0x178D64u;
            return;
        }
    }
    ctx->pc = 0x178D60u;
}
