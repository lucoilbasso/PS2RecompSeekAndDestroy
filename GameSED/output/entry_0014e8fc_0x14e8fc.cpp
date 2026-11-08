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

// Function: entry_0014e8fc
// Address: 0x14e8fc - 0x14e928
void entry_0014e8fc_0x14e8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e8fc_0x14e8fc");
#endif

    ctx->pc = 0x14e8fcu;

    // 0x14e8fc: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14e900: 0x2403fff1  addiu       $v1, $zero, -0xF
    ctx->pc = 0x14e900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x14e904: 0x26c2ffdd  addiu       $v0, $s6, -0x23
    ctx->pc = 0x14e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967261));
    // 0x14e908: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x14e908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e90c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14e90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14e910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E910u;
    {
        const bool branch_taken_0x14e910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E910u;
        // 0x14e914: 0xae240264  sw          $a0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e910) {
            ctx->pc = 0x14E928u;
            return;
        }
    }
    ctx->pc = 0x14E918u;
    // 0x14e918: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x14e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x14e91c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14E91Cu;
    {
        const bool branch_taken_0x14e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E91Cu;
        // 0x14e920: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e91c) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E924u;
    // 0x14e924: 0x0  nop
    ctx->pc = 0x14e924u;
    // NOP
    ctx->pc = 0x14e928u;
}
