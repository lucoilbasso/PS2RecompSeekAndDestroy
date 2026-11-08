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

// Function: entry_0015c2f0
// Address: 0x15c2f0 - 0x15c30c
void entry_0015c2f0_0x15c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c2f0_0x15c2f0");
#endif

    ctx->pc = 0x15c2f0u;

label_15c2f0:
    // 0x15c2f0: 0x24e7fff6  addiu       $a3, $a3, -0xA
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967286));
    // 0x15c2f4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15c2f8: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x15c2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c2fc: 0x0  nop
    ctx->pc = 0x15c2fcu;
    // NOP
    // 0x15c300: 0x0  nop
    ctx->pc = 0x15c300u;
    // NOP
    // 0x15c304: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C304u;
    {
        const bool branch_taken_0x15c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C304u;
        // 0x15c308: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c304) {
            ctx->pc = 0x15C2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c2f0;
        }
    }
    ctx->pc = 0x15C30Cu;
}
