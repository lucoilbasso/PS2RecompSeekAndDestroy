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

// Function: entry_00127898
// Address: 0x127898 - 0x1278b8
void entry_00127898_0x127898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127898_0x127898");
#endif

    ctx->pc = 0x127898u;

label_127898:
    // 0x127898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12789c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1278a0: 0x0  nop
    ctx->pc = 0x1278a0u;
    // NOP
    // 0x1278a4: 0x0  nop
    ctx->pc = 0x1278a4u;
    // NOP
    // 0x1278a8: 0x0  nop
    ctx->pc = 0x1278a8u;
    // NOP
    // 0x1278ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1278ACu;
    {
        const bool branch_taken_0x1278ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1278ac) {
            ctx->pc = 0x127898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127898;
        }
    }
    ctx->pc = 0x1278B4u;
    // 0x1278b4: 0x0  nop
    ctx->pc = 0x1278b4u;
    // NOP
    ctx->pc = 0x1278b8u;
}
