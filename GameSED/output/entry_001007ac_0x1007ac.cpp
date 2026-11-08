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

// Function: entry_001007ac
// Address: 0x1007ac - 0x1007c8
void entry_001007ac_0x1007ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007ac_0x1007ac");
#endif

    ctx->pc = 0x1007acu;

    // 0x1007ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1007acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1007b0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1007b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1007b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1007b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1007b8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1007b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1007bc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1007bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1007c0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1007C0u;
    {
        const bool branch_taken_0x1007c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007C0u;
        // 0x1007c4: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007c0) {
            ctx->pc = 0x100760u;
            return;
        }
    }
    ctx->pc = 0x1007C8u;
}
