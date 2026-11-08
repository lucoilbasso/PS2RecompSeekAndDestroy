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

// Function: entry_001a74c4
// Address: 0x1a74c4 - 0x1a74e8
void entry_001a74c4_0x1a74c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a74c4_0x1a74c4");
#endif

    ctx->pc = 0x1a74c4u;

    // 0x1a74c4: 0x56400016  bnel        $s2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A74C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A74C4u;
            // 0x1a74c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7520u;
            return;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a74d0: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A74D0u;
    {
        const bool branch_taken_0x1a74d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a74d0) {
            ctx->pc = 0x1A74D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A74D0u;
            // 0x1a74d4: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A74E8u;
            return;
        }
    }
    ctx->pc = 0x1A74D8u;
    // 0x1a74d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a74dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a74dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a74e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A74E0u;
    {
        const bool branch_taken_0x1a74e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74E0u;
        // 0x1a74e4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74e0) {
            ctx->pc = 0x1A751Cu;
            return;
        }
    }
    ctx->pc = 0x1A74E8u;
}
