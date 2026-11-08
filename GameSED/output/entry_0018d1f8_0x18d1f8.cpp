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

// Function: entry_0018d1f8
// Address: 0x18d1f8 - 0x18d218
void entry_0018d1f8_0x18d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d1f8_0x18d1f8");
#endif

    ctx->pc = 0x18d1f8u;

    // 0x18d1f8: 0x82660000  lb          $a2, 0x0($s3)
    ctx->pc = 0x18d1f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d1fc: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x18d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x18d200: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x18d200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x18d204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D204u;
    {
        const bool branch_taken_0x18d204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D204u;
        // 0x18d208: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d204) {
            ctx->pc = 0x18D218u;
            return;
        }
    }
    ctx->pc = 0x18D20Cu;
    // 0x18d20c: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x18D20Cu;
    {
        const bool branch_taken_0x18d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D20Cu;
        // 0x18d210: 0xa3c30002  sb          $v1, 0x2($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d20c) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D214u;
    // 0x18d214: 0x0  nop
    ctx->pc = 0x18d214u;
    // NOP
    ctx->pc = 0x18d218u;
}
