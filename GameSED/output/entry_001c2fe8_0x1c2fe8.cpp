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

// Function: entry_001c2fe8
// Address: 0x1c2fe8 - 0x1c3004
void entry_001c2fe8_0x1c2fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2fe8_0x1c2fe8");
#endif

    ctx->pc = 0x1c2fe8u;

    // 0x1c2fe8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1c2fec: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x1c2fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1c2ff0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2FF0u;
    {
        const bool branch_taken_0x1c2ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FF0u;
        // 0x1c2ff4: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ff0) {
            ctx->pc = 0x1C3004u;
            return;
        }
    }
    ctx->pc = 0x1C2FF8u;
    // 0x1c2ff8: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1c2ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1c2ffc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2FFCu;
    {
        const bool branch_taken_0x1c2ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FFCu;
        // 0x1c3000: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ffc) {
            ctx->pc = 0x1C3008u;
            return;
        }
    }
    ctx->pc = 0x1C3004u;
}
