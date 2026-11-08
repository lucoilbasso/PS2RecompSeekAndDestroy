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

// Function: entry_0019e3c0
// Address: 0x19e3c0 - 0x19e3e8
void entry_0019e3c0_0x19e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e3c0_0x19e3c0");
#endif

    ctx->pc = 0x19e3c0u;

    // 0x19e3c0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x19e3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x19e3c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E3C4u;
    {
        const bool branch_taken_0x19e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3c4) {
            ctx->pc = 0x19E3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E3C4u;
            // 0x19e3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E3E8u;
            return;
        }
    }
    ctx->pc = 0x19E3CCu;
    // 0x19e3cc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19e3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e3d0: 0x1231023  subu        $v0, $t1, $v1
    ctx->pc = 0x19e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x19e3d4: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e3d4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e3d8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e3dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e3e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e3e4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x19e3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19e3e8u;
}
