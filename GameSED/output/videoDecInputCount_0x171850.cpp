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

// Function: videoDecInputCount
// Address: 0x171850 - 0x171868
void videoDecInputCount_0x171850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecInputCount_0x171850");
#endif

    ctx->pc = 0x171850u;

    // 0x171850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171854: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x171858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17185c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171860: 0x805d6c0  j           func_175B00
    ctx->pc = 0x171860u;
    ctx->pc = 0x171864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171860u;
    // 0x171864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175B00u;
    viBufCount_0x175b00(rdram, ctx, runtime); return;
    ctx->pc = 0x171868u;
}
