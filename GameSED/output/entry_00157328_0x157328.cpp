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

// Function: entry_00157328
// Address: 0x157328 - 0x157360
void entry_00157328_0x157328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157328_0x157328");
#endif

    ctx->pc = 0x157328u;

    // 0x157328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15732c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15732cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157334: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x157334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157338: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x157338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x15733c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x157340: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x157340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157348: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157348u;
    {
        const bool branch_taken_0x157348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x15734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157348u;
        // 0x15734c: 0x24500270  addiu       $s0, $v0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157348) {
            ctx->pc = 0x157360u;
            return;
        }
    }
    ctx->pc = 0x157350u;
    // 0x157350: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x157354: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x157358: 0xc068186  jal         func_1A0618
    ctx->pc = 0x157358u;
    SET_GPR_U32(ctx, 31, 0x157360u);
    ctx->pc = 0x15735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157358u;
    // 0x15735c: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x157358u, 0x157360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157360u;
}
