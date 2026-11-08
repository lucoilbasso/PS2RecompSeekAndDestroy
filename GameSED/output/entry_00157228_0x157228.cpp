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

// Function: entry_00157228
// Address: 0x157228 - 0x15725c
void entry_00157228_0x157228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157228_0x157228");
#endif

    ctx->pc = 0x157228u;

    // 0x157228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15722c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15722cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157234: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x157234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x157238: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x157238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15723c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x15723cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157244: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x157244u;
    {
        const bool branch_taken_0x157244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x157248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157244u;
        // 0x157248: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157244) {
            ctx->pc = 0x15725Cu;
            return;
        }
    }
    ctx->pc = 0x15724Cu;
    // 0x15724c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15724cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x157250: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x157254: 0xc068186  jal         func_1A0618
    ctx->pc = 0x157254u;
    SET_GPR_U32(ctx, 31, 0x15725Cu);
    ctx->pc = 0x157258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157254u;
    // 0x157258: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x157254u, 0x15725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15725Cu;
}
