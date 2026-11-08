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

// Function: entry_0014e928
// Address: 0x14e928 - 0x14e948
void entry_0014e928_0x14e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e928_0x14e928");
#endif

    ctx->pc = 0x14e928u;

    // 0x14e928: 0x26c2ffd8  addiu       $v0, $s6, -0x28
    ctx->pc = 0x14e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967256));
    // 0x14e92c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14e92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14e930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E930u;
    {
        const bool branch_taken_0x14e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E930u;
        // 0x14e934: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e930) {
            ctx->pc = 0x14E948u;
            return;
        }
    }
    ctx->pc = 0x14E938u;
    // 0x14e938: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x14e938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x14e93c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14E93Cu;
    {
        const bool branch_taken_0x14e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E93Cu;
        // 0x14e940: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e93c) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E944u;
    // 0x14e944: 0x0  nop
    ctx->pc = 0x14e944u;
    // NOP
    ctx->pc = 0x14e948u;
}
