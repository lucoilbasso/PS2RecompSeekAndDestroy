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

// Function: entry_0015c6cc
// Address: 0x15c6cc - 0x15c700
void entry_0015c6cc_0x15c6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c6cc_0x15c6cc");
#endif

    ctx->pc = 0x15c6ccu;

    // 0x15c6cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15c6d0: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15C6D0u;
    {
        const bool branch_taken_0x15c6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c6d0) {
            ctx->pc = 0x15C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C6D0u;
            // 0x15c6d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C778u;
            return;
        }
    }
    ctx->pc = 0x15C6D8u;
    // 0x15c6d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c6dc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x15C6DCu;
    {
        const bool branch_taken_0x15c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6DCu;
        // 0x15c6e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6dc) {
            ctx->pc = 0x15C774u;
            return;
        }
    }
    ctx->pc = 0x15C6E4u;
    // 0x15c6e4: 0x28a203e8  slti        $v0, $a1, 0x3E8
    ctx->pc = 0x15c6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x15c6e8: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x15c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15c6ec: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x15c6ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x15c6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6f4: 0x28a20064  slti        $v0, $a1, 0x64
    ctx->pc = 0x15c6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x15c6f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15C6F8u;
    {
        const bool branch_taken_0x15c6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6F8u;
        // 0x15c6fc: 0xae05001c  sw          $a1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6f8) {
            ctx->pc = 0x15C71Cu;
            return;
        }
    }
    ctx->pc = 0x15C700u;
}
