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

// Function: entry_001c9e90
// Address: 0x1c9e90 - 0x1c9ec0
void entry_001c9e90_0x1c9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9e90_0x1c9e90");
#endif

    ctx->pc = 0x1c9e90u;

    // 0x1c9e90: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9e94: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C9E94u;
    {
        const bool branch_taken_0x1c9e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E94u;
        // 0x1c9e98: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e94) {
            ctx->pc = 0x1C9F28u;
            return;
        }
    }
    ctx->pc = 0x1C9E9Cu;
    // 0x1c9e9c: 0x12a182f  dsubu       $v1, $t1, $t2
    ctx->pc = 0x1c9e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x1c9ea0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1c9ea0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1c9ea4: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9EA4u;
    {
        const bool branch_taken_0x1c9ea4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c9ea4) {
            ctx->pc = 0x1C9EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9EA4u;
            // 0x1c9ea8: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9EC0u;
            return;
        }
    }
    ctx->pc = 0x1C9EACu;
    // 0x1c9eac: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1c9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1c9eb0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1c9eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1c9eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9EB4u;
    {
        const bool branch_taken_0x1c9eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EB4u;
        // 0x1c9eb8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eb4) {
            ctx->pc = 0x1C9ED0u;
            return;
        }
    }
    ctx->pc = 0x1C9EBCu;
    // 0x1c9ebc: 0x0  nop
    ctx->pc = 0x1c9ebcu;
    // NOP
    ctx->pc = 0x1c9ec0u;
}
