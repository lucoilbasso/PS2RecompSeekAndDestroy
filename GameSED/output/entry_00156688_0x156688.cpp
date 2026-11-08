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

// Function: entry_00156688
// Address: 0x156688 - 0x1566b0
void entry_00156688_0x156688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156688_0x156688");
#endif

    switch (ctx->pc) {
        case 0x1566a4u: goto label_1566a4;
        default: break;
    }

    ctx->pc = 0x156688u;

    // 0x156688: 0x56800009  bnel        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x156688u;
    {
        const bool branch_taken_0x156688 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x156688) {
            ctx->pc = 0x15668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156688u;
            // 0x15668c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1566B0u;
            return;
        }
    }
    ctx->pc = 0x156690u;
    // 0x156690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156694: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156698: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15669c: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x15669Cu;
    SET_GPR_U32(ctx, 31, 0x1566A4u);
    ctx->pc = 0x1566A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15669Cu;
    // 0x1566a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x15669Cu, 0x1566A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1566A4u;
label_1566a4:
    // 0x1566a4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1566A4u;
    {
        const bool branch_taken_0x1566a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566A4u;
        // 0x1566a8: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566a4) {
            ctx->pc = 0x156764u;
            return;
        }
    }
    ctx->pc = 0x1566ACu;
    // 0x1566ac: 0x0  nop
    ctx->pc = 0x1566acu;
    // NOP
    ctx->pc = 0x1566b0u;
}
