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

// Function: entry_0016c20c
// Address: 0x16c20c - 0x16c238
void entry_0016c20c_0x16c20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c20c_0x16c20c");
#endif

    ctx->pc = 0x16c20cu;

    // 0x16c20c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c210: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x16c214: 0xae2401e0  sw          $a0, 0x1E0($s1)
    ctx->pc = 0x16c214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 4));
    // 0x16c218: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16c21c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16c220: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c228: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16c22c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x16C22Cu;
    {
        const bool branch_taken_0x16c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C22Cu;
        // 0x16c230: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c22c) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C234u;
    // 0x16c234: 0x0  nop
    ctx->pc = 0x16c234u;
    // NOP
    ctx->pc = 0x16c238u;
}
