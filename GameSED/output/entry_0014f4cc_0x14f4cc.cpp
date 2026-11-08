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

// Function: entry_0014f4cc
// Address: 0x14f4cc - 0x14f4f8
void entry_0014f4cc_0x14f4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4cc_0x14f4cc");
#endif

    ctx->pc = 0x14f4ccu;

    // 0x14f4cc: 0x2624075c  addiu       $a0, $s1, 0x75C
    ctx->pc = 0x14f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
    // 0x14f4d0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14f4d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F4D4u;
    {
        const bool branch_taken_0x14f4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4D4u;
        // 0x14f4d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4d4) {
            ctx->pc = 0x14F4F8u;
            return;
        }
    }
    ctx->pc = 0x14F4DCu;
    // 0x14f4dc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14F4DCu;
    {
        const bool branch_taken_0x14f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4DCu;
        // 0x14f4e0: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4dc) {
            ctx->pc = 0x14F5C8u;
            return;
        }
    }
    ctx->pc = 0x14F4E4u;
    // 0x14f4e4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f4e8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f4ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f4f0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x14F4F0u;
    {
        const bool branch_taken_0x14f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F0u;
        // 0x14f4f4: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f0) {
            ctx->pc = 0x14F5C8u;
            return;
        }
    }
    ctx->pc = 0x14F4F8u;
}
