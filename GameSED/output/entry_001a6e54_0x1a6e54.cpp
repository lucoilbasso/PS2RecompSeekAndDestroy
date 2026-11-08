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

// Function: entry_001a6e54
// Address: 0x1a6e54 - 0x1a6e78
void entry_001a6e54_0x1a6e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6e54_0x1a6e54");
#endif

    ctx->pc = 0x1a6e54u;

    // 0x1a6e54: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6E54u;
    {
        const bool branch_taken_0x1a6e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E54u;
        // 0x1a6e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e54) {
            ctx->pc = 0x1A6EB0u;
            return;
        }
    }
    ctx->pc = 0x1A6E5Cu;
    // 0x1a6e5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6e60: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6E60u;
    {
        const bool branch_taken_0x1a6e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6e60) {
            ctx->pc = 0x1A6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6E60u;
            // 0x1a6e64: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6E78u;
            return;
        }
    }
    ctx->pc = 0x1A6E68u;
    // 0x1a6e68: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a6e6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6e70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A6E70u;
    {
        const bool branch_taken_0x1a6e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E70u;
        // 0x1a6e74: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e70) {
            ctx->pc = 0x1A6EB0u;
            return;
        }
    }
    ctx->pc = 0x1A6E78u;
}
