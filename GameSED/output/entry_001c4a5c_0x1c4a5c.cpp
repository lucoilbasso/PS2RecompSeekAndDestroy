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

// Function: entry_001c4a5c
// Address: 0x1c4a5c - 0x1c4a78
void entry_001c4a5c_0x1c4a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a5c_0x1c4a5c");
#endif

    ctx->pc = 0x1c4a5cu;

    // 0x1c4a5c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4A5Cu;
    {
        const bool branch_taken_0x1c4a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A5Cu;
        // 0x1c4a60: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a5c) {
            ctx->pc = 0x1C4A78u;
            return;
        }
    }
    ctx->pc = 0x1C4A64u;
    // 0x1c4a64: 0x340281a0  ori         $v0, $zero, 0x81A0
    ctx->pc = 0x1c4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33184);
    // 0x1c4a68: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4A68u;
    {
        const bool branch_taken_0x1c4a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A68u;
        // 0x1c4a6c: 0x340281b0  ori         $v0, $zero, 0x81B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33200);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a68) {
            ctx->pc = 0x1C4A78u;
            return;
        }
    }
    ctx->pc = 0x1C4A70u;
    // 0x1c4a70: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4A70u;
    {
        const bool branch_taken_0x1c4a70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A70u;
        // 0x1c4a74: 0x34028140  ori         $v0, $zero, 0x8140 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33088);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a70) {
            ctx->pc = 0x1C4AA8u;
            return;
        }
    }
    ctx->pc = 0x1C4A78u;
}
