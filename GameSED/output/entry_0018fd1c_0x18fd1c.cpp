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

// Function: entry_0018fd1c
// Address: 0x18fd1c - 0x18fd3c
void entry_0018fd1c_0x18fd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd1c_0x18fd1c");
#endif

    ctx->pc = 0x18fd1cu;

    // 0x18fd1c: 0x262a0150  addiu       $t2, $s1, 0x150
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18fd20: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x18fd20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x18fd24: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x18fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x18fd28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD28u;
    {
        const bool branch_taken_0x18fd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD28u;
        // 0x18fd2c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd28) {
            ctx->pc = 0x18FD3Cu;
            return;
        }
    }
    ctx->pc = 0x18FD30u;
    // 0x18fd30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x18fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18fd34: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18fd34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18fd38: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x18fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    ctx->pc = 0x18fd3cu;
}
