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

// Function: entry_00183488
// Address: 0x183488 - 0x1834b8
void entry_00183488_0x183488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183488_0x183488");
#endif

    ctx->pc = 0x183488u;

    // 0x183488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18348c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18348cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183490: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x183490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x183494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x183498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18349c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1834a0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1834a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1834a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1834a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1834A8u;
    {
        const bool branch_taken_0x1834a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1834ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834A8u;
        // 0x1834ac: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834a8) {
            ctx->pc = 0x1834B8u;
            return;
        }
    }
    ctx->pc = 0x1834B0u;
    // 0x1834b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1834B0u;
    {
        const bool branch_taken_0x1834b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834B0u;
        // 0x1834b4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834b0) {
            ctx->pc = 0x1834BCu;
            return;
        }
    }
    ctx->pc = 0x1834B8u;
}
