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

// Function: entry_00150098
// Address: 0x150098 - 0x1500c8
void entry_00150098_0x150098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150098_0x150098");
#endif

    ctx->pc = 0x150098u;

    // 0x150098: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15009c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x15009Cu;
    {
        const bool branch_taken_0x15009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15009c) {
            ctx->pc = 0x1500A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15009Cu;
            // 0x1500a0: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150108u;
            return;
        }
    }
    ctx->pc = 0x1500A4u;
    // 0x1500a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1500a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500a8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1500A8u;
    {
        const bool branch_taken_0x1500a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1500a8) {
            ctx->pc = 0x1500ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1500A8u;
            // 0x1500ac: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1500CCu;
            return;
        }
    }
    ctx->pc = 0x1500B0u;
    // 0x1500b0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1500B0u;
    {
        const bool branch_taken_0x1500b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500B0u;
        // 0x1500b4: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500b0) {
            ctx->pc = 0x1500C8u;
            return;
        }
    }
    ctx->pc = 0x1500B8u;
    // 0x1500b8: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x1500b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x1500bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1500c4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1500c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1500c8u;
}
