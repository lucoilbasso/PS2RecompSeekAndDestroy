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

// Function: entry_0015c730
// Address: 0x15c730 - 0x15c74c
void entry_0015c730_0x15c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c730_0x15c730");
#endif

    ctx->pc = 0x15c730u;

label_15c730:
    // 0x15c730: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x15c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x15c734: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15c738: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x15c738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c73c: 0x0  nop
    ctx->pc = 0x15c73cu;
    // NOP
    // 0x15c740: 0x0  nop
    ctx->pc = 0x15c740u;
    // NOP
    // 0x15c744: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C744u;
    {
        const bool branch_taken_0x15c744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C744u;
        // 0x15c748: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c744) {
            ctx->pc = 0x15C730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c730;
        }
    }
    ctx->pc = 0x15C74Cu;
}
