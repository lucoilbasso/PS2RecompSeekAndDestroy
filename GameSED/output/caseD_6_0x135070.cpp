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

// Function: caseD_6
// Address: 0x135070 - 0x135098
void caseD_6_0x135070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x135070");
#endif

    ctx->pc = 0x135070u;

    // 0x135070: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x135070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x135074: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x135074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x135078: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x135078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13507c: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x13507cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x135080: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x135080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x135084: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x135084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135088: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x135088u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x13508c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x13508cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x135090: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x135090u;
    {
        const bool branch_taken_0x135090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135090u;
        // 0x135094: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135090) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x135098u;
}
