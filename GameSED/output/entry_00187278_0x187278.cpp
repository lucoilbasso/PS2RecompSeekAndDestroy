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

// Function: entry_00187278
// Address: 0x187278 - 0x1872a0
void entry_00187278_0x187278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187278_0x187278");
#endif

    ctx->pc = 0x187278u;

    // 0x187278: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x18727c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187284: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x187288: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x187288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18728c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x18728cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x187290: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x187294: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x187294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x187298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187298u;
    {
        const bool branch_taken_0x187298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187298u;
        // 0x18729c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187298) {
            ctx->pc = 0x1872A8u;
            return;
        }
    }
    ctx->pc = 0x1872A0u;
}
