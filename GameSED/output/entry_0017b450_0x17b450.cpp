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

// Function: entry_0017b450
// Address: 0x17b450 - 0x17b4a0
void entry_0017b450_0x17b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b450_0x17b450");
#endif

    switch (ctx->pc) {
        case 0x17b488u: goto label_17b488;
        default: break;
    }

    ctx->pc = 0x17b450u;

    // 0x17b450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b458: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17b458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b45c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b460: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x17b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x17b464: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17b464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17b468: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17b46c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17b470: 0x1066001f  beq         $v1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x17B470u;
    {
        const bool branch_taken_0x17b470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x17B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B470u;
        // 0x17b474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b470) {
            ctx->pc = 0x17B4F0u;
            return;
        }
    }
    ctx->pc = 0x17B478u;
    // 0x17b478: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x17b478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x17b47c: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x17b480: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17B480u;
    SET_GPR_U32(ctx, 31, 0x17B488u);
    ctx->pc = 0x17B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B480u;
    // 0x17b484: 0x8ce40030  lw          $a0, 0x30($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x17B480u, 0x17B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B488u;
label_17b488:
    // 0x17b488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b48c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b494: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17b498: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x17b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17b49c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x17b4a0u;
}
