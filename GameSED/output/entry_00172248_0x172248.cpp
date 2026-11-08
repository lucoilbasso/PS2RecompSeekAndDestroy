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

// Function: entry_00172248
// Address: 0x172248 - 0x172270
void entry_00172248_0x172248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172248_0x172248");
#endif

    ctx->pc = 0x172248u;

    // 0x172248: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x172248u;
    {
        const bool branch_taken_0x172248 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172248u;
        // 0x17224c: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172248) {
            ctx->pc = 0x172270u;
            return;
        }
    }
    ctx->pc = 0x172250u;
    // 0x172250: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x172254: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17225c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172260: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x172264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172264u;
    {
        const bool branch_taken_0x172264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172264u;
        // 0x172268: 0x2451ffb0  addiu       $s1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172264) {
            ctx->pc = 0x172288u;
            return;
        }
    }
    ctx->pc = 0x17226Cu;
    // 0x17226c: 0x0  nop
    ctx->pc = 0x17226cu;
    // NOP
    ctx->pc = 0x172270u;
}
