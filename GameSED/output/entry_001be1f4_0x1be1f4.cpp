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

// Function: entry_001be1f4
// Address: 0x1be1f4 - 0x1be238
void entry_001be1f4_0x1be1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be1f4_0x1be1f4");
#endif

    ctx->pc = 0x1be1f4u;

    // 0x1be1f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1be1f8: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1be1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1be1fc: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1be1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1be200: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1be200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1be204: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1be204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1be208: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be208u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1be20c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1be20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1be210: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1be210u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x1be214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1be218: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1be218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1be21c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1be220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be224: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1be228u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1be22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be230: 0x8071142  j           func_1C4508
    ctx->pc = 0x1BE230u;
    ctx->pc = 0x1BE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE230u;
    // 0x1be234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4508u;
    sceIpuSync_0x1c4508(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE238u;
}
