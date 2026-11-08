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

// Function: entry_0018e498
// Address: 0x18e498 - 0x18e4b4
void entry_0018e498_0x18e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e498_0x18e498");
#endif

    ctx->pc = 0x18e498u;

label_18e498:
    // 0x18e498: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e49c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x18e4a0: 0x0  nop
    ctx->pc = 0x18e4a0u;
    // NOP
    // 0x18e4a4: 0x0  nop
    ctx->pc = 0x18e4a4u;
    // NOP
    // 0x18e4a8: 0x0  nop
    ctx->pc = 0x18e4a8u;
    // NOP
    // 0x18e4ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E4ACu;
    {
        const bool branch_taken_0x18e4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4ACu;
        // 0x18e4b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4ac) {
            ctx->pc = 0x18E498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e498;
        }
    }
    ctx->pc = 0x18E4B4u;
}
