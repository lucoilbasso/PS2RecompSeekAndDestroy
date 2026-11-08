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

// Function: entry_0014f94c
// Address: 0x14f94c - 0x14f958
void entry_0014f94c_0x14f94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f94c_0x14f94c");
#endif

    ctx->pc = 0x14f94cu;

    // 0x14f94c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14f950: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F950u;
    {
        const bool branch_taken_0x14f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f950) {
            ctx->pc = 0x14F954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F950u;
            // 0x14f954: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F958u;
            return;
        }
    }
    ctx->pc = 0x14F958u;
}
