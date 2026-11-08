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

// Function: entry_001bd5b0
// Address: 0x1bd5b0 - 0x1bd5d0
void entry_001bd5b0_0x1bd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd5b0_0x1bd5b0");
#endif

    ctx->pc = 0x1bd5b0u;

    // 0x1bd5b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1bd5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1bd5b4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1bd5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1bd5b8: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1bd5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1bd5bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bd5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bd5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd5c4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bd5c4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1bd5c8: 0x8071176  j           func_1C45D8
    ctx->pc = 0x1BD5C8u;
    ctx->pc = 0x1BD5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5C8u;
    // 0x1bd5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C45D8u;
    sceIpuInit_0x1c45d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BD5D0u;
}
