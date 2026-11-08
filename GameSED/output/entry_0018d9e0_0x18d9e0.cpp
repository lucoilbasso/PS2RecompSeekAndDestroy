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

// Function: entry_0018d9e0
// Address: 0x18d9e0 - 0x18d9f8
void entry_0018d9e0_0x18d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9e0_0x18d9e0");
#endif

    ctx->pc = 0x18d9e0u;

    // 0x18d9e0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x18d9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18d9e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D9E4u;
    {
        const bool branch_taken_0x18d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9e4) {
            ctx->pc = 0x18D9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D9E4u;
            // 0x18d9e8: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D9FCu;
            return;
        }
    }
    ctx->pc = 0x18D9ECu;
    // 0x18d9ec: 0x41503  sra         $v0, $a0, 20
    ctx->pc = 0x18d9ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 20));
    // 0x18d9f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d9f4: 0x2446fc90  addiu       $a2, $v0, -0x370
    ctx->pc = 0x18d9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966416));
    ctx->pc = 0x18d9f8u;
}
