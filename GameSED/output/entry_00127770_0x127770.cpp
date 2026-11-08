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

// Function: entry_00127770
// Address: 0x127770 - 0x127790
void entry_00127770_0x127770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127770_0x127770");
#endif

    ctx->pc = 0x127770u;

label_127770:
    // 0x127770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x127774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x127778: 0x0  nop
    ctx->pc = 0x127778u;
    // NOP
    // 0x12777c: 0x0  nop
    ctx->pc = 0x12777cu;
    // NOP
    // 0x127780: 0x0  nop
    ctx->pc = 0x127780u;
    // NOP
    // 0x127784: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127784u;
    {
        const bool branch_taken_0x127784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127784) {
            ctx->pc = 0x127770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127770;
        }
    }
    ctx->pc = 0x12778Cu;
    // 0x12778c: 0x0  nop
    ctx->pc = 0x12778cu;
    // NOP
    ctx->pc = 0x127790u;
}
