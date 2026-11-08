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

// Function: entry_00114454
// Address: 0x114454 - 0x114490
void entry_00114454_0x114454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114454_0x114454");
#endif

    ctx->pc = 0x114454u;

    // 0x114454: 0x24021268  addiu       $v0, $zero, 0x1268
    ctx->pc = 0x114454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x114458: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x114458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11445c: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x11445cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x114460: 0x9464c058  lhu         $a0, -0x3FA8($v1)
    ctx->pc = 0x114460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294951000)));
    // 0x114464: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x114464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114468: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x114468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x11446c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11446cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x114470: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x114474: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x114474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x114478: 0x94c6d172  lhu         $a2, -0x2E8E($a2)
    ctx->pc = 0x114478u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294955378)));
    // 0x11447c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11447Cu;
    {
        const bool branch_taken_0x11447c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x114480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11447Cu;
        // 0x114480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11447c) {
            ctx->pc = 0x114490u;
            return;
        }
    }
    ctx->pc = 0x114484u;
    // 0x114484: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114484u;
    {
        const bool branch_taken_0x114484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114484u;
        // 0x114488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114484) {
            ctx->pc = 0x1144C4u;
            return;
        }
    }
    ctx->pc = 0x11448Cu;
    // 0x11448c: 0x0  nop
    ctx->pc = 0x11448cu;
    // NOP
    ctx->pc = 0x114490u;
}
