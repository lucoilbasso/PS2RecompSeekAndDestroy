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

// Function: entry_001d6148
// Address: 0x1d6148 - 0x1d6168
void entry_001d6148_0x1d6148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6148_0x1d6148");
#endif

    ctx->pc = 0x1d6148u;

    // 0x1d6148: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d614c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6154: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1d6154u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d6158: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1d6158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1d615c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d615cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6160: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6160u;
    {
        const bool branch_taken_0x1d6160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6160u;
        // 0x1d6164: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6160) {
            ctx->pc = 0x1D6188u;
            return;
        }
    }
    ctx->pc = 0x1D6168u;
}
