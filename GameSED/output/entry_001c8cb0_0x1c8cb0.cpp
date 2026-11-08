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

// Function: entry_001c8cb0
// Address: 0x1c8cb0 - 0x1c8cd0
void entry_001c8cb0_0x1c8cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8cb0_0x1c8cb0");
#endif

    ctx->pc = 0x1c8cb0u;

    // 0x1c8cb0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8cb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8CB4u;
    {
        const bool branch_taken_0x1c8cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CB4u;
        // 0x1c8cb8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cb4) {
            ctx->pc = 0x1C8CD0u;
            return;
        }
    }
    ctx->pc = 0x1C8CBCu;
    // 0x1c8cbc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c8cc0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8cc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8CC4u;
    {
        const bool branch_taken_0x1c8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CC4u;
        // 0x1c8cc8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cc4) {
            ctx->pc = 0x1C8CE4u;
            return;
        }
    }
    ctx->pc = 0x1C8CCCu;
    // 0x1c8ccc: 0x0  nop
    ctx->pc = 0x1c8cccu;
    // NOP
    ctx->pc = 0x1c8cd0u;
}
