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

// Function: entry_0013b888
// Address: 0x13b888 - 0x13b8b8
void entry_0013b888_0x13b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b888_0x13b888");
#endif

    ctx->pc = 0x13b888u;

    // 0x13b888: 0x56c0001c  bnel        $s6, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x13B888u;
    {
        const bool branch_taken_0x13b888 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b888) {
            ctx->pc = 0x13B88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B888u;
            // 0x13b88c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B8FCu;
            return;
        }
    }
    ctx->pc = 0x13B890u;
    // 0x13b890: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b894: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x13b898: 0x8e8401c8  lw          $a0, 0x1C8($s4)
    ctx->pc = 0x13b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x13b89c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x13b89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x13b8a0: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x13b8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13b8a4: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x13b8a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x13b8a8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x13b8ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13b8b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13B8B0u;
    {
        const bool branch_taken_0x13b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8B0u;
        // 0x13b8b4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8b0) {
            ctx->pc = 0x13B8FCu;
            return;
        }
    }
    ctx->pc = 0x13B8B8u;
}
