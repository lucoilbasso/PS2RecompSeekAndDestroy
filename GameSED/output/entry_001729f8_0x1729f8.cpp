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

// Function: entry_001729f8
// Address: 0x1729f8 - 0x172a28
void entry_001729f8_0x1729f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001729f8_0x1729f8");
#endif

    ctx->pc = 0x1729f8u;

    // 0x1729f8: 0x1ac0000b  blez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1729F8u;
    {
        const bool branch_taken_0x1729f8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F8u;
        // 0x1729fc: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729f8) {
            ctx->pc = 0x172A28u;
            return;
        }
    }
    ctx->pc = 0x172A00u;
    // 0x172a00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a04: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172a08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172a10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172a14: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172a18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172a1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x172A1Cu;
    {
        const bool branch_taken_0x172a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A1Cu;
        // 0x172a20: 0x2451ffb0  addiu       $s1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a1c) {
            ctx->pc = 0x172A48u;
            return;
        }
    }
    ctx->pc = 0x172A24u;
    // 0x172a24: 0x0  nop
    ctx->pc = 0x172a24u;
    // NOP
    ctx->pc = 0x172a28u;
}
