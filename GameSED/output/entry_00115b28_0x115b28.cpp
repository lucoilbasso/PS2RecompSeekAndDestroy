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

// Function: entry_00115b28
// Address: 0x115b28 - 0x115b60
void entry_00115b28_0x115b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115b28_0x115b28");
#endif

    ctx->pc = 0x115b28u;

label_115b28:
    // 0x115b28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115b2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x115b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x115b30: 0x0  nop
    ctx->pc = 0x115b30u;
    // NOP
    // 0x115b34: 0x0  nop
    ctx->pc = 0x115b34u;
    // NOP
    // 0x115b38: 0x0  nop
    ctx->pc = 0x115b38u;
    // NOP
    // 0x115b3c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115B3Cu;
    {
        const bool branch_taken_0x115b3c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B3Cu;
        // 0x115b40: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b3c) {
            ctx->pc = 0x115B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115b28;
        }
    }
    ctx->pc = 0x115B44u;
    // 0x115b44: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115b48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115b4c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x115b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115b50: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x115b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115b54: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x115b58: 0x2673c540  addiu       $s3, $s3, -0x3AC0
    ctx->pc = 0x115b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952256));
    // 0x115b5c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x115b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->pc = 0x115b60u;
}
