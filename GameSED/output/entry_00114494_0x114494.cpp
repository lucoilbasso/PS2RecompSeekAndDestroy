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

// Function: entry_00114494
// Address: 0x114494 - 0x1144c0
void entry_00114494_0x114494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114494_0x114494");
#endif

    ctx->pc = 0x114494u;

label_114494:
    // 0x114494: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x114494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x114498: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x114498u;
    {
        const bool branch_taken_0x114498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114498u;
        // 0x11449c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114498) {
            ctx->pc = 0x1144C4u;
            return;
        }
    }
    ctx->pc = 0x1144A0u;
    // 0x1144a0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1144a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1144a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1144a8: 0x9442c058  lhu         $v0, -0x3FA8($v0)
    ctx->pc = 0x1144a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951000)));
    // 0x1144ac: 0x0  nop
    ctx->pc = 0x1144acu;
    // NOP
    // 0x1144b0: 0x0  nop
    ctx->pc = 0x1144b0u;
    // NOP
    // 0x1144b4: 0x0  nop
    ctx->pc = 0x1144b4u;
    // NOP
    // 0x1144b8: 0x5446fff6  bnel        $v0, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1144B8u;
    {
        const bool branch_taken_0x1144b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1144b8) {
            ctx->pc = 0x1144BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1144B8u;
            // 0x1144bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114494;
        }
    }
    ctx->pc = 0x1144C0u;
}
