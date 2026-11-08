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

// Function: entry_00108168
// Address: 0x108168 - 0x10818c
void entry_00108168_0x108168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108168_0x108168");
#endif

    ctx->pc = 0x108168u;

    // 0x108168: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x108168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10816c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x108170: 0x146200e2  bne         $v1, $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x108170u;
    {
        const bool branch_taken_0x108170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108170u;
        // 0x108174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108170) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x108178u;
    // 0x108178: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x108178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x10817c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10817Cu;
    {
        const bool branch_taken_0x10817c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10817c) {
            ctx->pc = 0x10818Cu;
            return;
        }
    }
    ctx->pc = 0x108184u;
    // 0x108184: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x108184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x108188: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x108188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x10818cu;
}
