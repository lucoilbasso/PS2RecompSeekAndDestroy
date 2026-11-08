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

// Function: caseD_63
// Address: 0x19b300 - 0x19b320
void caseD_63_0x19b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_63_0x19b300");
#endif

    ctx->pc = 0x19b300u;

    // 0x19b300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b304: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b308: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x19b308u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b30c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x19b30cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b314: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x19B314u;
    {
        const bool branch_taken_0x19b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B314u;
        // 0x19b318: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b314) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B31Cu;
    // 0x19b31c: 0x0  nop
    ctx->pc = 0x19b31cu;
    // NOP
    ctx->pc = 0x19b320u;
}
