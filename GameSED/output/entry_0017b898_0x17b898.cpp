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

// Function: entry_0017b898
// Address: 0x17b898 - 0x17b8a8
void entry_0017b898_0x17b898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b898_0x17b898");
#endif

    ctx->pc = 0x17b898u;

    // 0x17b898: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17b89c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x17b89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b8a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17B8A0u;
    {
        const bool branch_taken_0x17b8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A0u;
        // 0x17b8a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8a0) {
            ctx->pc = 0x17B878u;
            return;
        }
    }
    ctx->pc = 0x17B8A8u;
}
