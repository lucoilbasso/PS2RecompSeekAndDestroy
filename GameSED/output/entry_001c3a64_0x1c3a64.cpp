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

// Function: entry_001c3a64
// Address: 0x1c3a64 - 0x1c3ac8
void entry_001c3a64_0x1c3a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3a64_0x1c3a64");
#endif

    ctx->pc = 0x1c3a64u;

    // 0x1c3a64: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1c3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c3a68: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3A68u;
    {
        const bool branch_taken_0x1c3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A68u;
        // 0x1c3a6c: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a68) {
            ctx->pc = 0x1C3AC8u;
            return;
        }
    }
    ctx->pc = 0x1C3A70u;
    // 0x1c3a70: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1c3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c3a74: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3a78: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c3a7c: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1c3a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x1c3a80: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x1c3a84: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x1c3a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1c3a88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c3a8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3a90: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3a94: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x1c3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x1c3a98: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1c3a98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3a9c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1c3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1c3aa0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1c3aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1c3aa4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1c3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c3aa8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1c3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c3aac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3ab0: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x1c3ab0u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2));
    // 0x1c3ab4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3ab8: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x1c3ab8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8));
    // 0x1c3abc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c3ac0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c3ac4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1c3ac8u;
}
