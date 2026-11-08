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

// Function: entry_0019de70
// Address: 0x19de70 - 0x19dec8
void entry_0019de70_0x19de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de70_0x19de70");
#endif

    ctx->pc = 0x19de70u;

    // 0x19de70: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x19DE70u;
    {
        const bool branch_taken_0x19de70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19de70) {
            ctx->pc = 0x19DE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DE70u;
            // 0x19de74: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DED4u;
            return;
        }
    }
    ctx->pc = 0x19DE78u;
    // 0x19de78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19de78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19de7c: 0x706518e8  pminw       $v1, $v1, $a1
    ctx->pc = 0x19de7cu;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x19de80: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19de84: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19de84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19de88: 0x52023  negu        $a0, $a1
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x19de8c: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x19de8cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x19de90: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19de90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19de94: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19de94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19de98: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x19de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19de9c: 0x704510e8  pminw       $v0, $v0, $a1
    ctx->pc = 0x19de9cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x19dea0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19dea4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x19dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x19dea8: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x19dea8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x19deac: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19deacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19deb0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x19deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x19deb4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x19deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19deb8: 0x706518e8  pminw       $v1, $v1, $a1
    ctx->pc = 0x19deb8u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x19debc: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x19dec0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x19dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x19dec4: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x19dec4u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    ctx->pc = 0x19dec8u;
}
