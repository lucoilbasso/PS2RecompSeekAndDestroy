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

// Function: entry_001bf1bc
// Address: 0x1bf1bc - 0x1bf204
void entry_001bf1bc_0x1bf1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf1bc_0x1bf1bc");
#endif

    ctx->pc = 0x1bf1bcu;

    // 0x1bf1bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf1c0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x1bf1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bf1c4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1bf1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf1d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf1d8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bf1dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bf1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf1e0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1bf1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf1e4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1bf1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1bf1e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bf1f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf1f8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf1f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF1FCu;
    {
        const bool branch_taken_0x1bf1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1FCu;
        // 0x1bf200: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1fc) {
            ctx->pc = 0x1BF2C0u;
            return;
        }
    }
    ctx->pc = 0x1BF204u;
}
