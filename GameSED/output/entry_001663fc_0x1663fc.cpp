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

// Function: entry_001663fc
// Address: 0x1663fc - 0x166430
void entry_001663fc_0x1663fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001663fc_0x1663fc");
#endif

    ctx->pc = 0x1663fcu;

    // 0x1663fc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x166400: 0x26461258  addiu       $a2, $s2, 0x1258
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4696));
    // 0x166404: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x166404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16640c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166410: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x166410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x166414: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x166414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x166418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16641c: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x16641Cu;
    {
        const bool branch_taken_0x16641c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16641Cu;
        // 0x166420: 0xae431260  sw          $v1, 0x1260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16641c) {
            ctx->pc = 0x16659Cu;
            return;
        }
    }
    ctx->pc = 0x166424u;
    // 0x166424: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16642c: 0x0  nop
    ctx->pc = 0x16642cu;
    // NOP
    ctx->pc = 0x166430u;
}
