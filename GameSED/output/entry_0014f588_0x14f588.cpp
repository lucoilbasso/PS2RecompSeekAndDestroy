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

// Function: entry_0014f588
// Address: 0x14f588 - 0x14f5bc
void entry_0014f588_0x14f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f588_0x14f588");
#endif

    ctx->pc = 0x14f588u;

    // 0x14f588: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14f58c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f590: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F590u;
    {
        const bool branch_taken_0x14f590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F590u;
        // 0x14f594: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f590) {
            ctx->pc = 0x14F5BCu;
            return;
        }
    }
    ctx->pc = 0x14F598u;
    // 0x14f598: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f59c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14f5a0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14F5A0u;
    {
        const bool branch_taken_0x14f5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f5a0) {
            ctx->pc = 0x14F5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F5A0u;
            // 0x14f5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5CCu;
            return;
        }
    }
    ctx->pc = 0x14F5A8u;
    // 0x14f5a8: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f5ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f5b0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14f5b0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14f5b4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f5b8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x14f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x14f5bcu;
}
