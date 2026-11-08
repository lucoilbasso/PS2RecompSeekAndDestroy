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

// Function: entry_00115d34
// Address: 0x115d34 - 0x115d60
void entry_00115d34_0x115d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115d34_0x115d34");
#endif

    ctx->pc = 0x115d34u;

    // 0x115d34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x115d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x115d38: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x115d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x115d3c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x115D3Cu;
    {
        const bool branch_taken_0x115d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D3Cu;
        // 0x115d40: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d3c) {
            ctx->pc = 0x115C60u;
            return;
        }
    }
    ctx->pc = 0x115D44u;
    // 0x115d44: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115d48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x115d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115d4c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x115d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115d50: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x115d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115d54: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x115d54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x115d58: 0x2652c540  addiu       $s2, $s2, -0x3AC0
    ctx->pc = 0x115d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952256));
    // 0x115d5c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x115d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x115d60u;
}
