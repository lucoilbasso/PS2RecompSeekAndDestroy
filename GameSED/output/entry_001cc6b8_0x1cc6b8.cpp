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

// Function: entry_001cc6b8
// Address: 0x1cc6b8 - 0x1cc6e0
void entry_001cc6b8_0x1cc6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc6b8_0x1cc6b8");
#endif

    ctx->pc = 0x1cc6b8u;

    // 0x1cc6b8: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC6B8u;
    {
        const bool branch_taken_0x1cc6b8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B8u;
        // 0x1cc6bc: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6b8) {
            ctx->pc = 0x1CC6E0u;
            return;
        }
    }
    ctx->pc = 0x1CC6C0u;
    // 0x1cc6c0: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC6C0u;
    {
        const bool branch_taken_0x1cc6c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6C0u;
        // 0x1cc6c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6c0) {
            ctx->pc = 0x1CC6ECu;
            return;
        }
    }
    ctx->pc = 0x1CC6C8u;
    // 0x1cc6c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cc6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc6cc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1cc6ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6d0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cc6d4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1cc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1cc6d8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1CC6D8u;
    {
        const bool branch_taken_0x1cc6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6D8u;
        // 0x1cc6dc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6d8) {
            ctx->pc = 0x1CC8B0u;
            return;
        }
    }
    ctx->pc = 0x1CC6E0u;
}
