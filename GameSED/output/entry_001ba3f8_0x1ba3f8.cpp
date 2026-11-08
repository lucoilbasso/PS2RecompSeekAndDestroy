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

// Function: entry_001ba3f8
// Address: 0x1ba3f8 - 0x1ba418
void entry_001ba3f8_0x1ba3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba3f8_0x1ba3f8");
#endif

    ctx->pc = 0x1ba3f8u;

    // 0x1ba3f8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1ba3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba3fc: 0x26a4d700  addiu       $a0, $s5, -0x2900
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956800));
    // 0x1ba400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba404: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ba408: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA408u;
    {
        const bool branch_taken_0x1ba408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA408u;
        // 0x1ba40c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba408) {
            ctx->pc = 0x1BA43Cu;
            return;
        }
    }
    ctx->pc = 0x1BA410u;
    // 0x1ba410: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1ba414: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1ba418u;
}
