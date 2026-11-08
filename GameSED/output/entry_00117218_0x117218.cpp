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

// Function: entry_00117218
// Address: 0x117218 - 0x117238
void entry_00117218_0x117218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117218_0x117218");
#endif

    ctx->pc = 0x117218u;

    // 0x117218: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x117218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11721c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11721Cu;
    {
        const bool branch_taken_0x11721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11721Cu;
        // 0x117220: 0x2a420008  slti        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11721c) {
            ctx->pc = 0x117238u;
            return;
        }
    }
    ctx->pc = 0x117224u;
    // 0x117224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x117224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x117228: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x117228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11722c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x11722Cu;
    {
        const bool branch_taken_0x11722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11722Cu;
        // 0x117230: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11722c) {
            ctx->pc = 0x1171B8u;
            return;
        }
    }
    ctx->pc = 0x117234u;
    // 0x117234: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x117234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x117238u;
}
