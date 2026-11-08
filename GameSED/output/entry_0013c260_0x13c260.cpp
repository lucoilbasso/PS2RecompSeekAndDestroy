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

// Function: entry_0013c260
// Address: 0x13c260 - 0x13c280
void entry_0013c260_0x13c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c260_0x13c260");
#endif

    ctx->pc = 0x13c260u;

    // 0x13c260: 0x8ce301e0  lw          $v1, 0x1E0($a3)
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x13c264: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x13c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x13c268: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13c26c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13c270: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13c270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13c274: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C274u;
    {
        const bool branch_taken_0x13c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C274u;
        // 0x13c278: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c274) {
            ctx->pc = 0x13C290u;
            return;
        }
    }
    ctx->pc = 0x13C27Cu;
    // 0x13c27c: 0x0  nop
    ctx->pc = 0x13c27cu;
    // NOP
    ctx->pc = 0x13c280u;
}
