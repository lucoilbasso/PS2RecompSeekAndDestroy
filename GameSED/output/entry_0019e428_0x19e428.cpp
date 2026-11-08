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

// Function: entry_0019e428
// Address: 0x19e428 - 0x19e44c
void entry_0019e428_0x19e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e428_0x19e428");
#endif

    ctx->pc = 0x19e428u;

    // 0x19e428: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x19e428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x19e42c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E42Cu;
    {
        const bool branch_taken_0x19e42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e42c) {
            ctx->pc = 0x19E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E42Cu;
            // 0x19e430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E450u;
            return;
        }
    }
    ctx->pc = 0x19E434u;
    // 0x19e434: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e438: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19e43c: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e43cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e440: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x19e44cu;
}
