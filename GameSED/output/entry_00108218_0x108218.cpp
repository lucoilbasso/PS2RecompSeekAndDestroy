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

// Function: entry_00108218
// Address: 0x108218 - 0x10823c
void entry_00108218_0x108218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108218_0x108218");
#endif

    ctx->pc = 0x108218u;

    // 0x108218: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x108218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10821c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x108220: 0x146200b6  bne         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x108220u;
    {
        const bool branch_taken_0x108220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108220u;
        // 0x108224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108220) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x108228u;
    // 0x108228: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x10822c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10822Cu;
    {
        const bool branch_taken_0x10822c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10822c) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x108234u;
    // 0x108234: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x108238: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x108238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x10823cu;
}
