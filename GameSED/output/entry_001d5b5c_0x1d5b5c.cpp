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

// Function: entry_001d5b5c
// Address: 0x1d5b5c - 0x1d5b80
void entry_001d5b5c_0x1d5b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b5c_0x1d5b5c");
#endif

    ctx->pc = 0x1d5b5cu;

    // 0x1d5b5c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d5b60: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1d5b64: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x1d5b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1d5b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5b6c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5B6Cu;
    {
        const bool branch_taken_0x1d5b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B6Cu;
        // 0x1d5b70: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b6c) {
            ctx->pc = 0x1D5BB8u;
            return;
        }
    }
    ctx->pc = 0x1D5B74u;
    // 0x1d5b74: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d5b78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d5b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b7c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x1d5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x1d5b80u;
}
