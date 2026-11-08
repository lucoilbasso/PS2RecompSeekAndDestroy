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

// Function: entry_001694b8
// Address: 0x1694b8 - 0x1694d0
void entry_001694b8_0x1694b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001694b8_0x1694b8");
#endif

    ctx->pc = 0x1694b8u;

    // 0x1694b8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1694B8u;
    {
        const bool branch_taken_0x1694b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1694BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694B8u;
        // 0x1694bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694b8) {
            ctx->pc = 0x169610u;
            return;
        }
    }
    ctx->pc = 0x1694C0u;
    // 0x1694c0: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1694C0u;
    {
        const bool branch_taken_0x1694c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1694C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C0u;
        // 0x1694c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694c0) {
            ctx->pc = 0x169718u;
            return;
        }
    }
    ctx->pc = 0x1694C8u;
    // 0x1694c8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1694C8u;
    {
        const bool branch_taken_0x1694c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C8u;
        // 0x1694cc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694c8) {
            ctx->pc = 0x1697B8u;
            return;
        }
    }
    ctx->pc = 0x1694D0u;
}
