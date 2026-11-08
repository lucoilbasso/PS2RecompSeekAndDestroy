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

// Function: entry_001ad954
// Address: 0x1ad954 - 0x1ad964
void entry_001ad954_0x1ad954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad954_0x1ad954");
#endif

    ctx->pc = 0x1ad954u;

    // 0x1ad954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD954u;
    {
        const bool branch_taken_0x1ad954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD954u;
        // 0x1ad958: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad954) {
            ctx->pc = 0x1AD964u;
            return;
        }
    }
    ctx->pc = 0x1AD95Cu;
    // 0x1ad95c: 0x14a0ff8e  bnez        $a1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x1AD95Cu;
    {
        const bool branch_taken_0x1ad95c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD95Cu;
        // 0x1ad960: 0x21200  sll         $v0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad95c) {
            ctx->pc = 0x1AD798u;
            return;
        }
    }
    ctx->pc = 0x1AD964u;
}
