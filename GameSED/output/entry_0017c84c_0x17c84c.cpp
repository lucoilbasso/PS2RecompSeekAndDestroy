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

// Function: entry_0017c84c
// Address: 0x17c84c - 0x17c870
void entry_0017c84c_0x17c84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c84c_0x17c84c");
#endif

    ctx->pc = 0x17c84cu;

    // 0x17c84c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c850: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17c854: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x17c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17c858: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x17C858u;
    {
        const bool branch_taken_0x17c858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c858) {
            ctx->pc = 0x17C85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C858u;
            // 0x17c85c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8C8u;
            return;
        }
    }
    ctx->pc = 0x17C860u;
    // 0x17c860: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17c864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c868: 0x2443e9e0  addiu       $v1, $v0, -0x1620
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
    // 0x17c86c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x17c870u;
}
