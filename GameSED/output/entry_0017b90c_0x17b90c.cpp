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

// Function: entry_0017b90c
// Address: 0x17b90c - 0x17b948
void entry_0017b90c_0x17b90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b90c_0x17b90c");
#endif

    ctx->pc = 0x17b90cu;

    // 0x17b90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b914: 0x2ca6000c  sltiu       $a2, $a1, 0xC
    ctx->pc = 0x17b914u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b918: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B918u;
    {
        const bool branch_taken_0x17b918 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B918u;
        // 0x17b91c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b918) {
            ctx->pc = 0x17B95Cu;
            return;
        }
    }
    ctx->pc = 0x17B920u;
    // 0x17b920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b924: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b928: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B928u;
    {
        const bool branch_taken_0x17b928 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B928u;
        // 0x17b92c: 0x245001a0  addiu       $s0, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b928) {
            ctx->pc = 0x17B948u;
            return;
        }
    }
    ctx->pc = 0x17B930u;
    // 0x17b930: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17b934: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x17b934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17b938: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17b93c: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x17b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
    // 0x17b940: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B940u;
    SET_GPR_U32(ctx, 31, 0x17B948u);
    ctx->pc = 0x17B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B940u;
    // 0x17b944: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B940u, 0x17B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B948u;
}
