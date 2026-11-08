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

// Function: entry_00162320
// Address: 0x162320 - 0x162338
void entry_00162320_0x162320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162320_0x162320");
#endif

    ctx->pc = 0x162320u;

    // 0x162320: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x162320u;
    {
        const bool branch_taken_0x162320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162320u;
        // 0x162324: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162320) {
            ctx->pc = 0x162428u;
            return;
        }
    }
    ctx->pc = 0x162328u;
    // 0x162328: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x162328u;
    {
        const bool branch_taken_0x162328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162328u;
        // 0x16232c: 0x25040030  addiu       $a0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162328) {
            ctx->pc = 0x162520u;
            return;
        }
    }
    ctx->pc = 0x162330u;
    // 0x162330: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x162330u;
    {
        const bool branch_taken_0x162330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162330) {
            ctx->pc = 0x16257Cu;
            return;
        }
    }
    ctx->pc = 0x162338u;
}
