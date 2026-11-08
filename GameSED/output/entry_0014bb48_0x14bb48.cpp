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

// Function: entry_0014bb48
// Address: 0x14bb48 - 0x14bb64
void entry_0014bb48_0x14bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bb48_0x14bb48");
#endif

    ctx->pc = 0x14bb48u;

    // 0x14bb48: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14BB48u;
    {
        const bool branch_taken_0x14bb48 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB48u;
        // 0x14bb4c: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb48) {
            ctx->pc = 0x14BBA0u;
            return;
        }
    }
    ctx->pc = 0x14BB50u;
    // 0x14bb50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14bb50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bb54: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BB54u;
    {
        const bool branch_taken_0x14bb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bb54) {
            ctx->pc = 0x14BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB54u;
            // 0x14bb58: 0xae700250  sw          $s0, 0x250($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BB64u;
            return;
        }
    }
    ctx->pc = 0x14BB5Cu;
    // 0x14bb5c: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x14bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x14bb60: 0xae620250  sw          $v0, 0x250($s3)
    ctx->pc = 0x14bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 2));
    ctx->pc = 0x14bb64u;
}
